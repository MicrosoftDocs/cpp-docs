// Code fragment taken from CMyApp::InitInstance

// Normally, an application creates a document 
// template and registers it with MFC as a part
// of its initialization.

// IDR_EXAMPLEDOCTYPE is a resource ID string; see
// the CDocTemplate class overview documentation
// for more information on its format.

// The next three parameters use the RUNTIME_CLASS()
// macro to get runtime type information for the doc,
// frame, and view classes that will be associated
// by the template.

pDocTemplate = new CMultiDocTemplate(IDR_EXAMPLEDOCTYPE,
   RUNTIME_CLASS(CExampleDoc),
   RUNTIME_CLASS(CChildFrame),
   RUNTIME_CLASS(CExampleView));
if (!pDocTemplate)
return FALSE;

// After the following call, MFC is aware of the doc
// template and will free it when the application is
// shut down. The doc templates known to MFC will
// automatically be used when CWinApp:OnFileOpen()
// or CWinApp::OnFileNew() are called.

AddDocTemplate(pDocTemplate);