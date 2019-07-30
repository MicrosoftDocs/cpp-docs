CArray<CPoint, CPoint> myArray1, myArray2;

// Add elements to the second array.
myArray2.Add(CPoint(11, 22));
myArray2.Add(CPoint(12, 42));

// Copy the elements from the second array to the first.
myArray1.Copy(myArray2);