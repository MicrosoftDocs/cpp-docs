         CObArray arr;

         arr.Add(new CAge(21)); // Element 0
         arr.Add(new CAge(40)); // Element 1
         #ifdef _DEBUG
            afxDump.SetDepth(1);
            afxDump << _T("Add example: ") << &arr << _T("\n");
         #endif      