CObArray arr;

arr.Add(new CAge(21)); // Element 0
arr.Add(new CAge(40)); // Element 1
ASSERT(arr.GetUpperBound() == 1); // Largest index      