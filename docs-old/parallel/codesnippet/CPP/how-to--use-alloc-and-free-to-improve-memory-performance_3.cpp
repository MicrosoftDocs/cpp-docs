int wmain()
{  
   // Compute the time that it takes to reverse large arrays of 
   // different types.

   // new_delete
   wcout << L"Took " << reverse_array<new_delete>() 
         << " ms with new/delete." << endl;

   // malloc_free
   wcout << L"Took " << reverse_array<malloc_free>() 
         << " ms with malloc/free." << endl;

   // Alloc_Free
   wcout << L"Took " << reverse_array<Alloc_Free>() 
         << " ms with Alloc/Free." << endl;
}