   CAtlArray<int> iArrayS, iArrayT;

   iArrayS.Add(1);
   iArrayS.Add(2);

   iArrayT.Add(3);
   iArrayT.Add(4);

   iArrayT.Copy(iArrayS);

   ATLASSERT(iArrayT.GetCount() == 2);
   ATLASSERT(iArrayT[0] == 1);
   ATLASSERT(iArrayT[1] == 2);   