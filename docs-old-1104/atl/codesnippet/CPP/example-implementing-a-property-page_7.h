   STDMETHOD(Apply)(void)
   {
      // If we don't have any objects, this method should not be called
      if (!m_ppUnk)
         return E_UNEXPECTED;

      // Use Apply to validate the user's settings and update the objects'
      // properties

      // Check whether we need to update the object
      // Quite important since standard property frame calls Apply
      // when it doesn't need to
      if (!m_bDirty)
         return S_OK;
      
      HRESULT hr = E_UNEXPECTED;

      // Get a pointer to the document
      CComQIPtr<EnvDTE::Document> pDoc(m_ppUnk[0]);
      if (!pDoc)
         return hr;
      
      // Get the read-only setting
      VARIANT_BOOL bReadOnly = IsDlgButtonChecked(IDC_READONLY) ? VARIANT_TRUE : VARIANT_FALSE;

      // Get the file name
      CComBSTR bstrName;
      if (!GetDlgItemText(IDC_NAME, bstrName.m_str))
         return E_FAIL;

      // Set the read-only property
      if (bReadOnly != m_bReadOnly)
      {
         hr = pDoc->put_ReadOnly(bReadOnly);
         if (FAILED(hr))
            return hr;
      }

      // Save the document
      if (bstrName != m_bstrFullName)
      {
         EnvDTE::vsSaveStatus status;
         hr = pDoc->Save(bstrName, &status);
         if (FAILED(hr))
            return hr;
      }

      // Clear the dirty status of the property page
      SetDirty(false);

      return S_OK;
   }