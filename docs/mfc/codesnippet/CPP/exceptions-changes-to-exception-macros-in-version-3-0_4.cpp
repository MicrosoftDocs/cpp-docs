TRY
{
   // Do something to throw an exception.
   AfxThrowUserException();
}
CATCH(CException, e)
{
   THROW(e);    // Wrong. Use THROW_LAST() instead
}
END_CATCH
   }