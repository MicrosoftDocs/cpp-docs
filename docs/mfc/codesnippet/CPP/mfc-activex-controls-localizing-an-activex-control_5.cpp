void CMyAxLocPropPage::OnSetPageSite()
{
   LPPROPERTYPAGESITE pSite;
   LCID lcid = 0;
   if ((pSite = GetPageSite()) != NULL)
      pSite->GetLocaleID(&lcid);
   HINSTANCE hResource = GetLocalizedResourceHandle(lcid);
   HINSTANCE hResourceSave = NULL;

   if (hResource != NULL)
   {
      hResourceSave = AfxGetResourceHandle();
      AfxSetResourceHandle(hResource);
   }

   //  Load dialog template and caption string.
   COlePropertyPage::OnSetPageSite();

   if (hResource != NULL)
      AfxSetResourceHandle(hResourceSave);
}