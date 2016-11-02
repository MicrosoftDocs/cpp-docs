   // Use asynchronous agents to compute multiple 
   // Fibonacci numbers in parallel.
   wcout << endl << L"Agent Fibonacci:" << endl;
   if (FAILED(hr = AgentFibonacci(pScriptControl)))
      return hr;