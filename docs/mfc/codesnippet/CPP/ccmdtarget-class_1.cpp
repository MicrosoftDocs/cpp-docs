// The following example illustrates the most common case
// of displaying the hourglass cursor during some lengthy
// processing of a command handler implemented in some
// CCmdTarget-derived class, such as a document or view.
void CMyView::OnBeginSleepEnd()
{
   BeginWaitCursor(); // display the hourglass cursor
   // do some lengthy processing
   Sleep(3000);
   EndWaitCursor(); // remove the hourglass cursor
}

// The next example illustrates RestoreWaitCursor.
void CMyView::OnBeginDlgRestore()
{
   BeginWaitCursor(); // display the hourglass cursor
   // do some lengthy processing
   // The dialog box will normally change the cursor to
   // the standard arrow cursor, and leave the cursor in
   // as the standard arrow cursor when the dialog box is
   // closed.
   CFileDialog dlg(TRUE);
   dlg.DoModal();

   // It is necessary to call RestoreWaitCursor here in order
   // to change the cursor back to the hourglass cursor.
   RestoreWaitCursor();
   // do some more lengthy processing
   Sleep(3000);
   EndWaitCursor(); // remove the hourglass cursor
}

// In the above example, the dialog was clearly invoked between
// the pair of calls to BeginWaitCursor and EndWaitCursor.
// Sometimes it may not be clear whether the dialog is invoked
// in between a pair of calls to BeginWaitCursor and EndWaitCursor.
// It is permissible to call RestoreWaitCursor, even if
// BeginWaitCursor was not previously called.  This case is
// illustrated below, where CMyView::AnotherFunction does not
// need to know whether it was called in the context of an
// hourglass cursor.
void CMyView::OnDlgRestore()
{
   // some processing ...
   CFileDialog dlg(TRUE);
   dlg.DoModal();
   RestoreWaitCursor();

   // some more processing ...
}

// If the dialog is invoked from a member function of
// some non-CCmdTarget, then you can call CWinApp::DoWaitCursor
// with a 0 parameter value to restore the hourglass cursor.
void CMyObject::OnDlgDoWait()
{
   CFileDialog dlg(TRUE);
   dlg.DoModal();
   AfxGetApp()->DoWaitCursor(0); // same as CCmdTarget::RestoreWaitCursor
}