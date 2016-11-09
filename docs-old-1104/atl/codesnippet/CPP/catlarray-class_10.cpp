   // Define an array of chars
   CAtlArray<char> cArray;

   // Add an element
   cArray.Add('a');

   // Confirm array is not empty
   ATLASSERT(!cArray.IsEmpty());

   // Remove all elements
   cArray.RemoveAll();

   // Confirm array is empty
   ATLASSERT(cArray.IsEmpty());   