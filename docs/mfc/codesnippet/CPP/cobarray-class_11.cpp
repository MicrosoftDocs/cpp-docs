CObArray arr;
CAge* pa;

arr.Add(new CAge(21)); // Element 0
arr.Add(new CAge(40)); // Element 1
pa = (CAge*)arr[0]; // Get element 0
ASSERT(*pa == CAge(21)); // Get element 0
arr[0] = new CAge(30); // Replace element 0
delete pa;
ASSERT(*(CAge*)arr[0] == CAge(30)); // Get new element 0      