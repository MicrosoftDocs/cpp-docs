void COleContainerView::OnCreateDispatch()
{
   COleDispatchDriver disp;
   COleException* pe = new COleException;

   try
   {
      // Create instance of Microsoft System Information Control 
      // by using ProgID.
      if (disp.CreateDispatch(_T("WMPlayer.OCX"), pe))
      {
         //Get uiMode.     
         CString strUIMode;
         disp.InvokeHelper(23, DISPATCH_PROPERTYGET, VT_BSTR,
            (void*)& strUIMode, NULL);

         CString strMsg;
         strMsg.Format(_T("WMP uiMode is %s."), strUIMode);
         AfxMessageBox(strMsg);
      }
      else
      {
         throw pe;
      }
   }
   //Catch control-specific exceptions.
   catch (COleDispatchException* pe)
   {
      CString cStr;

      if (!pe->m_strSource.IsEmpty())
         cStr = pe->m_strSource + _T(" - ");
      if (!pe->m_strDescription.IsEmpty())
         cStr += pe->m_strDescription;
      else
         cStr += _T("unknown error");

      AfxMessageBox(cStr, MB_OK,
         (pe->m_strHelpFile.IsEmpty()) ? 0 : pe->m_dwHelpContext);

      pe->Delete();
   }
   //Catch all MFC exceptions, including COleExceptions.
   // OS exceptions will not be caught.
   catch (CException* pe)
   {
      TRACE(_T("%s(%d): OLE Execption caught: SCODE = %x"),
         __FILE__, __LINE__, COleException::Process(pe));
      pe->Delete();
   }

   pe->Delete();
}