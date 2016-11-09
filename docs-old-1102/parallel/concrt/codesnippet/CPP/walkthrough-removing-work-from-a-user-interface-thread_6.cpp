CChildView::CChildView()
{
   // Initialize GDI+.
   GdiplusStartupInput gdiplusStartupInput;
   GdiplusStartup(&m_gdiplusToken, &gdiplusStartupInput, NULL);
}

CChildView::~CChildView()
{
   // Shutdown GDI+.
   GdiplusShutdown(m_gdiplusToken);
}