         CObList list;
         POSITION pos1, pos2;
         list.AddHead(new CAge(21));
         list.AddHead(new CAge(40)); // List now contains (40, 21).
         if ((pos1 = list.GetTailPosition()) != NULL)
         {
             pos2 = list.InsertBefore(pos1, new CAge(65));
         }
         #ifdef _DEBUG
            afxDump.SetDepth(1);
            afxDump << _T("InsertBefore example: ") << &list << _T("\n");
         #endif      