// task-tree-search.cpp
// compile with: /EHsc
#include <ppl.h>
#include <list>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <random>

using namespace concurrency;
using namespace std;

// A simple tree structure that has multiple child nodes.
template <typename T>
class tree
{
public:
   explicit tree(T data)
      : _data(data)
   {
   }

   // Retrieves the data element for the node. 
   T get_data() const
   {
      return _data;
   }

   // Adds a child node to the tree.
   void add_child(tree& child)
   {
      _children.push_back(child);
   }

   // Performs the given work function on the data element of the tree and
   // on each child.
   template<class Function>
   void for_all(Function& action)
   {
      // Perform the action on each child.
      parallel_for_each(begin(_children), end(_children), [&](tree& child) {
         child.for_all(action);
      });

      // Perform the action on this node.
      action(*this);
   }

private:
   // The data for this node.
   T _data;
   // The child nodes.
   list<tree> _children;
};

// Builds a tree with the given depth. 
// Each node of the tree is initialized with the provided generator function.
// Each level of the tree has one more child than the previous level.
template <typename T, class Generator>
tree<T> build_tree(int depth, int child_count, Generator& g)
{
   // Create the tree node.
   tree<T> t(g());

   // Add children.
   if (depth > 0)
   {
      for(int i = 0; i < child_count; ++i)
      {
         t.add_child(build_tree<T>(depth - 1, child_count + 1, g));
      }
   }

   return t;
}

// Searches for a value in the provided tree object.
template <typename T>
void search_for_value(tree<T>& t, int value)
{
   try
   {
      // Call the for_all method to search for a value. The work function
      // throws an exception when it finds the value.
      t.for_all([value](const tree<T>& node) {
         if (node.get_data() == value)
         {
            throw &node;
         }
      });
   }
   catch (const tree<T>* node)
   {
      // A matching node was found. Print a message to the console.
      wstringstream ss;
      ss << L"Found a node with value " << value << L'.' << endl;
      wcout << ss.str();
      return;
   }

   // A matching node was not found. Print a message to the console.
   wstringstream ss;
   ss << L"Did not find node with value " << value << L'.' << endl;
   wcout << ss.str();   
}

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