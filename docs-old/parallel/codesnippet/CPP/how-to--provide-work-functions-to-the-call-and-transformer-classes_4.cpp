   // Assign to a function object.
   function<void(int)> f1 = bind1st(mem_fun(&square::square_value), &s);
   call<int> c1(f1);

   // Alternatively, use the auto keyword to have the compiler deduce the type.
   auto f2 = bind1st(mem_fun(&square::square_value), &s);
   call<int> c2(f2);