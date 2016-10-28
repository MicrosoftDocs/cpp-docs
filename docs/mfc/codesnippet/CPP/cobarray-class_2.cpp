         CObArray myArray1, myArray2;

         // Add elements to the second array.
         myArray2.Add(new CAge(21));
         myArray2.Add(new CAge(42));

         // Add elements to the first array and also append the second array.
         myArray1.Add(new CAge(3));
         myArray1.Append(myArray2);

         #ifdef _DEBUG
            afxDump.SetDepth(1);
            afxDump << _T("myArray1: ") << &myArray1 << _T("\n");
            afxDump << _T("myArray2: ") << &myArray2 << _T("\n");
         #endif      