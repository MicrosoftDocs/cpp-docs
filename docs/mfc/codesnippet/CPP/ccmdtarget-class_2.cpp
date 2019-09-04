// This example illustrates extending the framework's standard command
// route from the view to objects managed by the view.  This example
// is from an object-oriented drawing application, similar to the
// DRAWCLI sample application, which draws and edits "shapes".
BOOL CMyView::OnCmdMsg(UINT nID,
                       int nCode,
                       void *pExtra,
                       AFX_CMDHANDLERINFO *pHandlerInfo)
{
   // Extend the framework's command route from the view to
   // the application-specific CMyShape that is currently selected
   // in the view. m_pActiveShape is NULL if no shape object
   // is currently selected in the view.
   if ((m_pActiveShape != NULL) &&
       m_pActiveShape->OnCmdMsg(nID, nCode, pExtra, pHandlerInfo))
      return TRUE;

   // If the object(s) in the extended command route don't handle
   // the command, then let the base class OnCmdMsg handle it.
   return CView::OnCmdMsg(nID, nCode, pExtra, pHandlerInfo);
}