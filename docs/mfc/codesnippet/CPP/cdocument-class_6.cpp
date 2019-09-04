// Method 2: In an SDI or MDI application, do all initialization
// in an override of OnNewDocument, if you are certain that
// the initialization is effectively saved upon File Save
// and fully restored upon File Open, via serialization.
BOOL CMyDoc::OnNewDocument()
{
   if (!CDocument::OnNewDocument())
   {
      return FALSE;
   }

   // Do initialization of new document here.

   return TRUE;
}