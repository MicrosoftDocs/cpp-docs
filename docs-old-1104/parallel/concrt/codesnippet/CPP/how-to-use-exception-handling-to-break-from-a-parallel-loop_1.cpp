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
   void for_all(Function& action);

private:
   // The data for this node.
   T _data;
   // The child nodes.
   list<tree> _children;
};