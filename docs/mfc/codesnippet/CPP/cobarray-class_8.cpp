CObArray myArray;

// Add elements to the array.
for (int i = 0; i < 10; i++)
   myArray.Add(new CAge(i));

// Add 100 to all the elements of the array.
for (int i = 0; i < myArray.GetSize(); i++)
{
   CAge*& pAge = (CAge * &)myArray.ElementAt(i);
   delete pAge;
   pAge = new CAge(100 + i);
}

#ifdef _DEBUG
afxDump.SetDepth(1);
afxDump << _T("myArray: ") << &myArray << _T("\n");
#endif      