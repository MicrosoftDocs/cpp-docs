CObArray arr;
CObject* pa;

arr.Add(new CAge(21)); // Element 0
arr.Add(new CAge(40)); // Element 1
if ((pa = arr.GetAt(0)) != NULL)
{
   arr.SetAt(0, new CAge(30));  // Replace element 0.
   delete pa; // Delete the original element at 0.
}
#ifdef _DEBUG
afxDump.SetDepth(1);
afxDump << _T("SetAt example: ") << &arr << _T("\n");
#endif      