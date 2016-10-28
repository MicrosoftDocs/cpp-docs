// A basic lightweight task that you schedule directly from a 
// Scheduler or ScheduleGroup object.
void ThreadProc(void* data)
{
   // Initialize the COM library on the current thread.
   CoInitializeEx(NULL, COINIT_MULTITHREADED);

   // TODO: Perform work here.
      
   // Free the COM library.
   CoUninitialize();
}