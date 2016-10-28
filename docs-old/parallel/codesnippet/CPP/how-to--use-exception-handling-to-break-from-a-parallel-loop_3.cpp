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