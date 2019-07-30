// Allocate a 5 character array, which should have a valid memory address.
char* arr = new char[5];

// Create a null pointer, which should be an invalid memory address.
char* null = (char*)0x0;

ASSERT(AfxIsValidAddress(arr, 5));
ASSERT(!AfxIsValidAddress(null, 5));