void CMyAxCtrl::OnFontChanged()
{
   // Always set it to the container's font
   if (m_MyEdit.m_hWnd != NULL)
   {
      IFontDisp *pFontDisp = NULL;
      IFont *pFont = NULL;
      HRESULT hr;

      // Get the container's FontDisp interface
      pFontDisp = AmbientFont();
      if (pFontDisp)
      {
         hr = pFontDisp->QueryInterface(IID_IFont, (LPVOID*)&pFont);
         if (FAILED(hr))
         {
            pFontDisp->Release();
            return;
         }
      }

      HFONT hFont = NULL;
      if (pFont)
      {
         pFont->get_hFont(&hFont);
         m_MyEdit.SendMessage(WM_SETFONT, (WPARAM)hFont, 0L);
      }

      pFontDisp->Release();
   }

   // Invalidate the control
   m_MyEdit.Invalidate();
   m_MyEdit.UpdateWindow();

   COleControl::OnFontChanged();
}