   MyDataType data;
   initialize_data(data);

   concurrency::parallel_invoke(
      [&data] { lengthy_operation1(data); },
      [&data] { lengthy_operation2(data); },
      [&data] { lengthy_operation3(data); }
   );