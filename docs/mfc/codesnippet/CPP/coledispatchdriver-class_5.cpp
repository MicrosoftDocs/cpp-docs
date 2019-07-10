// Clean up by forcing Release to be called
// on COleDispatchDriver object and delete
if (bError)
{
   pDisp->m_bAutoRelease = TRUE;
   delete pDisp;
   pDisp = NULL;
}