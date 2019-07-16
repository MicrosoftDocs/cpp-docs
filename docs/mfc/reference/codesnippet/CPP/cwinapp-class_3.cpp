// The following example shows how to display the
// hourglass cursor during some lengthy processing
void CMdiView::OnLButtonDown(UINT nFlags, CPoint point)
{
   UNREFERENCED_PARAMETER(nFlags);
   UNREFERENCED_PARAMETER(point);

   AfxGetApp()->DoWaitCursor(1); // 1->>display the hourglass cursor

   // do some lengthy processing
   Sleep(1000);

   AfxGetApp()->DoWaitCursor(-1); // -1->>remove the hourglass cursor
}

// The next example shows DoWaitCursor with parameter 0. It restores
// the hourglass cursor.
void CMdiView::OnMButtonDown(UINT nFlags, CPoint point)
{
   UNREFERENCED_PARAMETER(nFlags);
   UNREFERENCED_PARAMETER(point);

   AfxGetApp()->DoWaitCursor(1); // display the hourglass cursor

   // do some lengthy processing

   // The message box will normally change the cursor to
   // the standard arrow cursor, and leave the cursor in
   // as the standard arrow cursor when the message box is
   // closed.
   AfxMessageBox(_T("DoWaitCursor Sample"));

   // Call DoWaitCursor with parameter 0 to restore
   // the cursor back to the hourglass cursor.
   AfxGetApp()->DoWaitCursor(0);

   // do some more lengthy processing
   Sleep(1000);

   AfxGetApp()->DoWaitCursor(-1); // remove the hourglass cursor
}