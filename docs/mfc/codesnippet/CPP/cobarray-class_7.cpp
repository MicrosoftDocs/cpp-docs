CObArray myArray;

// Allocate memory for at least 32 elements.
myArray.SetSize(32, 128);

// Add elements to the array.
CAge** ppAge = (CAge * *)myArray.GetData();
for (int i = 0; i < 32; i++, ppAge++)
   * ppAge = new CAge(i);

// Only keep first 5 elements and free extra (unused) bytes.
for (int i = 5; i < myArray.GetCount(); i++)
{
   delete myArray[i]; // free objects before resetting array size.         
}
myArray.SetSize(5, 128);
myArray.FreeExtra(); // only frees pointers.

#ifdef _DEBUG
afxDump.SetDepth(1);
afxDump << _T("myArray: ") << &myArray << _T("\n");
#endif      