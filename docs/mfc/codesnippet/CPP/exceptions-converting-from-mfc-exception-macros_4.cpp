try
{
   // Do something to throw an exception.
   AfxThrowUserException();
}
catch (CException* e)
{
   if (m_bPassExceptionsUp)
      throw;

   if (m_bThrowDifferentException)
   {
      e->Delete();
      throw new CMyOtherException;
   }

   if (m_bReturnFromThisFunction)
   {
      e->Delete();
      return;
   }

   e->Delete();
}