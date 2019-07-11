// CMyLinkDoc is derived from COleLinkingDoc
CMultiDocTemplate* pDocTemplate = new CMultiDocTemplate(IDR_LINKDOCTYPE,
   RUNTIME_CLASS(CMyLinkDoc),
   RUNTIME_CLASS(CChildFrame),
   RUNTIME_CLASS(CMyLinkView));
if (!pDocTemplate)
return FALSE;
pDocTemplate->SetContainerInfo(IDR_OLECONTTYPE_CNTR_IP);
AddDocTemplate(pDocTemplate);