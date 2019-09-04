// Below is a code sample from an  Application Wizard-generated SDI
// Application with Automation support. The Application Wizard adds a
// dispatch interface to the document class. AfxOleLockApp() and
// AfxOleUnlockApp() respectively increment and decrement the
// application's object count. When the object count is equal to
// zero and if the user has not taken control of the application,
// the server is terminated.

CCMFCAutomationDoc::CCMFCAutomationDoc()
{
   EnableAutomation();
   AfxOleLockApp();
}

CCMFCAutomationDoc::~CCMFCAutomationDoc()
{
   AfxOleUnlockApp();
}