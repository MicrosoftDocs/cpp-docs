// PolyCtl.cpp : Implementation of CPolyCtl
#include "stdafx.h"
#include "PolyCtl.h"

// <Snippet47>
#include <math.h>
#include "resource.h"       // main symbols
// </Snippet47>

// CPolyCtl

// <Snippet46>
STDMETHODIMP CPolyCtl::get_Sides(short* pVal)
{
   *pVal = m_nSides;

   return S_OK;
}

STDMETHODIMP CPolyCtl::put_Sides(short newVal)
{
   if (2 < newVal && newVal < 101)
   {
      m_nSides = newVal;
      return S_OK;
   }
   else
   {
      return Error(_T("Shape must have between 3 and 100 sides"));
   }
}
// </Snippet46>

#undef CPolyCtl
#define CPolyCtl CDummy

class CPolyCtl
{
public:
   short m_nSides;
   STDMETHOD(put_Sides)(short newVal);
   void FireViewChange() {}
   HRESULT Error(LPCTSTR) { return E_FAIL; }
};

// <Snippet55>
STDMETHODIMP CPolyCtl::put_Sides(short newVal)
{
   if (2 < newVal && newVal < 101)
   {
      m_nSides = newVal;
      FireViewChange();
      return S_OK;
   }
   else
   {
      return Error(_T("Shape must have between 3 and 100 sides"));
   }
}
// </Snippet55>
#undef CPolyCtl
#define CPolyCtl CPolyCtl


// <Snippet49>
HRESULT CPolyCtl::OnDraw(ATL_DRAWINFO& di)
{
   RECT& rc = *(RECT*)di.prcBounds;
   HDC hdc  = di.hdcDraw;

   COLORREF    colFore;
   HBRUSH      hOldBrush, hBrush;
   HPEN        hOldPen, hPen;

   // Translate m_colFore into a COLORREF type
   OleTranslateColor(m_clrFillColor, NULL, &colFore);

   // Create and select the colors to draw the circle
   hPen = (HPEN)GetStockObject(BLACK_PEN);
   hOldPen = (HPEN)SelectObject(hdc, hPen);
   hBrush = (HBRUSH)GetStockObject(WHITE_BRUSH);
   hOldBrush = (HBRUSH)SelectObject(hdc, hBrush);

   Ellipse(hdc, rc.left, rc.top, rc.right, rc.bottom);

   // Create and select the brush that will be used to fill the polygon
   hBrush    = CreateSolidBrush(colFore);
   SelectObject(hdc, hBrush);

   CalcPoints(rc);
   Polygon(hdc, &m_arrPoint[0], m_nSides);

   // Select back the old pen and brush and delete the brush we created
   SelectObject(hdc, hOldPen);
   SelectObject(hdc, hOldBrush);
   DeleteObject(hBrush);

   return S_OK;
}
// </Snippet49>

// <Snippet52>
void CPolyCtl::CalcPoints(const RECT& rc)
{
   const double pi = 3.14159265358979;
   POINT   ptCenter;
   double  dblRadiusx = (rc.right - rc.left) / 2;
   double  dblRadiusy = (rc.bottom - rc.top) / 2;
   double  dblAngle = 3 * pi / 2;          // Start at the top
   double  dblDiff  = 2 * pi / m_nSides;   // Angle each side will make
   ptCenter.x = (rc.left + rc.right) / 2;
   ptCenter.y = (rc.top + rc.bottom) / 2;

   // Calculate the points for each side
   for (int i = 0; i < m_nSides; i++)
   {
      m_arrPoint[i].x = (long)(dblRadiusx * cos(dblAngle) + ptCenter.x + 0.5);
      m_arrPoint[i].y = (long)(dblRadiusy * sin(dblAngle) + ptCenter.y + 0.5);
      dblAngle += dblDiff;
   }
}
// </Snippet52>

// <Snippet57>
LRESULT CPolyCtl::OnLButtonDown(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM lParam, 
   BOOL& /*bHandled*/)
{
   HRGN hRgn;
   WORD xPos = LOWORD(lParam);  // horizontal position of cursor
   WORD yPos = HIWORD(lParam);  // vertical position of cursor

   CalcPoints(m_rcPos);

   // Create a region from our list of points
   hRgn = CreatePolygonRgn(&m_arrPoint[0], m_nSides, WINDING);

   // If the clicked point is in our polygon then fire the ClickIn
   //  event otherwise we fire the ClickOut event
   if (PtInRegion(hRgn, xPos, yPos))
      Fire_ClickIn(xPos, yPos);
   else
      Fire_ClickOut(xPos, yPos);

   // Delete the region that we created
   DeleteObject(hRgn);
   return 0;
}
// </Snippet57>