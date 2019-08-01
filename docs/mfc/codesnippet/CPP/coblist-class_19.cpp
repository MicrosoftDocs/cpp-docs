CObList list;
CAge* pa1;
CAge* pa2;

list.AddHead(pa1 = new CAge(21));
list.AddHead(pa2 = new CAge(40)); // List now contains (40, 21).
ASSERT(*(CAge*)list.RemoveHead() == CAge(40));  // Old head
ASSERT(*(CAge*)list.GetHead() == CAge(21));  // New head
delete pa1;
delete pa2;