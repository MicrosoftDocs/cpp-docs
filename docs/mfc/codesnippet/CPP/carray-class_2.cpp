CArray<CPoint, CPoint> myArray1, myArray2;

// Add elements to the second array.
myArray2.Add(CPoint(11, 22));
myArray2.Add(CPoint(12, 42));

// Add elements to the first array and also append the second array.
myArray1.Add(CPoint(1, 2));
myArray1.Append(myArray2);