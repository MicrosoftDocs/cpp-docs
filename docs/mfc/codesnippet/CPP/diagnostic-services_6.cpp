void ExampleFunc(char* p, int size, char fill)
{
   char* q;               // working copy of pointer 
   VERIFY(q = p);         // copy buffer pointer and validate
   ASSERT(size >= 100);   // make sure buffer is at least 100 bytes
   ASSERT(isalpha(fill)); // make sure fill character is alphabetic
   // if fill character is invalid, substitute 'X' so we can continue
   // debugging after the preceding ASSERT fails.
   DEBUG_ONLY(fill = (isalpha(fill)) ? fill : 'X');
}