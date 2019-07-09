TRY
{
   THROW((CException*) new CCustomException());
}
CATCH(CCustomException, e)
{
   TRACE("MFC 2.x will land here\n");
}
AND_CATCH(CException, e)
{
   TRACE("MFC 3.0 will land here\n");
}
END_CATCH