CObList list;
POSITION pos;
list.AddHead(new CAge(21));
list.AddHead(new CAge(40)); // List now contains (40, 21).
// Iterate through the list in head-to-tail order.
#ifdef _DEBUG
for (pos = list.GetHeadPosition(); pos != NULL;)
{
   afxDump << list.GetNext(pos) << _T("\n");
}
#endif      