         CObArray myArray;

         // Add elements to the array.
         for (int i = 0; i < 10; i++)
            myArray.Add(new CAge(i));

         // Add 100 to all the elements of the array.
         for (int i = 0; i < myArray.GetCount(); i++)
         {
            CAge*& pAge = (CAge*&) myArray.ElementAt(i);
            delete pAge;
            pAge = new CAge(100 + i);
         }