CArray<CPoint, CPoint> myArray;
CPoint pt;

// Add elements to the array.
for (int i = 0; i < 10; i++)
{
   myArray.Add(CPoint(i, 2 * i));
}

// Modify all the points in the array.
for (int i = 0; i <= myArray.GetUpperBound(); i++)
{
   pt = myArray.GetAt(i);
   pt.x = 0;
   myArray.SetAt(i, pt);
}