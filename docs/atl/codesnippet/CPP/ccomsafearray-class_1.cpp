   // Create a multidimensional array, 
   // then write and read elements

   // Define an array of character pointers
   CComSafeArray<char> *pSar;

   char cElement;
   char cTable[2][3] = {'A','B','C','D','E','F'};

   // Declare the variable used to store the
   // array indexes
   LONG aIndex[2];

   // Define the array bound structure
   CComSafeArrayBound bound[2];
   bound[0].SetCount(3);
   bound[0].SetLowerBound(0);
   bound[1].SetCount(3);
   bound[1].SetLowerBound(0);   
   
   // Create a new 2 dimensional array
   // each dimension size is 3
   pSar = new CComSafeArray<char>(bound,2); 

   // Use MultiDimSetAt to store characters in the array
   for (int x = 0; x < 2; x++)
   {
      for (int y = 0; y < 3; y++)
      {
         aIndex[0] = x;
         aIndex[1] = y;
         HRESULT hr = pSar->MultiDimSetAt(aIndex,cTable[x][y]);
         ATLASSERT(hr == S_OK);
      }
   }
   // Use MultiDimGetAt to retrieve characters in the array
   for (int x = 0; x < 2; x++)
   {
      for (int y = 0; y < 3; y++)
      {
         aIndex[0]=x;
         aIndex[1]=y;
         HRESULT hr = pSar->MultiDimGetAt(aIndex,cElement);
         ATLASSERT(hr == S_OK);
         ATLASSERT(cElement == cTable[x][y]);
      }   
   }