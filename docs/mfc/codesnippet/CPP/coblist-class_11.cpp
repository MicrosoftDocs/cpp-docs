CObList list;
POSITION pos;

list.AddHead(new CAge(21));
list.AddHead(new CAge(40)); // List now contains (40, 21).
// Iterate through the list in tail-to-head order.
for (pos = list.GetTailPosition(); pos != NULL;)
{
#ifdef _DEBUG
   afxDump << list.GetPrev(pos) << _T("\n");
#endif
}