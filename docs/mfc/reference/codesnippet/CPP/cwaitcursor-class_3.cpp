// This example illustrates performing an operation
// which changes the wait cursor. You should call
// CWaitCursor::Restore to restore the wait
// cursor after an operation which changes the cursor.
void AnotherLengthyFunction()
{
   CWaitCursor wait; // display wait cursor

   // do some lengthy processing
   Sleep(1000);

   // The dialog box will normally change the cursor to
   // the standard arrow cursor.
   CFileDialog dlg(TRUE);
   dlg.DoModal();

   // It is necessary to call Restore here in order
   // to change the cursor back to the wait cursor.
   wait.Restore();

   // do some more lengthy processing
   Sleep(1000);

   // destructor automatically removes the wait cursor
}

// If the wait cursor is changed by a function called by
// the function which created the wait cursor, you
// can call CCmdTarget::RestoreWaitCursor to restore
// the wait cursor.
void CalledFunction()
{
   CFileDialog dlg(TRUE);
   dlg.DoModal();

   // Since CWinApp is derived from CCmdTarget, we can use a
   // pointer to our application object to make the call to
   // CCmdTarget::RestoreWaitCursor.
   AfxGetApp()->RestoreWaitCursor();

   // Yet more lengthy processing...
   Sleep(1000);
}