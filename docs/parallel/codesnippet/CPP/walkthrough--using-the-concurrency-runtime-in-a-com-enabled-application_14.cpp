// parallel-scripts.cpp
// compile with: /EHsc 

#include <agents.h>
#include <ppl.h>
#include <array>
#include <sstream>
#include <iostream>
#include <atlsafe.h>

// TODO: Change this path if necessary.
#import "C:\windows\system32\msscript.ocx"

using namespace concurrency;
using namespace MSScriptControl;
using namespace std;

// An exception-safe wrapper class that manages the lifetime 
// of the COM library in a given scope.
class CCoInitializer
{
public:
   explicit CCoInitializer(DWORD dwCoInit = COINIT_APARTMENTTHREADED)
      : _coinitialized(false)
   {
      // Initialize the COM library on the current thread.
      HRESULT hr = CoInitializeEx(NULL, dwCoInit);
      if (FAILED(hr))
         throw hr;
      _coinitialized = true;
   }
   ~CCoInitializer()
   {
      // Free the COM library.
      if (_coinitialized)
         CoUninitialize();
   }
private:
   // Flags whether COM was properly initialized.
   bool _coinitialized;

   // Hide copy constructor and assignment operator.
   CCoInitializer(const CCoInitializer&);
   CCoInitializer& operator=(const CCoInitializer&);
};

// Calls a procedure in an IScriptControl object.
template<size_t ArgCount>
_variant_t RunScriptProcedure(IScriptControlPtr pScriptControl, 
   _bstr_t& procedureName, array<_variant_t, ArgCount>& arguments)
{
   // Create a 1-dimensional, 0-based safe array.
   SAFEARRAYBOUND rgsabound[]  = { ArgCount, 0 };
   CComSafeArray<VARIANT> sa(rgsabound, 1U);

   // Copy the arguments to the safe array.
   LONG lIndex = 0;
   for_each(begin(arguments), end(arguments), [&](_variant_t& arg) {
      HRESULT hr = sa.SetAt(lIndex, arg);
      if (FAILED(hr))
         throw hr;
      ++lIndex;
   });

   //  Call the procedure in the script.
   return pScriptControl->Run(procedureName, &sa.m_psa);
}

// Computes multiple Fibonacci numbers in parallel by using 
// the parallel_for algorithm.
HRESULT ParallelFibonacci(IScriptControlPtr pScriptControl)
{
   try {
      parallel_for(10L, 20L, [&pScriptControl](LONG lIndex) 
      {
         // Enable COM for the lifetime of the task.
         CCoInitializer coinit(COINIT_MULTITHREADED);

         // Call the helper function to run the script procedure.
         array<_variant_t, 1> args = { _variant_t(lIndex) };
         _variant_t result = RunScriptProcedure(
            pScriptControl, 
            _bstr_t("fib"), 
            args);
         
         // Print the result.
         wstringstream ss;         
         ss << L"fib(" << lIndex << L") = " << result.lVal << endl;
         wcout << ss.str();
      });
   }
   catch (HRESULT hr) {
      return hr;
   }
   return S_OK;
}

// A basic agent that calls a script procedure to compute the 
// nth Fibonacci number.
class FibonacciScriptAgent : public agent
{
public:
   FibonacciScriptAgent(IScriptControlPtr pScriptControl, ISource<LONG>& source)
      : _pScriptControl(pScriptControl)
      , _source(source) { }

public:
   // Retrieves the result code.
   HRESULT GetHRESULT() 
   {
      return receive(_result);
   }

protected:
   void run()
   {
      // Initialize the COM library on the current thread.
      CoInitializeEx(NULL, COINIT_MULTITHREADED);

      // Read values from the message buffer until 
      // we receive the sentinel value.      
      LONG lValue;
      while ((lValue = receive(_source)) != Sentinel)
      {
         try {
            // Call the helper function to run the script procedure.
            array<_variant_t, 1> args = { _variant_t(lValue) };
            _variant_t result = RunScriptProcedure(
               _pScriptControl, 
               _bstr_t("fib"), 
               args);
            
            // Print the result.
            wstringstream ss;         
            ss << L"fib(" << lValue << L") = " << result.lVal << endl;
            wcout << ss.str();
         }
         catch (HRESULT hr) {
            send(_result, hr);
            break;    
         }
      }

      // Set the result code (does nothing if a value is already set).
      send(_result, S_OK);

      // Free the COM library.
      CoUninitialize();

      // Set the agent to the finished state.
      done();
   }

public:
   // Signals the agent to terminate.
   static const LONG Sentinel = 0L;

private:
   // The IScriptControl object that contains the script procedure.
   IScriptControlPtr _pScriptControl;
   // Message buffer from which to read arguments to the 
   // script procedure.
   ISource<LONG>& _source;
   // The result code for the overall operation.
   single_assignment<HRESULT> _result;
};

// Computes multiple Fibonacci numbers in parallel by using 
// asynchronous agents.
HRESULT AgentFibonacci(IScriptControlPtr pScriptControl)
{
   // Message buffer to hold arguments to the script procedure.
   unbounded_buffer<LONG> values;

   // Create several agents.
   array<agent*, 3> agents = 
   {
      new FibonacciScriptAgent(pScriptControl, values),
      new FibonacciScriptAgent(pScriptControl, values),
      new FibonacciScriptAgent(pScriptControl, values),
   };

   // Start each agent.
   for_each(begin(agents), end(agents), [](agent* a) {
      a->start();
   });

   // Send a few values to the agents.
   send(values, 30L);
   send(values, 22L);
   send(values, 10L);
   send(values, 12L);
   // Send a sentinel value to each agent.
   for_each(begin(agents), end(agents), [&values](agent*) {
      send(values, FibonacciScriptAgent::Sentinel);
   });

   // Wait for all agents to finish.
   agent::wait_for_all(3, &agents[0]);

   // Determine the result code.
   HRESULT hr = S_OK;
   for_each(begin(agents), end(agents), [&hr](agent* a) {
      HRESULT hrTemp;
      if (FAILED(hrTemp = 
         reinterpret_cast<FibonacciScriptAgent*>(a)->GetHRESULT()))
      {
         hr = hrTemp;
      }
   });

   // Clean up.
   for_each(begin(agents), end(agents), [](agent* a) {
      delete a;
   });

   return hr;
}

int wmain()
{
   HRESULT hr;

   // Enable COM on this thread for the lifetime of the program.   
   CCoInitializer coinit(COINIT_MULTITHREADED);
     
   // Create the script control.
   IScriptControlPtr pScriptControl(__uuidof(ScriptControl));
   
   // Set script control properties.
   pScriptControl->Language = "JScript";
   pScriptControl->AllowUI = TRUE;

   // Add script code that computes the nth Fibonacci number.
   hr = pScriptControl->AddCode(
      "function fib(n) { if (n<2) return n; else return fib(n-1) + fib(n-2); }" );
   if (FAILED(hr))
      return hr;

   // Test the script control by computing the 15th Fibonacci number.
   wcout << L"Main Thread:" << endl;
   long n = 15;
   array<_variant_t, 1> args = { _variant_t(n) };
   _variant_t result = RunScriptProcedure(
      pScriptControl, 
      _bstr_t("fib"), 
      args);
   // Print the result.
   wcout << L"fib(" << n << L") = " << result.lVal << endl;

   // Use the parallel_for algorithm to compute multiple 
   // Fibonacci numbers in parallel.
   wcout << endl << L"Parallel Fibonacci:" << endl;
   if (FAILED(hr = ParallelFibonacci(pScriptControl)))
      return hr;

   // Use asynchronous agents to compute multiple 
   // Fibonacci numbers in parallel.
   wcout << endl << L"Agent Fibonacci:" << endl;
   if (FAILED(hr = AgentFibonacci(pScriptControl)))
      return hr;

   return S_OK;
}