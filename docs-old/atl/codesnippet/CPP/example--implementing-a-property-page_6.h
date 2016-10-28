   STDMETHOD(Activate)(HWND hWndParent, LPCRECT prc, BOOL bModal)
   {
      // If we don't have any objects, this method should not be called
      // Note that OleCreatePropertyFrame will call Activate even if
      // a call to SetObjects fails, so this check is required
      if (!m_ppUnk)
         return E_UNEXPECTED;

      // Use Activate to update the property page's UI with information
      // obtained from the objects in the m_ppUnk array

      // We update the page to display the Name and ReadOnly properties
      // of the document

      // Call the base class
      HRESULT hr = PPGBaseClass::Activate(hWndParent, prc, bModal);
      if (FAILED(hr))
         return hr;

      // Get the EnvDTE::Document pointer
      CComQIPtr<EnvDTE::Document> pDoc(m_ppUnk[0]);
      if (!pDoc)
         return E_UNEXPECTED;
      
      // Get the FullName property
      hr = pDoc->get_FullName(&m_bstrFullName);
      if (FAILED(hr))
         return hr;

      // Set the text box so that the user can see the document name
      USES_CONVERSION;
      SetDlgItemText(IDC_NAME, CW2CT(m_bstrFullName));

      // Get the ReadOnly property
      m_bReadOnly = VARIANT_FALSE;
      hr = pDoc->get_ReadOnly(&m_bReadOnly);
      if (FAILED(hr))
         return hr;

      // Set the check box so that the user can see the document's read-only status
      CheckDlgButton(IDC_READONLY, m_bReadOnly ? BST_CHECKED : BST_UNCHECKED);

      return hr;
   }