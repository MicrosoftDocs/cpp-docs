CObList list;
CAge* pa1;
CAge* pa2;

list.AddHead(pa1 = new CAge(21));
list.AddHead(pa2 = new CAge(40)); // List now contains (40, 21).
ASSERT(*(CAge*)list.RemoveTail() == CAge(21));  // Old tail
ASSERT(*(CAge*)list.GetTail() == CAge(40));  // New tail
delete pa1;
delete pa2; // Clean up memory.      