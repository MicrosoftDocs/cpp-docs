class CCoAgent : public agent
{
protected:
   void run()
   {
      // Initialize the COM library on the current thread.
      CoInitializeEx(NULL, COINIT_MULTITHREADED);

      // TODO: Perform work here.
      
      // Free the COM library.
      CoUninitialize();

      // Set the agent to the finished state.
      done();
   }
};