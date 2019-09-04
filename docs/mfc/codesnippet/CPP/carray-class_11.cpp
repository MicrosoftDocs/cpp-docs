CArray<CPoint, CPoint> myArray;

// Add elements to the array.
for (int i = 0; i < 10; i++)
   myArray.Add(CPoint(i, 2 * i));

myArray.RemoveAll();

#ifdef _DEBUG
afxDump.SetDepth(1);
afxDump << "myArray: " << &myArray << "\n";
#endif