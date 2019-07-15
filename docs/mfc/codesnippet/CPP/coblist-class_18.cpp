CObList list;
POSITION pos1, pos2;
CObject* pa;

list.AddHead(new CAge(21));
list.AddHead(new CAge(40));
list.AddHead(new CAge(65)); // List now contains (65 40, 21).
for (pos1 = list.GetHeadPosition(); (pos2 = pos1) != NULL;)
{
   if (*(CAge*)list.GetNext(pos1) == CAge(40))
   {
      pa = list.GetAt(pos2); // Save the old pointer for
                             //deletion.
      list.RemoveAt(pos2);
      delete pa; // Deletion avoids memory leak.
   }
}
#ifdef _DEBUG
afxDump.SetDepth(1);
afxDump << _T("RemoveAt example: ") << &list << _T("\n");
#endif      