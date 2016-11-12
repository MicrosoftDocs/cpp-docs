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