// Code fragment from CMyApp::InitInstance

// Establish all of the document types
// supported by the application

AddDocTemplate(new CMultiDocTemplate(IDR_BRUSHDOCTYPE,
   RUNTIME_CLASS(CBrushDoc),
   RUNTIME_CLASS(CChildFrame),
   RUNTIME_CLASS(CBrushView)));

AddDocTemplate(new CMultiDocTemplate(IDR_DCDOCTYPE,
   RUNTIME_CLASS(CDCDoc),
   RUNTIME_CLASS(CChildFrame),
   RUNTIME_CLASS(CDCView)));