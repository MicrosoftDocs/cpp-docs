// In CMainFrame::OnCreate, attach MDI client window

if (CMDIFrameWnd::OnCreate(lpCreateStruct) == -1)
   return -1;

// attach MDI client window
if (m_wndMDIClient.Attach(m_hWndMDIClient) == 0)
{
   TRACE(_T("Failed to attach MDIClient.\n"));
   return -1; // fail to create
}