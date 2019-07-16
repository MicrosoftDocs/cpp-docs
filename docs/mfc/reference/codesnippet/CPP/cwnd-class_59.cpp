void CMainFrame::OnStartTimer()
{
   // This timer uses a WM_TIMER message, not a callback.
   // Therefore, the timer is specific to this window.
   // m_nWindowTimer is a UINT_PTR field.
   m_nWindowTimer = SetTimer(1, 2000, NULL);

   // For this demo, we specify an interval that won't overlap
   // with the window timer.
   m_nCallbackTimer = SetTimer(2, 3750, &CMainFrame::MyTimerProc);

   // See whether we got the ID we requested in the first parameter.
#ifdef _DEBUG
   CString str;
   str.Format(_T("m_ncallbackTImer ID = %d"), m_nCallbackTimer);
   TRACE(str);
#endif
}

void CALLBACK CMainFrame::MyTimerProc(
    HWND hWnd,         // handle of CWnd that called SetTimer
    UINT nMsg,         // WM_TIMER
    UINT_PTR nIDEvent, // timer identification
    DWORD dwTime       // system time
)
{
   MessageBeep(0x00000030L); // Windows question sound.
}

void CMainFrame::OnStopTimer()
{
   KillTimer(m_nWindowTimer);
   KillTimer(m_nCallbackTimer);
}

void CMainFrame::OnTimer(UINT nIDEvent)
{
   MessageBeep(0xFFFFFFFF); // Beep

   // Call base class handler.
   CMDIFrameWnd::OnTimer(nIDEvent);
}