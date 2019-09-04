CArray<CPoint, CPoint> myArray;

// Allocate memory for at least 32 elements.
myArray.SetSize(32, 128);

// Add elements to the array.
CPoint *pPt = (CPoint *)myArray.GetData();
for (int i = 0; i < 32; i++, pPt++)
{
   *pPt = CPoint(i, 2 * i);
}

// Only keep first 5 elements and free extra (unused) bytes.
myArray.SetSize(5, 128);
myArray.FreeExtra();

#if _DEBUG
afxDump.SetDepth(1);
afxDump << "myArray: " << &myArray << "\n";
#endif