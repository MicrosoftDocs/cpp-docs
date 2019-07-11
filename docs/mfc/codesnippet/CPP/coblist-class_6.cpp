CObList list;
POSITION pos;

list.AddHead(new CAge(21));
list.AddHead(new CAge(40)); // List now contains (40, 21).
if ((pos = list.FindIndex(0)) != NULL)
{
   ASSERT(*(CAge*)list.GetAt(pos) == CAge(40));
}