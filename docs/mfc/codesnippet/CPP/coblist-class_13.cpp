CObList list;

list.AddHead(new CAge(21));
list.AddHead(new CAge(40)); // List now contains (40, 21).
ASSERT(*(CAge*)list.GetTail() == CAge(21));