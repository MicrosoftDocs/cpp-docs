VARIANT retVariantArray()
{
   COleSafeArray saRet;
   DWORD numElements[] = { 10, 10 }; // 10x10

   // Create the 2 dimensional safe-array of type VT_R8 with size 10x10
   saRet.Create(VT_R8, 2, numElements);

   // Initialize safearray  with values...
   long index[2];
   for (index[0] = 0; index[0] < 10; index[0]++)
   {
      for (index[1] = 0; index[1] < 10; index[1]++)
      {
         double val = index[0] + index[1] * 10;
         //populate the safearray elements with double values
         saRet.PutElement(index, &val);
      }
   }
   // Return the safe-array encapsulated in a VARIANT...
   return saRet.Detach();
}