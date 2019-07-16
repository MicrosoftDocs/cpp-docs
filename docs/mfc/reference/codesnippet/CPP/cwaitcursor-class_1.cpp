BOOL SomeLengthyProcess()
{
   CWaitCursor wait;
   //Do the lengthy processing.
   Sleep(1000);

   AfxMessageBox(_T("Some result")); //This changes the cursor.
   wait.Restore();                   //Restore the Wait cursor.
   //Continue Processing.
   Sleep(1000);

   //The destructor changes the cursor back to Regular cursor.
   return TRUE;
}