   // Use the parallel_for algorithm to compute multiple 
   // Fibonacci numbers in parallel.
   wcout << endl << L"Parallel Fibonacci:" << endl;
   if (FAILED(hr = ParallelFibonacci(pScriptControl)))
      return hr;