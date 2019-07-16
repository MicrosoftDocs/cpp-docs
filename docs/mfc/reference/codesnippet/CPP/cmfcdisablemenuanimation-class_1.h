void CMyApp::ProcessCommand()
{
   // Temporarily disable menu animation.
   CMFCDisableMenuAnimation disableMenuAnimation;

   // TODO: Process the command here.

   // When the CMFCDisableMenuAnimation object leaves scope,
   // the destructor will restore the previous animation type.
}