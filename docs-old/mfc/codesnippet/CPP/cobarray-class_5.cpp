         CObArray arr;

         arr.Add(new CAge(21)); // Element 0
         arr.Add(new CAge(40)); // Element 1
         ASSERT(*(CAge*) arr.GetAt(0) == CAge(21));      