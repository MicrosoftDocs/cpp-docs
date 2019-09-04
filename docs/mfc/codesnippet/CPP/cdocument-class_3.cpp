// This example accesses the doc template object to construct
// a default document name such as SHEET.XLS, where "sheet"
// is the base document name and ".xls" is the file extension
// for the document type.
CString strDefaultDocName, strBaseName, strExt;
CDocTemplate *pDocTemplate = GetDocTemplate();
if (!pDocTemplate->GetDocString(strBaseName, CDocTemplate::docName) || !pDocTemplate->GetDocString(strExt, CDocTemplate::filterExt))
{
   AfxThrowUserException(); // These doc template strings will
                            // be available if you created the application using AppWizard
                            // and specified the file extension as an option for
                            // the document class produced by AppWizard.
}
strDefaultDocName = strBaseName + strExt;