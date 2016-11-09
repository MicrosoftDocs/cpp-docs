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
   wcout << endl << L"Main Thread:" << endl;
   LONG lValue = 15;
   array<_variant_t, 1> args = { _variant_t(lValue) };
   _variant_t result = RunScriptProcedure(
      pScriptControl, 
      _bstr_t("fib"), 
      args);
   // Print the result.
   wcout << L"fib(" << lValue << L") = " << result.lVal << endl;

   return S_OK;
}