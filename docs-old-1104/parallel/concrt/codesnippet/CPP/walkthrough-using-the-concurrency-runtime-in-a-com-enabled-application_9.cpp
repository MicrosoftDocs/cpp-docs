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