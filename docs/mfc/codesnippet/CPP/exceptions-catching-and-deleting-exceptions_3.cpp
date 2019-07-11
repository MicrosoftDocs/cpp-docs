try
{
   // Execute some code that might throw an exception.
   AfxThrowUserException();
}
catch (CMemoryException* e)
{
   // Handle the out-of-memory exception here.
   e->Delete();
}
catch (CFileException* e)
{
   // Handle the file exceptions here.
   e->Delete();
}
catch (CException* e)
{
   // Handle all other types of exceptions here.
   e->Delete();
}