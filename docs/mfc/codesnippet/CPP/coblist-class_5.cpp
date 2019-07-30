CObList list;
CAge* pa1;
CAge* pa2;
POSITION pos;
list.AddHead(pa1 = new CAge(21));
list.AddHead(pa2 = new CAge(40));    // List now contains (40, 21).
if ((pos = list.Find(pa1)) != NULL) // Hunt for pa1
{                                  // starting at head by default.
   ASSERT(*(CAge*)list.GetAt(pos) == CAge(21));
}