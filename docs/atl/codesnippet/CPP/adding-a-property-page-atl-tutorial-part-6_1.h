   STDMETHOD(Apply)(void)
   {
      USES_CONVERSION;
      ATLTRACE(_T("CPolyProp::Apply\n"));
      for (UINT i = 0; i < m_nObjects; i++)
      {
         CComQIPtr<IPolyCtl, &IID_IPolyCtl> pPoly(m_ppUnk[i]);
         short nSides = (short)GetDlgItemInt(IDC_SIDES);
         if FAILED(pPoly->put_Sides(nSides))
         {
            CComPtr<IErrorInfo> pError;
            CComBSTR strError;
            GetErrorInfo(0, &pError);
            pError->GetDescription(&strError);
            MessageBox(OLE2T(strError), _T("Error"), MB_ICONEXCLAMATION);
            return E_FAIL;
         }
      }
      m_bDirty = FALSE;
      return S_OK;
   }