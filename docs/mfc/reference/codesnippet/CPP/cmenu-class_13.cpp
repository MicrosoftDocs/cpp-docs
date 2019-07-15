// This code fragment is taken from CMainFrame::~CMainFrame

// Destroy the bitmap objects if they are loaded successfully
// in OnCreate().
if (m_CheckBitmap.m_hObject)
   m_CheckBitmap.DeleteObject();

if (m_UnCheckBitmap.m_hObject)
   m_UnCheckBitmap.DeleteObject();