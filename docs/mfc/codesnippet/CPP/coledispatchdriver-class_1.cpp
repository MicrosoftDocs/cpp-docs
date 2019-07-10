void COleContainerView::OnAttachDispatch()
{
   CLSID clsidWMP;
   LPDISPATCH pWMPDispatch = NULL;
   COleDispatchDriver oddWMP;

   try
   {
      AfxCheckError(::CLSIDFromProgID(_T("WMPlayer.OCX"), &clsidWMP));

      AfxCheckError(::CoCreateInstance(clsidWMP, NULL, CLSCTX_INPROC_SERVER,
         IID_IDispatch, (LPVOID*)& pWMPDispatch));

      oddWMP.AttachDispatch(pWMPDispatch, TRUE);
      pWMPDispatch = NULL; // our COleDispatchDriver now owns the interface

      CString strUIMode;
      oddWMP.GetProperty(23, VT_BSTR, (void*)& strUIMode);
      TRACE(_T("WMP uiMode is %s.\n"), strUIMode);
   }
   catch (COleException* pe)
   {
      pe->ReportError();
      pe->Delete();
   }
   catch (CMemoryException* pe)
   {
      pe->ReportError();
      pe->Delete();
   }

   // cleanup
   if (NULL != pWMPDispatch)
   {
      pWMPDispatch->Release();
   }

   // COleDispatchDriver automatically releases the dispatch interface when
   // it goes out of scope if m_bAutoRelease is TRUE.
}