void CMyView::OnPrepareDC(CDC* pDC, CPrintInfo* pInfo)
{
   CView::OnPrepareDC(pDC, pInfo);

   // If we are printing, set the mapmode and the window
   // extent properly, then set viewport extent. Use the
   // SetViewportOrg member function in the CDC class to
   // move the viewport origin to the center of the view.

   if (pDC->IsPrinting()) // Is the DC a printer DC.
   {
      CRect rect;
      GetClientRect(&rect);

      pDC->SetMapMode(MM_ISOTROPIC);
      CSize ptOldWinExt = pDC->SetWindowExt(1000, 1000);
      ASSERT(ptOldWinExt.cx != 0 && ptOldWinExt.cy != 0);
      CSize ptOldViewportExt = pDC->SetViewportExt(rect.Width(), -rect.Height());
      ASSERT(ptOldViewportExt.cx != 0 && ptOldViewportExt.cy != 0);
      CPoint ptOldOrigin = pDC->SetViewportOrg(rect.Width() / 2, rect.Height() / 2);
   }
}