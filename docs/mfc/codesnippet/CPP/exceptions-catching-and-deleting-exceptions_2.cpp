try
{
   // Execute some code that might throw an exception.
   AfxThrowUserException();
}
catch (CException* e)
{
   // Handle the exception here.
   // "e" contains information about the exception.
   e->Delete();
}