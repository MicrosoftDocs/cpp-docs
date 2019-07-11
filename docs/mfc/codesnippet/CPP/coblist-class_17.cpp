CObList list;
CAge* pa1;
CAge* pa2;
ASSERT(list.IsEmpty()); // Yes it is.
list.AddHead(pa1 = new CAge(21));
list.AddHead(pa2 = new CAge(40)); // List now contains (40, 21).
ASSERT(!list.IsEmpty()); // No it isn't.
list.RemoveAll(); // CAges aren't destroyed.
ASSERT(list.IsEmpty()); // Yes it is.
delete pa1;     // Now delete the CAge objects.
delete pa2;