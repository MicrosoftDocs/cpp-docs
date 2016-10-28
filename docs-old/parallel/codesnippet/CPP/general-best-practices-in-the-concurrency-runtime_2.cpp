// A lightweight task that performs a lengthy operation.
void task(void* data)
{   
   task_data_t* task_data = reinterpret_cast<task_data_t*>(data);

   // Create a large loop that occasionally prints a value to the console.
   int i;
   for (i = 0; i < 1000000000; ++i)
   {
      if (i > 0 && (i % 250000000) == 0)
      {
         wstringstream ss;
         ss << task_data->id << L": " << i << endl;
         wcout << ss.str();

         // Yield control back to the task scheduler.
         Context::Yield();
      }
   }
   wstringstream ss;
   ss << task_data->id << L": " << i << endl;
   wcout << ss.str();

   // Signal to the caller that the thread is finished.
   task_data->e.set();
}