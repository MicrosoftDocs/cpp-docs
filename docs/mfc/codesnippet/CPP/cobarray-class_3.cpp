CObArray myArray1, myArray2;

// Add elements to the second array.
myArray2.Add(new CAge(21));
myArray2.Add(new CAge(42));

// Copy the elements from the second array to the first.
myArray1.Copy(myArray2);

#ifdef _DEBUG
afxDump.SetDepth(1);
afxDump << "myArray1: " << &myArray1 << "\n";
afxDump << "myArray2: " << &myArray2 << "\n";
#endif      