// The following code is produced by the Application Wizard when you
// choose the MDI (multiple document interface) option.
CMultiDocTemplate *pDocTemplate;
pDocTemplate = new CMultiDocTemplate(IDR_MYTYPE,
                                     RUNTIME_CLASS(CMyDoc),
                                     RUNTIME_CLASS(CChildFrame), // custom MDI child frame
                                     RUNTIME_CLASS(CMyView));
if (!pDocTemplate)
   return FALSE;
AddDocTemplate(pDocTemplate);