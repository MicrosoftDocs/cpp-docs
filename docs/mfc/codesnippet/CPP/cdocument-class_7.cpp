// Method 3: If the initialization of your document is not
// effectively saved and restored by serialization (during File Save
// and File Open), then implement the initialization in single
// function (named InitMyDocument in this example).  Call the
// shared initialization function from overrides of both
// OnNewDocument and OnOpenDocument.
BOOL CExampleDoc::OnNewDocument()
{
   if (!CDocument::OnNewDocument())
   {
      return FALSE;
   }

   InitMyDocument(); // call your shared initialization function

   // If your new document object requires additional initialization
   // not necessary when the document is deserialized via File Open,
   // then perform that additional initialization here.

   return TRUE;
}