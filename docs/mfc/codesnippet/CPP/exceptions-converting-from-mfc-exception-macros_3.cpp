TRY
{
   // Do something to throw an exception.
   AfxThrowUserException();
}
CATCH(CException, e)
{
   if (m_bPassExceptionsUp)
      THROW_LAST();

   if (m_bReturnFromThisFunction)
      return;

   // Not necessary to delete the exception e.
}
END_CATCH