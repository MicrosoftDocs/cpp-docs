   //The following example attaches an HWND to the CWindow object and 
   //later detaches the CWindow object from the HWND when no longer needed

   CWindow myWindow;
   myWindow.Attach(hWnd);

   //call CWindow wrappers

   //We don't need the C++ object any more, so detach it from the HWND.
   myWindow.Detach(); 