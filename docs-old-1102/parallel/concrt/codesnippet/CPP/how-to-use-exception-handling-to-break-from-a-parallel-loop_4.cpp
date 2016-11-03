int wmain()
{  
   // Build a tree that is four levels deep with the initial level 
   // having three children. The value of each node is a random number.
   mt19937 gen(38);
   tree<int> t = build_tree<int>(4, 3, [&gen]{ return gen()%100000; });

   // Search for a few values in the tree in parallel.
   parallel_invoke(
      [&t] { search_for_value(t, 86131); },
      [&t] { search_for_value(t, 17522); },
      [&t] { search_for_value(t, 32614); }
   );
}