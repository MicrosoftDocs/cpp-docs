CArray<CPoint, CPoint> myArray;

// Add elements to the array.
for (int i = 0; i < 10; i++)
   myArray.Add(CPoint(i, 2 * i));

// Modify all the points in the array.
for (int i = 0; i < myArray.GetCount(); i++)
{
   CPoint &pt = myArray.ElementAt(i);
   pt.x = 0;
}