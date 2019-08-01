TRY
{
   TRY
   {
   // Do something to throw an exception.
   AfxThrowUserException();
}
CATCH(CException, e)  // The "inner" catch block
{
   throw;  // Invalid attempt to throw exception
         // to the outer catch block below.
}
END_CATCH
}
CATCH(CException, e)  // The "outer" catch block
{
   // Pointer e is invalid because
   // it was deleted in the inner catch block.
}
END_CATCH