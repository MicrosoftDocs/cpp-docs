CDocObjectServer* CMFCOleServerDoc::GetDocObjectServer(LPOLEDOCUMENTSITE pSite)
{
   return new CDocObjectServer(this, pSite);
}