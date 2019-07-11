CObArray arr;
CAge* pa1;
CAge* pa2;

arr.Add(pa1 = new CAge(21)); // Element 0
arr.Add(pa2 = new CAge(40)); // Element 1
ASSERT(arr.GetSize() == 2);
arr.RemoveAll(); // Pointers removed but objects not deleted.
ASSERT(arr.GetSize() == 0);
delete pa1;
delete pa2;  // Cleans up memory.      