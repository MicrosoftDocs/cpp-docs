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