BOOL CMyDlg::OnInitDialog()
{
   // Find the child controls on the dialog
   HRESULT hr = E_FAIL;
   CWnd *pDSC = GetDlgItem(IDC_DATASOURCE);
   CWnd *pListWnd = GetDlgItem(IDC_DBLIST1);
   IUnknown *punkList = pListWnd->GetControlUnknown();
   IDBList *pList = NULL;

   if (NULL != punkList)
   {
      hr = punkList->QueryInterface(__uuidof(IDBList), (void **)&pList);
   }

   if (SUCCEEDED(hr))
   {
      // Tell the MFC binding manager that we are
      // binding DISPID 3 to the data-source control.
      pListWnd->BindProperty(0x3, pDSC);

      // Tell the listbox which field to expose as its bound column
      pList->put_BoundColumn(_T("ContactFirstName"));

      // Tell the listbox which cursor and column to populate its list from
      pList->put_ListField(_T("ContactFirstName"));

      IUnknown *punkCursor = pDSC->GetDSCCursor();
      if (NULL != punkCursor)
      {
         punkCursor->Release();
      }

      pList->Release();
      return TRUE;
   }