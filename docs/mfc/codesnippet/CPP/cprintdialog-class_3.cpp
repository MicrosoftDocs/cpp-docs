CPrintDialog dlg(FALSE);

if (!dlg.GetDefaults())
{
   AfxMessageBox(_T("You have no default printer!"));
}
else
{
   // attach to the DC we were given
   CDC dc;
   dc.Attach(dlg.m_pd.hDC);

   // ask for the measurements
   int nHorz = dc.GetDeviceCaps(LOGPIXELSX);
   int nVert = dc.GetDeviceCaps(LOGPIXELSY);

   // almost always the same in both directions, but sometimes not!
   CString str;
   if (nHorz == nVert)
   {
      str.Format(_T("Your printer supports %d pixels per inch"), nHorz);
   }
   else
   {
      str.Format(_T("Your printer supports %d pixels per inch ")
         _T("horizontal resolution, and %d pixels per inch vertical ")
         _T("resolution"), nHorz, nVert);
   }

   // tell the user
   AfxMessageBox(str);

   // Note: no need to call Detach() because we want the CDC destructor
   // to call FreeDC() on the DC we borrowed from the common dialog
}