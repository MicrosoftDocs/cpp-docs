TRY
{
   // Do something to throw an exception.
   AfxThrowUserException();
}
CATCH(CException, e)
{
   try
   {
      throw;  // Wrong.  Causes e (the exception 
            // being thrown) to be deleted.
   }
   catch (CException* exception)
   {
      exception->ReportError();
   }
}
END_CATCH