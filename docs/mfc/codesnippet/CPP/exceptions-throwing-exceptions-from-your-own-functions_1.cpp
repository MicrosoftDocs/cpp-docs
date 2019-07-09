{
char* p1 = (char*)malloc(SIZE_FIRST);
if (p1 == NULL)
AfxThrowMemoryException();
char* p2 = (char*)malloc(SIZE_SECOND);
if (p2 == NULL)
{
   free(p1);
   AfxThrowMemoryException();
}

// ... Do something with allocated blocks ...

// In normal exit, both blocks are deleted.
free(p1);
free(p2);
}