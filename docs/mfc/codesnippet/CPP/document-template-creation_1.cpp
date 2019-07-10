CMultiDocTemplate* pDocTemplate;
pDocTemplate = new CMultiDocTemplate(IDR_CMyDocTypeTYPE,
   RUNTIME_CLASS(CMyDoc),
   RUNTIME_CLASS(CChildFrame), // custom MDI child frame
   RUNTIME_CLASS(CMyView));
if (!pDocTemplate)
return FALSE;
AddDocTemplate(pDocTemplate);