CMDIFrameWnd *pFrame = (CMDIFrameWnd*)AfxGetApp()->GetMainWnd();

// Get the active MDI child window.
CMDIChildWnd *pChild = (CMDIChildWnd*)pFrame->GetActiveFrame();

// or CMDIChildWnd *pChild = pFrame->MDIGetActive();

// Get the active view attached to the active MDI child window.
CMyView *pView = (CMyView*)pChild->GetActiveView();