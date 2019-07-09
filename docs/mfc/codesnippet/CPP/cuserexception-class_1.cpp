void DoSomeOperation()
{
   // Processing
   // If something goes wrong...
   AfxMessageBox(_T("The x operation failed"));
   AfxThrowUserException();
}

BOOL TrySomething()
{
   try
   {
      // Could throw a CUserException or other exception.
      DoSomeOperation();
   }
   catch (CUserException* pe)
   {
      pe->Delete();
      return FALSE;    // User already notified.
   }
   catch (CException* pe)
   {
      // For other exception types, notify user here.
      pe->ReportError();
      return FALSE;
   }
   return TRUE;   // No exception thrown.
}