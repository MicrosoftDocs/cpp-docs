// BrushView.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCDocView.h"
#include "BrushDoc.h"
#include "BrushView.h"


// CBrushView

IMPLEMENT_DYNCREATE(CBrushView, CView)

CBrushView::CBrushView()
   : m_bt(Variety)
{

}

CBrushView::~CBrushView()
{
}

BEGIN_MESSAGE_MAP(CBrushView, CView)
   ON_COMMAND(ID_BRUSH_VARIETY, &CBrushView::OnBrushVariety)
   ON_UPDATE_COMMAND_UI(ID_BRUSH_VARIETY, &CBrushView::OnUpdateBrushVariety)
   ON_COMMAND(ID_BRUSH_INDIRECT, &CBrushView::OnBrushIndirect)
   ON_UPDATE_COMMAND_UI(ID_BRUSH_INDIRECT, &CBrushView::OnUpdateBrushIndirect)
   ON_COMMAND(ID_BRUSH_DIBPATTERN, &CBrushView::OnBrushDibpattern)
   ON_UPDATE_COMMAND_UI(ID_BRUSH_DIBPATTERN, &CBrushView::OnUpdateBrushDibpattern)
   ON_COMMAND(ID_BRUSH_HATCH, &CBrushView::OnBrushHatch)
   ON_UPDATE_COMMAND_UI(ID_BRUSH_HATCH, &CBrushView::OnUpdateBrushHatch)
   ON_COMMAND(ID_BRUSH_PATTERN, &CBrushView::OnBrushPattern)
   ON_UPDATE_COMMAND_UI(ID_BRUSH_PATTERN, &CBrushView::OnUpdateBrushPattern)
   ON_COMMAND(ID_BRUSH_SYSCOLOR, &CBrushView::OnBrushSyscolor)
   ON_UPDATE_COMMAND_UI(ID_BRUSH_SYSCOLOR, &CBrushView::OnUpdateBrushSyscolor)
   ON_COMMAND(ID_BRUSH_LOG, &CBrushView::OnBrushLog)
   ON_UPDATE_COMMAND_UI(ID_BRUSH_LOG, &CBrushView::OnUpdateBrushLog)
   ON_COMMAND(ID_BRUSH_HANDLE, &CBrushView::OnBrushHandle)
   ON_UPDATE_COMMAND_UI(ID_BRUSH_HANDLE, &CBrushView::OnUpdateBrushHandle)
END_MESSAGE_MAP()


// CBrushView drawing

void CBrushView::VarietyBrushes(CDC* pDC)
{
// <Snippet21>
   // CBrush::CBrush.
   CBrush brush1;   // Must initialize!
   brush1.CreateSolidBrush(RGB(0, 0, 255));   // Blue brush.

   CBrush* pTempBrush = NULL;
   CBrush OrigBrush;

   CRect rc;
   GetClientRect(&rc);
   ScreenToClient(&rc);

   pTempBrush = (CBrush*)pDC->SelectObject(&brush1);
   // Save original brush.
   OrigBrush.FromHandle((HBRUSH)pTempBrush);

   // Paint upper left corner with blue brush.
   pDC->Rectangle(0, 0, rc.Width() / 2, rc.Height() / 2);

   // These constructors throw resource exceptions.
   try
   {
      // CBrush::CBrush(COLORREF crColor)
      CBrush brush2(RGB(255, 0, 0));   // Solid red brush.

      // CBrush::CBrush(int nIndex, COLORREF crColor)
      // Hatched green brush.
      CBrush brush3(HS_DIAGCROSS, RGB(0, 255, 0));

      // CBrush::CBrush(CBitmap* pBitmap)
      CBitmap bmp;
      // Load a resource bitmap.
      bmp.LoadBitmap(IDB_BRUSH);
      CBrush brush4(&bmp);

      pTempBrush = (CBrush*)pDC->SelectObject(&brush2);

      // Paint upper right corner with red brush.
      pDC->Rectangle(rc.Width() / 2, 0, rc.Width(),
      rc.Height() / 2);

      pTempBrush = (CBrush*)pDC->SelectObject(&brush3);

      // Paint lower left corner with green hatched brush.
      pDC->Rectangle(0, rc.Height() / 2, rc.Width() / 2,
      rc.Height());

      pTempBrush = (CBrush*)pDC->SelectObject(&brush4);

      // Paint lower right corner with resource brush.
      pDC->Rectangle(rc.Width() / 2, rc.Height() / 2,
         rc.Width(), rc.Height());
   }
   catch(CResourceException* e)
   {
      e->ReportError();
      e->Delete();
   }

   // Reselect original brush into device context.
   pDC->SelectObject(&OrigBrush);
// </Snippet21>
}

void CBrushView::IndirectBrushes(CDC* pDC)
{
// <Snippet22>
   // Initialize a LOGBRUSH structure.
   LOGBRUSH logBrush;
   logBrush.lbStyle = BS_HATCHED;
   logBrush.lbColor = RGB(0, 192, 192);
   logBrush.lbHatch = HS_CROSS;

   // Declare an uninitialized CBrush ...
   CBrush brush;
   // ... and initialize it with the LOGBRUSH.
   brush.CreateBrushIndirect(&logBrush);

   // Select the brush (and perhaps a pen) into
   // the device context.
   CBrush* pOldBrush = (CBrush*)pDC->SelectObject(&brush);
   CPen* pOldPen = (CPen*)pDC->SelectStockObject(BLACK_PEN);

   // Have fun!
   pDC->Pie(CRect(100, 100, 300, 300), CPoint(0, 0), CPoint(50, 200));

   // Restore the original device context objects.
   pDC->SelectObject(pOldBrush);
   pDC->SelectObject(pOldPen);
// </Snippet22>
}

void CBrushView::DIBPatternBrushes(CDC* pDC)
{
// <Snippet23>
   // Resource handle to bitmap.
   HRSRC hRes;    
   // Global handles to bitmap resource.
   HGLOBAL hData;
   void* hLockedData;   
   CBrush brush;

   // Find the resource handle.
   hRes = ::FindResource(AfxGetResourceHandle(),
   MAKEINTRESOURCE(IDB_BRUSH), RT_BITMAP);
   if (hRes != NULL)
   {
      // Lock and Load (or Load and Lock).
      if (((hData = ::LoadResource(AfxGetResourceHandle(),
         hRes)) != NULL) && 
         ((hLockedData = ::LockResource(hData)) != NULL))
      {
         // Initialize the brush.
         brush.CreateDIBPatternBrush((const void*)hLockedData,
            DIB_RGB_COLORS);

         // Select the brush into the device context.
         CBrush* pOldBrush = pDC->SelectObject(&brush);

         // Draw.
         pDC->Rectangle(50, 50, 200, 200);

         // Restore the original device context.
         pDC->SelectObject(pOldBrush);

         // Free the resource.
         ::FreeResource(hLockedData);
      }
   }
// </Snippet23>
}

void CBrushView::HatchBrushes(CDC* pDC)
{
// <Snippet24>
   CBrush brush;
   brush.CreateHatchBrush(HS_BDIAGONAL, RGB(255, 0, 0));

   CBrush* pOldBrush;
   CPen* pOldPen;

   pOldBrush = (CBrush*)pDC->SelectObject(&brush);
   pOldPen = (CPen*)pDC->SelectStockObject(NULL_PEN);
   pDC->Ellipse(CRect(50, 50, 250, 250));

   pDC->SelectObject(pOldBrush);
   pDC->SelectObject(pOldPen);
// </Snippet24>
}

void CBrushView::PatternBrushes(CDC* pDC)
{
// <Snippet25>
   // Create a hatched bit pattern.
   WORD HatchBits[8] = { 0x11, 0x22, 0x44, 0x88, 0x11,
      0x22, 0x44, 0x88 };

   // Use the bit pattern to create a bitmap.
   CBitmap bm;
   bm.CreateBitmap(8,8,1,1, HatchBits);

   // Create a pattern brush from the bitmap.
   CBrush brush;
   brush.CreatePatternBrush(&bm);

   // Select the brush into a device context, and draw.
   CBrush* pOldBrush = (CBrush*)pDC->SelectObject(&brush);
   pDC->RoundRect(CRect(50, 50, 200, 200), CPoint(10,10));

   // Restore the original brush.
   pDC->SelectObject(pOldBrush);
// </Snippet25>
}

void CBrushView::SysColorBrushes(CDC* pDC)
{
// <Snippet26>
   // Declare a CBrush and initialize to a system color.
   CBrush brush;
   brush.CreateSysColorBrush(COLOR_BTNFACE);

   // Select the brush into the device context. 
   CBrush* pOldBrush = (CBrush*)pDC->SelectObject(&brush);

   // Draw.
   CRect rect(50, 50, 150, 150);
   pDC->Rectangle(rect);

   // Reselect the original brush.
   pDC->SelectObject(pOldBrush);
// </Snippet26>
}

void CBrushView::LogBrushes(CDC* pDC)
{
   CBrush brushExisting;
   brushExisting.CreateSolidBrush(RGB(255, 0, 255));

// <Snippet27>
   // Example for CBrush::GetLogBrush
   LOGBRUSH logbrush;
   brushExisting.GetLogBrush( &logbrush );
   CBrush brushOther( logbrush.lbColor);

   // Another example
   // Declare a LOGBRUSH
   LOGBRUSH logBrush;

   // Using a bitmap for this example.
   // The bitmap should be a project resource.
   CBitmap bm;
   bm.LoadBitmap(IDB_BRUSH);

   try
   {
      // Create a brush
      CBrush brush1(&bm);

      // Use GetLogBrush to fill the LOGBRUSH structure
      brush1.GetLogBrush(&logBrush);

      // Create a second brush using the LOGBRUSH data
      CBrush brush2;
      brush2.CreateBrushIndirect(&logBrush);

      // Use the first brush
      CBrush* pOldBrush = (CBrush*)pDC->SelectObject(&brush1);
      pDC->Rectangle(CRect(50,50,150,150));

      // The second brush has the specified characteristics
      // of the first brush
      pDC->SelectObject(&brush2);
      pDC->Ellipse(200,50,300,150);

      // Reselect the original brush
      pDC->SelectObject(pOldBrush);
   }
   catch(CResourceException* e)
   {
      e->ReportError();
      e->Delete();
   }
// </Snippet27>
}

void CBrushView::HandleBrushes(CDC* pDC)
{
// <Snippet28>
   RECT rc = { 50, 50, 200, 200 };

   Rectangle(pDC->GetSafeHdc(), rc.left, rc.top, rc.right, rc.bottom);

   // The Win32 call to FillRect requires an HBRUSH.
   // The HBRUSH operator casts the CBrush object
   // to the required type.
   CBrush brush;
   brush.CreateSysColorBrush(COLOR_BTNFACE);
   FillRect(pDC->GetSafeHdc(), &rc, (HBRUSH)brush);
// </Snippet28>
}

void CBrushView::OnDraw(CDC* pDC)
{
   switch (m_bt)
   {
   case Variety:
      VarietyBrushes(pDC);
      break;
   
   case Indirect:
      IndirectBrushes(pDC);
      break;

   case DIBPattern:
      DIBPatternBrushes(pDC);
      break;

   case Hatch:
      HatchBrushes(pDC);
      break;

   case Pattern:
      PatternBrushes(pDC);
      break;

   case SysColor:
      SysColorBrushes(pDC);
      break;

   case Log:
      LogBrushes(pDC);
      break;

   case Handle:
      HandleBrushes(pDC);
      break;

   default:
      AfxMessageBox(_T("No Brush type!"));
      break;
   }
}

// CBrushView diagnostics

#ifdef _DEBUG
void CBrushView::AssertValid() const
{
   CView::AssertValid();
}

#ifndef _WIN32_WCE
void CBrushView::Dump(CDumpContext& dc) const
{
   CView::Dump(dc);
}
#endif
#endif //_DEBUG


// CBrushView message handlers

void CBrushView::OnBrushVariety()
{
   m_bt = Variety;

   Invalidate();
}

void CBrushView::OnUpdateBrushVariety(CCmdUI *pCmdUI)
{
   pCmdUI->SetCheck(Variety == m_bt);
}

void CBrushView::OnBrushIndirect()
{
   m_bt = Indirect;

   Invalidate();
}

void CBrushView::OnUpdateBrushIndirect(CCmdUI *pCmdUI)
{
   pCmdUI->SetCheck(Indirect == m_bt);
}

void CBrushView::OnBrushDibpattern()
{
   m_bt = DIBPattern;
   Invalidate();
}

void CBrushView::OnUpdateBrushDibpattern(CCmdUI *pCmdUI)
{
   pCmdUI->SetCheck(DIBPattern == m_bt);
}

void CBrushView::OnBrushHatch()
{
   m_bt = Hatch;
   Invalidate();
}

void CBrushView::OnUpdateBrushHatch(CCmdUI *pCmdUI)
{
   pCmdUI->SetCheck(Hatch == m_bt);
}

void CBrushView::OnBrushPattern()
{
   m_bt = Pattern;
   Invalidate();
}

void CBrushView::OnUpdateBrushPattern(CCmdUI *pCmdUI)
{
   pCmdUI->SetCheck(Pattern == m_bt);
}

void CBrushView::OnBrushSyscolor()
{
   m_bt = SysColor;
   Invalidate();
}

void CBrushView::OnUpdateBrushSyscolor(CCmdUI *pCmdUI)
{
   pCmdUI->SetCheck(SysColor == m_bt);
}

void CBrushView::OnBrushLog()
{
   m_bt = Log;
   Invalidate();
}

void CBrushView::OnUpdateBrushLog(CCmdUI *pCmdUI)
{
   pCmdUI->SetCheck(Log == m_bt);
}

void CBrushView::OnBrushHandle()
{
   m_bt = Handle;
   Invalidate();
}

void CBrushView::OnUpdateBrushHandle(CCmdUI *pCmdUI)
{
   pCmdUI->SetCheck(Handle == m_bt);
}
