// DCView.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCDocView.h"
#include "DCView.h"


// CDCView

IMPLEMENT_DYNCREATE(CDCView, CView)

CDCView::CDCView()
   : m_DrawType(dtArc)
{
   m_aDrawFuncs[dtArc] = &CDCView::DrawArc;
   m_aDrawFuncs[dtPath] = &CDCView::DrawPath;
   m_aDrawFuncs[dtChord] = &CDCView::DrawChord;
   m_aDrawFuncs[dtBitmap] = &CDCView::DrawBitmap;
   m_aDrawFuncs[dt3dRect] = &CDCView::Draw3dRect;
   m_aDrawFuncs[dtFC] = &CDCView::DrawFC;
   m_aDrawFuncs[dtInvertRect] = &CDCView::DoInvertRect;
   m_aDrawFuncs[dtPie] = &CDCView::DrawPie;
   m_aDrawFuncs[dtPolygon] = &CDCView::DrawPolygon;
   m_aDrawFuncs[dtRectangle] = &CDCView::DrawRectangle;
   m_aDrawFuncs[dtRoundRect] = &CDCView::DrawRoundRect;
   m_aDrawFuncs[dtClientDC] = &CDCView::DrawInClientDC;
   m_aDrawFuncs[dtAfxDrawDitheredBitmap] = &CDCView::DrawDitheredBitmap;
   m_aDrawFuncs[dtAfxDrawGrayBitmap] = &CDCView::DrawGrayBitmap;
   m_aDrawFuncs[dtAfxGetDitheredBitmap] = &CDCView::GetDitheredBitmap;
   m_aDrawFuncs[dtAfxGetGrayBitmap] = &CDCView::GetGrayBitmap;
}

CDCView::~CDCView()
{
}

BEGIN_MESSAGE_MAP(CDCView, CView)
   ON_COMMAND(ID_DC_ARC, &CDCView::OnDcArc)
   ON_UPDATE_COMMAND_UI(ID_DC_ARC, &CDCView::OnUpdateDcArc)
   ON_COMMAND(ID_DC_PATH, &CDCView::OnDcPath)
   ON_UPDATE_COMMAND_UI(ID_DC_PATH, &CDCView::OnUpdateDcPath)
   ON_COMMAND(ID_DC_CHORD, &CDCView::OnDcChord)
   ON_UPDATE_COMMAND_UI(ID_DC_CHORD, &CDCView::OnUpdateDcChord)
   ON_COMMAND(ID_DC_BITMAP, &CDCView::OnDcBitmap)
   ON_UPDATE_COMMAND_UI(ID_DC_BITMAP, &CDCView::OnUpdateDcBitmap)
   ON_COMMAND(ID_DC_3DRECT, &CDCView::OnDc3drect)
   ON_UPDATE_COMMAND_UI(ID_DC_3DRECT, &CDCView::OnUpdateDc3drect)
   ON_COMMAND(ID_DC_FRAMECTL, &CDCView::OnDcFramectl)
   ON_UPDATE_COMMAND_UI(ID_DC_FRAMECTL, &CDCView::OnUpdateDcFramectl)
   ON_COMMAND(ID_STUFF_ENUMPENS, &CDCView::OnEnumPens)
   ON_COMMAND(ID_DC_INVERTRECT, &CDCView::OnDcInvertrect)
   ON_UPDATE_COMMAND_UI(ID_DC_INVERTRECT, &CDCView::OnUpdateDcInvertrect)
   ON_COMMAND(ID_DC_PIE, &CDCView::OnDcPie)
   ON_UPDATE_COMMAND_UI(ID_DC_PIE, &CDCView::OnUpdateDcPie)
   ON_COMMAND(ID_DC_POLYGON, &CDCView::OnDcPolygon)
   ON_UPDATE_COMMAND_UI(ID_DC_POLYGON, &CDCView::OnUpdateDcPolygon)
   ON_COMMAND(ID_DC_RECTANGLE, &CDCView::OnDcRectangle)
   ON_UPDATE_COMMAND_UI(ID_DC_RECTANGLE, &CDCView::OnUpdateDcRectangle)
   ON_COMMAND(ID_DC_RONDRECT, &CDCView::OnDcRoundrect)
   ON_UPDATE_COMMAND_UI(ID_DC_RONDRECT, &CDCView::OnUpdateDcRoundrect)
   ON_COMMAND(ID_STUFF_STARTDOC, &CDCView::DoStartDoc)
   ON_COMMAND(ID_DC_CLIENTDC, &CDCView::OnDcClientdc)
   ON_UPDATE_COMMAND_UI(ID_DC_CLIENTDC, &CDCView::OnUpdateDcClientdc)
   ON_COMMAND(ID_STUFF_CPAINTDC, &CDCView::OnStuffCpaintdc)
   ON_COMMAND(ID_STUFF_DOPENSTUFF, &CDCView::OnStuffDopenstuff)
   ON_COMMAND(ID_AFX_AFXDRAWDITHEREDBITMAP, &CDCView::OnAfxAfxdrawditheredbitmap)
   ON_UPDATE_COMMAND_UI(ID_AFX_AFXDRAWDITHEREDBITMAP, &CDCView::OnUpdateAfxAfxdrawditheredbitmap)
   ON_COMMAND(ID_AFX_AFXDRAWGRAYBITMAP, &CDCView::OnAfxAfxdrawgraybitmap)
   ON_UPDATE_COMMAND_UI(ID_AFX_AFXDRAWGRAYBITMAP, &CDCView::OnUpdateAfxAfxdrawgraybitmap)
   ON_COMMAND(ID_AFX_AFXGETDITHEREDBITMAP, &CDCView::OnAfxAfxgetditheredbitmap)
   ON_UPDATE_COMMAND_UI(ID_AFX_AFXGETDITHEREDBITMAP, &CDCView::OnUpdateAfxAfxgetditheredbitmap)
   ON_COMMAND(ID_AFX_AFXGETGRAYBITMAP, &CDCView::OnAfxAfxgetgraybitmap)
   ON_UPDATE_COMMAND_UI(ID_AFX_AFXGETGRAYBITMAP, &CDCView::OnUpdateAfxAfxgetgraybitmap)
END_MESSAGE_MAP()

// <Snippet29>
void CDCView::DrawArc(CDC* pDC)
{
   // Fill the client area with a thin circle. The circle's
   // interior is not filled. The circle's perimeter is
   // blue from 6 o'clock to 3 o'clock and red from 3
   // o'clock to 6 o'clock.

   // Get the client area.
   CRect rectClient;
   GetClientRect(rectClient);

   // Make a couple of pens.
   CPen penBlue;
   CPen penRed;
   CPen* pOldPen;

   penBlue.CreatePen(PS_SOLID | PS_COSMETIC, 1, RGB(0, 0, 255));
   penRed.CreatePen(PS_SOLID | PS_COSMETIC, 1, RGB(255, 0, 0));

   // Draw from 3 o'clock to 6 o'clock, counterclockwise,
   // in a blue pen.

   pOldPen = pDC->SelectObject(&penBlue);

   pDC->Arc(rectClient,
      CPoint(rectClient.right, rectClient.CenterPoint().y),
      CPoint(rectClient.CenterPoint().x, rectClient.right));

   // Draw from 6 o'clock to 3 o'clock, counterclockwise,
   // in a red pen.
   pDC->SelectObject(&penRed);

   // Keep the same parameters, but reverse start
   // and end points.
   pDC->Arc(rectClient,
      CPoint(rectClient.CenterPoint().x, rectClient.right),
      CPoint(rectClient.right, rectClient.CenterPoint().y));

   // Restore the previous pen.
   pDC->SelectObject(pOldPen);
}
// </Snippet29>

// <Snippet30>
// This implementation uses GDI paths to draw the outline of
// some text in a TrueType font. The path is used to record the way
// the TrueType font would be drawn. Then, the function uses the data
// returned from CDC::GetPath() to draw the font--without filling it.
void CDCView::DrawPath(CDC* pDC)
{
   // Describe a 24-point truetype font of normal weight
   LOGFONT lf;
   memset(&lf, 0, sizeof(lf));
   lf.lfHeight = -MulDiv(24, pDC->GetDeviceCaps(LOGPIXELSY), 72);
   lf.lfWeight = FW_NORMAL;
   lf.lfOutPrecision = OUT_TT_ONLY_PRECIS;

   // create and select it
   CFont newFont;
   if (!newFont.CreateFontIndirect(&lf))
      return;
   CFont* pOldFont = pDC->SelectObject(&newFont);

   // use a path to record how the text was drawn
   pDC->BeginPath();
   pDC->TextOut(10, 10, _T("Outline this!"));
   pDC->EndPath();

   // Find out how many points are in the path. Note that
   // for long strings or complex fonts, this number might be
   // gigantic!
   int nNumPts = pDC->GetPath(NULL, NULL, 0);
   if (nNumPts == 0)
      return;

   // Allocate memory to hold points and stroke types from
   // the path.
   LPPOINT lpPoints = NULL;
   LPBYTE lpTypes = NULL;
   try
   {
      lpPoints = new POINT[nNumPts];
      lpTypes = new BYTE[nNumPts];
   }
   catch (CException* pe)
   {
      delete [] lpPoints;
      lpPoints = NULL;
      delete [] lpTypes;
      lpTypes = NULL;
      pe->Delete();	
   }
   if (lpPoints == NULL || lpTypes == NULL)
      return;

   // Now that we have the memory, really get the path data.
   nNumPts = pDC->GetPath(lpPoints, lpTypes, nNumPts);

   // If it worked, draw the lines. Windows 98 doesn't support
   // the PolyDraw API, so we use our own member function to do
   // similar work. If you're targeting only later versions of 
   // Windows, you can use the PolyDraw() API and avoid the 
   // COutlineView::PolyDraw() member function.

   if (nNumPts != -1)
      pDC->PolyDraw(lpPoints, lpTypes, nNumPts);

   // Release the memory we used
   delete [] lpPoints;
   delete [] lpTypes;

   // Put back the old font
   pDC->SelectObject(pOldFont);

   return;
}
// </Snippet30>

// <Snippet31>
void CDCView::DrawChord(CDC* pDC)
{
   // Fill the client area with a circle. The circle is
   // blue and filled with blue, but has a chord cut out
   // of it from 3 o'clock to 6 o'clock. That chord is
   // red and filled with a red diagonal hatch.

   // Get the client area.
   CRect rectClient;
   GetClientRect(rectClient);

   // Make a couple of pens and similar brushes.
   CPen penBlue, penRed;
   CBrush brushBlue, brushRed;
   CBrush* pOldBrush;
   CPen* pOldPen;

   brushBlue.CreateSolidBrush(RGB(0, 0, 255));
   brushRed.CreateHatchBrush(HS_FDIAGONAL, RGB(255, 0, 0));
   penBlue.CreatePen(PS_SOLID | PS_COSMETIC, 1, RGB(0, 0, 255));
   penRed.CreatePen(PS_SOLID | PS_COSMETIC, 1, RGB(255, 0, 0));

   // Draw from 3 o'clock to 6 o'clock, counterclockwise,
   // in a blue pen with a solid blue fill.
   pOldPen = pDC->SelectObject(&penBlue);
   pOldBrush = pDC->SelectObject(&brushBlue);

   pDC->Chord(rectClient,
      CPoint(rectClient.right, rectClient.CenterPoint().y),
      CPoint(rectClient.CenterPoint().x, rectClient.right));

   // Draw the remaining quarter chord from 6 o'clock
   // to 3 o'clock, counterclockwise, in a red pen
   // with the hatched brush.
   pDC->SelectObject(&penRed);
   pDC->SelectObject(&brushRed);

   // Keep the same parameters, but reverse start and
   // end points.
   pDC->Chord(rectClient,
      CPoint(rectClient.CenterPoint().x, rectClient.right),
      CPoint(rectClient.right, rectClient.CenterPoint().y));

   // Restore the previous pen.
   pDC->SelectObject(pOldPen);
}
// </Snippet31>

// <Snippet32>
// This handler loads a bitmap from system resources,
// centers it in the view, and uses BitBlt() to paint the bitmap
// bits.
void CDCView::DrawBitmap(CDC* pDC)
{
   // load IDB_BITMAP1 from our resources
   CBitmap bmp;
   if (bmp.LoadBitmap(IDB_BITMAP1))
   {
      // Get the size of the bitmap
      BITMAP bmpInfo;
      bmp.GetBitmap(&bmpInfo);

      // Create an in-memory DC compatible with the
      // display DC we're using to paint
      CDC dcMemory;
      dcMemory.CreateCompatibleDC(pDC);

      // Select the bitmap into the in-memory DC
      CBitmap* pOldBitmap = dcMemory.SelectObject(&bmp);

      // Find a centerpoint for the bitmap in the client area
      CRect rect;
      GetClientRect(&rect);
      int nX = rect.left + (rect.Width() - bmpInfo.bmWidth) / 2;
      int nY = rect.top + (rect.Height() - bmpInfo.bmHeight) / 2;

      // Copy the bits from the in-memory DC into the on-
      // screen DC to actually do the painting. Use the centerpoint
      // we computed for the target offset.
      pDC->BitBlt(nX, nY, bmpInfo.bmWidth, bmpInfo.bmHeight, &dcMemory, 
         0, 0, SRCCOPY);

      dcMemory.SelectObject(pOldBitmap);
   }
   else
   {
      TRACE0("ERROR: Where's IDB_BITMAP1?\n");
   }
}
// </Snippet32>

// <Snippet33>
void CDCView::Draw3dRect(CDC* pDC)
{
   // get the client area
   CRect rect;
   GetClientRect(rect);

   // shrink our rect 20 pixels on all sides
   rect.DeflateRect(20, 20);

   // draw a rectangle with red top and left sides, and
   // green right and bottom sides.
   pDC->Draw3dRect(rect, RGB(255, 0, 0), RGB(0, 255, 0));

   // This call to the four-integer override would draw
   // the same rectangle with a little less convenience:

   // pDC->Draw3dRect(rect.left, rect.top, rect.Width(), rect.Height(),
   //    RGB(255, 0, 0), RGB(0, 255, 0));
}
// </Snippet33>

// <Snippet34>
void CDCView::DrawFC(CDC* pDC)
{
   CRect rc;
   GetClientRect(&rc);

   rc.left = rc.right - ::GetSystemMetrics(SM_CXHSCROLL);
   rc.top = rc.bottom - ::GetSystemMetrics(SM_CYVSCROLL);

   pDC->DrawFrameControl(rc, DFC_SCROLL, DFCS_SCROLLSIZEGRIP);
}
// </Snippet34>

// <Snippet35>
// print some info about a pen we're ready to enumerate
BOOL CALLBACK EnumObjectHandler(LPVOID lpLogObject, LPARAM /* lpData */)
{
   LOGPEN* pPen = (LOGPEN*) lpLogObject;
   
   switch (pPen->lopnStyle)
   {
   case PS_SOLID:
      TRACE0("PS_SOLID:      ");
      break;
   case PS_DASH:
      TRACE0("PS_DASH:       ");
      break;
   case PS_DOT:
      TRACE0("PS_DOT:        ");
      break;
   case PS_DASHDOT:
      TRACE0("PS_DASHDOT:    ");
      break;
   case PS_DASHDOTDOT:
      TRACE0("PS_DASHDOTDOT: ");
      break;
   case PS_NULL:
      TRACE0("PS_NULL:       ");
      break;
   case PS_INSIDEFRAME:
      TRACE0("PS_INSIDEFRAME:");
      break;
   default:
      TRACE0("unk style:");
   }

   TRACE2("Color: 0x%8.8X, Width: %d\n", pPen->lopnColor, pPen->lopnWidth);
   return TRUE;
}

// get the default printer and enumerate the pens it has
void CDCView::OnEnumPens()
{
   CPrintDialog dlg(FALSE);
   dlg.GetDefaults();
   HDC hdc = dlg.GetPrinterDC();

   if (hdc != NULL)
   {
      CDC dc;
      dc.Attach(hdc);
      VERIFY(dc.EnumObjects(OBJ_PEN, EnumObjectHandler, 0));
   }
}
// </Snippet35>

// <Snippet36>
void CDCView::DoInvertRect(CDC* pDC)
{
   // invert rect from 20,20 to 50,50
   CRect rect(20, 20, 50, 50);
   pDC->InvertRect(rect);

   // inverting again restores to normal
   ::Sleep(1000);
   pDC->InvertRect(rect);   
}
// </Snippet36>

// <Snippet37>
void CDCView::DrawPie(CDC* pDC)
{
   // Fill the client area with a simple pie chart. A
   // big blue slice covers 75% of the pie, from
   // 6 o'clock to 3 o'clock. This portion is filled
   // with blue and has a blue edge. The remaining 25%
   // is filled with a red, diagonal hatch and has
   // a red edge.

   // Get the client area.
   CRect rectClient;
   GetClientRect(rectClient);

   // Make a couple of pens and similar brushes.
   CPen penBlue, penRed;
   CBrush brushBlue, brushRed;
   CBrush* pOldBrush;
   CPen* pOldPen;

   brushBlue.CreateSolidBrush(RGB(0, 0, 255));
   brushRed.CreateHatchBrush(HS_FDIAGONAL, RGB(255, 0, 0));
   penBlue.CreatePen(PS_SOLID | PS_COSMETIC, 1, RGB(0, 0, 255));
   penRed.CreatePen(PS_SOLID | PS_COSMETIC, 1, RGB(255, 0, 0));

   // Draw from 3 o'clock to 6 o'clock, counterclockwise,
   // in a blue pen with a solid blue fill.

   pOldPen = pDC->SelectObject(&penBlue);
   pOldBrush = pDC->SelectObject(&brushBlue);

   pDC->Pie(rectClient,
      CPoint(rectClient.right, rectClient.CenterPoint().y),
      CPoint(rectClient.CenterPoint().x, rectClient.right));

   // Draw the remaining quarter slice from 6 o'clock
   // to 3 o'clock, counterclockwise, in a red pen with
   // the hatched brush.
   pDC->SelectObject(&penRed);
   pDC->SelectObject(&brushRed);

   // Same parameters, but reverse start and end points.
   pDC->Pie(rectClient,
      CPoint(rectClient.CenterPoint().x, rectClient.right),
      CPoint(rectClient.right, rectClient.CenterPoint().y));

   // Restore the previous pen.
   pDC->SelectObject(pOldPen);
}
// </Snippet37>

// <Snippet38>
void CDCView::DrawPolygon(CDC* pDC)
{
   // find the client area
   CRect rect;
   GetClientRect(rect);

   // draw with a thick blue pen
   CPen penBlue(PS_SOLID, 5, RGB(0, 0, 255));
   CPen* pOldPen = pDC->SelectObject(&penBlue);

   // and a solid red brush
   CBrush brushRed(RGB(255, 0, 0));
   CBrush* pOldBrush = pDC->SelectObject(&brushRed);

   // Find the midpoints of the top, right, left, and bottom
   // of the client area. They will be the vertices of our polygon.
   CPoint pts[4];
   pts[0].x = rect.left + rect.Width()/2;
   pts[0].y = rect.top;

   pts[1].x = rect.right;
   pts[1].y = rect.top + rect.Height()/2;

   pts[2].x = pts[0].x;
   pts[2].y = rect.bottom;

   pts[3].x = rect.left;
   pts[3].y = pts[1].y;

   // Calling Polygon() on that array will draw three lines
   // between the points, as well as an additional line to
   // close the shape--from the last point to the first point
   // we specified.
   pDC->Polygon(pts, 4);

   // Put back the old objects.
   pDC->SelectObject(pOldPen);
   pDC->SelectObject(pOldBrush);
}
// </Snippet38>

// <Snippet39>
void CDCView::DrawRectangle(CDC* pDC)
{
   // create and select a solid blue brush
   CBrush brushBlue(RGB(0, 0, 255));
   CBrush* pOldBrush = pDC->SelectObject(&brushBlue);

   // create and select a thick, black pen
   CPen penBlack;
   penBlack.CreatePen(PS_SOLID, 3, RGB(0, 0, 0));
   CPen* pOldPen = pDC->SelectObject(&penBlack);

   // get our client rectangle
   CRect rect;
   GetClientRect(rect);

   // shrink our rect 20 pixels in each direction
   rect.DeflateRect(20, 20);

   // draw a thick black rectangle filled with blue
   pDC->Rectangle(rect);

   // put back the old objects
   pDC->SelectObject(pOldBrush);
   pDC->SelectObject(pOldPen);
}
// </Snippet39>

// <Snippet40>
void CDCView::DrawRoundRect(CDC* pDC)
{
   // create and select a solid blue brush
   CBrush brushBlue(RGB(0, 0, 255));
   CBrush* pOldBrush = pDC->SelectObject(&brushBlue);

   // create and select a thick, black pen
   CPen penBlack;
   penBlack.CreatePen(PS_SOLID, 3, RGB(0, 0, 0));
   CPen* pOldPen = pDC->SelectObject(&penBlack);

   // get our client rectangle
   CRect rect;
   GetClientRect(rect);

   // shrink our rect 20 pixels in each direction
   rect.DeflateRect(20, 20);

   // Draw a thick black rectangle filled with blue
   // corners rounded at a 17-unit radius. Note that
   // a radius of three or less is not noticable because
   // the pen is three units wide.
   pDC->RoundRect(rect, CPoint(17, 17));

   // put back the old objects
   pDC->SelectObject(pOldBrush);
   pDC->SelectObject(pOldPen);
}
// </Snippet40>

// <Snippet41>
void CDCView::DoStartDoc()
{
   // get the default printer
   CPrintDialog dlg(FALSE);
   dlg.GetDefaults();

   // is a default printer set up?
   HDC hdcPrinter = dlg.GetPrinterDC();
   if (hdcPrinter == NULL)
   {
      MessageBox(_T("Buy a printer!"));
   }
   else
   {
      // create a CDC and attach it to the default printer
      CDC dcPrinter;
      dcPrinter.Attach(hdcPrinter);

      // call StartDoc() to begin printing
      DOCINFO docinfo;
      memset(&docinfo, 0, sizeof(docinfo));
      docinfo.cbSize = sizeof(docinfo);
      docinfo.lpszDocName = _T("CDC::StartDoc() Code Fragment");

      // if it fails, complain and exit gracefully
      if (dcPrinter.StartDoc(&docinfo) < 0)
      {
        MessageBox(_T("Printer wouldn't initalize"));
      }
      else
      {
        // start a page
        if (dcPrinter.StartPage() < 0)
        {
          MessageBox(_T("Could not start page"));
          dcPrinter.AbortDoc();
        }
        else
        {
          // actually do some printing
          CGdiObject* pOldFont = dcPrinter.SelectStockObject(SYSTEM_FONT);

          dcPrinter.TextOut(50, 50, _T("Hello World!"), 12);

          dcPrinter.EndPage();
          dcPrinter.EndDoc();
          dcPrinter.SelectObject(pOldFont);
        }
      }
   }
}
// </Snippet41>

// <Snippet42>
void CDCView::DrawInClientDC(CDC* pDC)
{
   UNREFERENCED_PARAMETER(pDC);

   CClientDC clientDC(this);

   clientDC.TextOut(10, 10, CString(_T("I used a client DC!")));
}
// </Snippet42>

// <Snippet190>
void CDCView::DrawDitheredBitmap(CDC* pDC)
{
   CBitmap bm;
   bm.LoadBitmap(IDB_BITMAP1);
   AfxDrawDitheredBitmap(pDC, 10, 50, bm, RGB(255,255,255),
      GetSysColor(COLOR_BTNFACE));
}
// </Snippet190>

// <Snippet191>
void CDCView::DrawGrayBitmap(CDC* pDC)
{
   CBitmap bm;
   bm.LoadBitmap(IDB_BITMAP1);
   AfxDrawGrayBitmap(pDC, 10, 50, bm, GetSysColor(COLOR_MENU));
}
// </Snippet191>

void CDCView::GetDitheredBitmap(CDC* pDC)
{
// <Snippet192>
   CBitmap bm;
   bm.LoadBitmap(IDB_BITMAP1);
   CBitmap bmDith;
   AfxGetDitheredBitmap(bm, &bmDith, RGB(255,255,255),
      GetSysColor(COLOR_BTNFACE));
// </Snippet192>

   CBrush* pTempBrush = NULL;
   CBrush brush(&bmDith);
   pTempBrush = (CBrush*)pDC->SelectObject(&brush);
   pDC->Rectangle(10, 10, 200, 200);
   pDC->SelectObject(pTempBrush);
}

void CDCView::GetGrayBitmap(CDC* pDC)
{
// <Snippet193>
   CBitmap bm;
   bm.LoadBitmap(IDB_BITMAP1);
   CBitmap bmGray;
   AfxGetGrayBitmap(bm, &bmGray, GetSysColor(COLOR_MENU));
// </Snippet193>

   CBrush* pTempBrush = NULL;
   CBrush brush(&bmGray);
   pTempBrush = (CBrush*)pDC->SelectObject(&brush);
   pDC->Rectangle(10, 10, 200, 200);
   pDC->SelectObject(pTempBrush);
}

// CDCView drawing

void CDCView::OnDraw(CDC* pDC)
{
   ASSERT(0 <= m_DrawType && m_DrawType < dtCount);
   (this->*(m_aDrawFuncs[m_DrawType]))(pDC);
}


// CDCView diagnostics

#ifdef _DEBUG
void CDCView::AssertValid() const
{
   CView::AssertValid();
}

#ifndef _WIN32_WCE
void CDCView::Dump(CDumpContext& dc) const
{
   CView::Dump(dc);
}
#endif
#endif //_DEBUG


// CDCView message handlers

void CDCView::OnDcArc()
{
   m_DrawType = dtArc;
   Invalidate();
}

void CDCView::OnUpdateDcArc(CCmdUI *pCmdUI)
{
   pCmdUI->SetCheck(dtArc == m_DrawType);
}

void CDCView::OnDcPath()
{
   m_DrawType = dtPath;
   Invalidate();
}

void CDCView::OnUpdateDcPath(CCmdUI *pCmdUI)
{
   pCmdUI->SetCheck(dtPath == m_DrawType);
}

void CDCView::OnDcChord()
{
   m_DrawType = dtChord;
   Invalidate();
}

void CDCView::OnUpdateDcChord(CCmdUI *pCmdUI)
{
   pCmdUI->SetCheck(dtChord == m_DrawType);
}

void CDCView::OnDcBitmap()
{
   m_DrawType = dtBitmap;
   Invalidate();
}

void CDCView::OnUpdateDcBitmap(CCmdUI *pCmdUI)
{
   pCmdUI->SetCheck(dtBitmap == m_DrawType);
}

void CDCView::OnDc3drect()
{
   m_DrawType = dt3dRect;
   Invalidate();
}

void CDCView::OnUpdateDc3drect(CCmdUI *pCmdUI)
{
   pCmdUI->SetCheck(dt3dRect == m_DrawType);
}

void CDCView::OnDcFramectl()
{
   m_DrawType = dtFC;
   Invalidate();
}

void CDCView::OnUpdateDcFramectl(CCmdUI *pCmdUI)
{
   pCmdUI->SetCheck(dtFC == m_DrawType);
}

void CDCView::OnDcInvertrect()
{
   m_DrawType = dtInvertRect;
   Invalidate();
}

void CDCView::OnUpdateDcInvertrect(CCmdUI *pCmdUI)
{
   pCmdUI->SetCheck(dtInvertRect == m_DrawType);
}

void CDCView::OnDcPie()
{
   m_DrawType = dtPie;
   Invalidate();
}

void CDCView::OnUpdateDcPie(CCmdUI *pCmdUI)
{
   pCmdUI->SetCheck(dtPie == m_DrawType);
}

void CDCView::OnDcPolygon()
{
   m_DrawType = dtPolygon;
   Invalidate();
}

void CDCView::OnUpdateDcPolygon(CCmdUI *pCmdUI)
{
   pCmdUI->SetCheck(dtPolygon == m_DrawType);
}

void CDCView::OnDcRectangle()
{
   m_DrawType = dtRectangle;
   Invalidate();
}

void CDCView::OnUpdateDcRectangle(CCmdUI *pCmdUI)
{
   pCmdUI->SetCheck(dtRectangle == m_DrawType);
}

void CDCView::OnDcRoundrect()
{
   m_DrawType = dtRoundRect;
   Invalidate();
}

void CDCView::OnUpdateDcRoundrect(CCmdUI *pCmdUI)
{
   pCmdUI->SetCheck(dtRoundRect == m_DrawType);
}
void CDCView::OnDcClientdc()
{
   m_DrawType = dtClientDC;
   Invalidate();
}

void CDCView::OnUpdateDcClientdc(CCmdUI *pCmdUI)
{
   pCmdUI->SetCheck(dtClientDC == m_DrawType);
}

static UINT WM_MYMESSAGE = RegisterWindowMessage(_T("MyDCViewMessage"));

void CDCView::OnStuffCpaintdc()
{
   CWnd* pWnd = this;
   HWND hWnd = this->m_hWnd;

   {
// <Snippet97>
      // Get a dc for a CWnd pointer.
      CPaintDC dc(pWnd);

      // Get a dc for a HWND.
      CPaintDC dc2(CWnd::FromHandle(hWnd));
// </Snippet97>
   }

   {
// <Snippet98>
      // Get a dc for a CWnd object pointer.
      CPaintDC dc(pWnd);

      // Send my private massage.
      ::SendMessage(pWnd->m_hWnd, WM_MYMESSAGE, (LPARAM) &dc.m_ps, 0);
// </Snippet98>
   }
}

void CDCView::OnStuffDopenstuff()
{
   {
// <Snippet99>
      // Create a solid red pen of width 2.
      CPen myPen1(PS_SOLID, 2, RGB(255,0,0));

      // Create a geometric pen.
      LOGBRUSH logBrush;
      logBrush.lbStyle = BS_SOLID;
      logBrush.lbColor = RGB(0,255,0);
      CPen myPen2(PS_DOT|PS_GEOMETRIC|PS_ENDCAP_ROUND, 2, &logBrush);
// </Snippet99>
   }

   {
// <Snippet100>
      CPen myPen1, myPen2;

      // Create a solid red pen of width 2.
      myPen1.CreatePen(PS_SOLID, 2, RGB(255,0,0));

      // Create a geometric pen.
      LOGBRUSH logBrush;
      logBrush.lbStyle = BS_SOLID;
      logBrush.lbColor = RGB(0,255,0);
      myPen2.CreatePen(PS_DOT|PS_GEOMETRIC|PS_ENDCAP_ROUND, 2, &logBrush);   
// </Snippet100>
   }

   {
      CPen penExisting(PS_SOLID, 2, RGB(255,0,0));
// <Snippet101>
      LOGPEN logpen;
      CPen   cMyPen;

      // Get the LOGPEN of an existing pen.
      penExisting.GetLogPen(&logpen);

      // Change the color to red and the width to 2.
      logpen.lopnWidth.x = 2;
      logpen.lopnColor = RGB(255, 0, 0);

      // Create my pen using the new settings.
      cMyPen.CreatePenIndirect(&logpen);
// </Snippet101>
   }

   {
      CPen penExisting(PS_SOLID, 2, RGB(255,0,0));
// <Snippet102>
      EXTLOGPEN extlogpen;
      penExisting.GetExtLogPen(&extlogpen);
      CPen penOther;
      LOGBRUSH LogBrush = { extlogpen.elpBrushStyle, extlogpen.elpColor, 
         extlogpen.elpHatch };
      penOther.CreatePen(PS_COSMETIC, 1, &LogBrush);   
// </Snippet102>
   }

   {
      CPen penExisting(PS_SOLID, 2, RGB(255,0,0));
// <Snippet103>
      LOGPEN logpen;
      penExisting.GetLogPen(&logpen);
      CPen penOther(PS_SOLID, 0, logpen.lopnColor); 
// </Snippet103>
   }

   {
// <Snippet104>
      // Create a solid red pen of width 2.
      CPen myPen(PS_SOLID, 2, RGB(255,0,0));

      // Get the handle of the pen object.
      HPEN hPen = (HPEN) myPen;   
// </Snippet104>

// <Snippet105>
      // Convert an HPEN to a CPen*.
      // NOTE: hPen is a valid pen handle.
      CPen* pPen = CPen::FromHandle(hPen);
// </Snippet105>
      UNREFERENCED_PARAMETER(pPen);
   }
}

void CDCView::OnAfxAfxdrawditheredbitmap()
{
   m_DrawType = dtAfxDrawDitheredBitmap;
   Invalidate();
}

void CDCView::OnUpdateAfxAfxdrawditheredbitmap(CCmdUI *pCmdUI)
{
   pCmdUI->SetCheck(dtAfxDrawDitheredBitmap == m_DrawType);
}

void CDCView::OnAfxAfxdrawgraybitmap()
{
   m_DrawType = dtAfxDrawGrayBitmap;
   Invalidate();
}

void CDCView::OnUpdateAfxAfxdrawgraybitmap(CCmdUI *pCmdUI)
{
   pCmdUI->SetCheck(dtAfxDrawGrayBitmap == m_DrawType);
}

void CDCView::OnAfxAfxgetditheredbitmap()
{
   m_DrawType = dtAfxGetDitheredBitmap;
   Invalidate();
}

void CDCView::OnUpdateAfxAfxgetditheredbitmap(CCmdUI *pCmdUI)
{
   pCmdUI->SetCheck(dtAfxGetDitheredBitmap == m_DrawType);
}

void CDCView::OnAfxAfxgetgraybitmap()
{
   m_DrawType = dtAfxGetGrayBitmap;
   Invalidate();
}

void CDCView::OnUpdateAfxAfxgetgraybitmap(CCmdUI *pCmdUI)
{
   pCmdUI->SetCheck(dtAfxGetGrayBitmap == m_DrawType);
}
