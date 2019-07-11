// Additional example of OnOpenDocument()
BOOL CExampleDoc::OnOpenDocument(LPCTSTR lpszPathName)
{
   if (!CDocument::OnOpenDocument(lpszPathName))
   {
      return FALSE;
   }

   InitMyDocument(); // call your shared initialization function

   return TRUE;
}