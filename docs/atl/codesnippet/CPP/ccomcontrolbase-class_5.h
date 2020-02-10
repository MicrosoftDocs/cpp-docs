   HRESULT OnDraw(ATL_DRAWINFO& di)
   {
      short nAppearance;
      RECT& rc = *(RECT*)di.prcBounds;

      // draw 3D border if AmbientAppearance is not supported or is set to 1 
      HRESULT hr = GetAmbientAppearance(nAppearance);
      if (hr != S_OK || nAppearance==1)
      {
         DrawEdge(di.hdcDraw, &rc, EDGE_SUNKEN, BF_RECT);
      }
      else
      {
         Rectangle(di.hdcDraw, rc.left, rc.top, rc.right, rc.bottom);
      }

      SetTextAlign(di.hdcDraw, TA_CENTER|TA_BASELINE);
      LPCTSTR pszText = _T("ATL 8.0 : MyControl");

      // For security reasons, we recommend that you use the lstrlen function
      // with caution. Here, we can guarantee that pszText is NULL terminated,
      // and therefore it is safe to use this function.
      TextOut(di.hdcDraw, 
         (rc.left + rc.right) / 2, 
         (rc.top + rc.bottom) / 2, 
         pszText, 
         lstrlen(pszText));

      return S_OK;
   }