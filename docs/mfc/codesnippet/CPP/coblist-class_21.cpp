CObList list;
CObject* pa;
POSITION pos;

list.AddHead(new CAge(21));
list.AddHead(new CAge(40)); // List now contains (40, 21).
if ((pos = list.GetTailPosition()) != NULL)
{
   pa = list.GetAt(pos); // Save the old pointer for 
                         //deletion.
   list.SetAt(pos, new CAge(65));  // Replace the tail 
                                     //element.
   delete pa;  // Deletion avoids memory leak.
}
#ifdef _DEBUG
afxDump.SetDepth(1);
afxDump << _T("SetAt example: ") << &list << _T("\n");
#endif      