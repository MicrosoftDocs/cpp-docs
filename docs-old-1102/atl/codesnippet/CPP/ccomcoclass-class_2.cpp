STDMETHODIMP CMyApp::CreateDocument( /* [out, retval] */ IDocument** ppDoc)
{
   *ppDoc = NULL;
   return CMyDoc::CreateInstance(ppDoc);
}