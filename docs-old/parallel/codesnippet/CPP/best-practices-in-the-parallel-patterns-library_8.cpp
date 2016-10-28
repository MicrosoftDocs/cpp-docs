   // Performs the given work function on the data element of the tree and
   // on each child.
   template<class Function>
   void tree::for_all(Function& action)
   {
      // Perform the action on each child.
      parallel_for_each(begin(_children), end(_children), [&](tree& child) {
         child.for_all(action);
      });

      // Perform the action on this node.
      action(*this);
   }