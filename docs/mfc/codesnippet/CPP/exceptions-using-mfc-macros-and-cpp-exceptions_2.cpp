TRY
{
   TRY
   {
   // Do something to throw an exception.
   AfxThrowUserException();
}
CATCH(CException, e)  // The "inner" catch block
{
   THROW_LAST(); // Throw exception to the outer catch block below.
}
END_CATCH
}
CATCH(CException, e)  // The "outer" catch block
{
   // Pointer e is valid because
   // THROW_LAST() was used.
}
END_CATCH