// Create a character string which should be valid.
char str[12] = "hello world";

// Create a null pointer, which should be an invalid string.
char* null = (char*)0x0;

ASSERT(AfxIsValidString(str, 12));
ASSERT(!AfxIsValidString(null, 5));