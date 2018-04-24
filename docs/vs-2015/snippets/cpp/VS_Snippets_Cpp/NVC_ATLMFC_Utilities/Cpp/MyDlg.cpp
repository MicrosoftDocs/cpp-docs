// MyDlg.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_ATLMFC_Utilities.h"
#include "MyDlg.h"

// <Snippet199>
// Performs a transparent blit from the source image to the destination 
// image using the images' current transparency settings
BOOL TransparentBlt(CImage* pSrcImage, CImage* pDstImage, int xDest, int yDest,
   int nDestWidth, int nDestHeight)
{
   HDC hDstDC = NULL;
   BOOL bResult;

   if(pSrcImage == NULL || pDstImage == NULL)
   {
      // Invalid parameter
      return FALSE;
   }

   // Obtain a DC to the destination image
   hDstDC = pDstImage->GetDC();

   // Perform the blit
   bResult = pSrcImage->TransparentBlt(hDstDC, xDest, yDest, nDestWidth, nDestHeight);

   // Release the destination DC
   pDstImage->ReleaseDC();

   return bResult;
}
// </Snippet199>

// CMyDlg dialog

IMPLEMENT_DYNAMIC(CMyDlg, CDialog)

CMyDlg::CMyDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMyDlg::IDD, pParent)
{
// <Snippet69>
   DWORD adwBitmasks[3] = { 0x0000000f, 0x000000f0, 0x00000f00 };
   m_myImage.CreateEx(100, 100, 16, BI_BITFIELDS, adwBitmasks, 0);
// </Snippet69>

   m_menu.LoadMenu(IDR_DLGPOPUP);
   m_pmenuPop = m_menu.GetSubMenu(0);
}

CMyDlg::~CMyDlg()
{
}

void CMyDlg::DoDataExchange(CDataExchange* pDX)
{
   CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CMyDlg, CDialog)
   ON_WM_PAINT()
   ON_WM_RBUTTONDOWN()
   ON_COMMAND(ID_BMPCOMMAND, &CMyDlg::OnBmpCommand)
   ON_COMMAND(ID_POPUP_SAVE, &CMyDlg::OnPopupSave)
   ON_COMMAND(ID_POPUP_GETFILTERSTRINGS, &CMyDlg::OnPopupGetfilterstrings)
   ON_COMMAND(ID_POPUP_TRANSPARENTBLT, &CMyDlg::OnPopupTransparentblt)
END_MESSAGE_MAP()


// CMyDlg message handlers

// <Snippet36>
// Code from this OnPaint() implementation can be pasted into your own application
// to draw lines that would look like a letter "Y" within your dialog. 
void CMyDlg::OnPaint()
{
   CPaintDC dc(this); // device context for painting

   // get the size and position of the client area of 
   // your window

   CRect rect;
   GetClientRect(&rect);

   // Move the current pen to the top left of the window. We call the
   // TopLeft() member of CRect here and it returns a CPoint object we
   // pass to the override of CDC::MoveTo() that accepts a CPoint.

   dc.MoveTo(rect.TopLeft());

   // Draw a line from the top left to the center of the window.
   // CenterPoint() gives us the middle point of the window as a
   // CPoint, and since CDC::LineTo() has an override that accepts a
   // CPoint, we can just pass it along.

   dc.LineTo(rect.CenterPoint());

   // Now, draw a line to the top right of the window. There's no
   // CRect member which returns a CPoint for the top right of the
   // window, so we'll reference the CPoint members directly and call
   // the CDC::LineTo() override which takes two integers.

   dc.LineTo(rect.right, rect.top);

   // The top part of the "Y" is drawn. Now, we'll draw the stem. We
   // start from the center point.

   dc.MoveTo(rect.CenterPoint());

   // and then draw to the middle of the bottom edge of the window.
   // We'll get the x-coordinate from the x member of the CPoint
   // returned by CenterPoint(), and the y value comes directly from
   // the rect.

   dc.LineTo(rect.CenterPoint().x, rect.bottom);
}
// </Snippet36>

// <Snippet58>
BOOL CMyDlg::OnInitDialog()
{
   CDialog::OnInitDialog();

   // CWnd::GetWindowRect() takes a LPRECT, but we can
   // simply pass our CRect object because of the LPRECT
   // cast operator in the CRect class.

   CRect rect;
   GetWindowRect(rect);

   // Similarly, CWnd::MoveWindow() takes a LPCRECT but
   // the LPCRECT cast operator is used implicitly:

   MoveWindow(rect, FALSE);

   return TRUE;
}
// </Snippet58>

// <Snippet71>
void CMyDlg::OnRButtonDown(UINT nFlags, CPoint point)
{
   UNREFERENCED_PARAMETER(nFlags);

   CBitmap* pBitmap = CBitmap::FromHandle(m_myImage);
   m_pmenuPop->AppendMenu(0, ID_BMPCOMMAND, pBitmap);
   ClientToScreen(&point);
   m_pmenuPop->TrackPopupMenu(TPM_RIGHTBUTTON | TPM_LEFTALIGN, point.x, 
      point.y, this);
}
// </Snippet71>

void CMyDlg::OnBmpCommand()
{
// <Snippet70>
   // Get a CDC for the image
   CDC* pDC = CDC::FromHandle(m_myImage.GetDC());

   // Use pDC here
   pDC->Rectangle(0, 40, 100, 50);

   m_myImage.ReleaseDC();
// </Snippet70>

   CPaintDC dc(this);
   m_myImage.Draw(dc.m_hDC, CPoint(0, 0));
}

void CMyDlg::OnPopupSave()
{
   CBitmap bmp;
   bmp.LoadBitmap(IDB_BITMAP1);
   m_myImage.Destroy();
   m_myImage.Attach((HBITMAP)bmp.Detach());

// <Snippet72>
   // Demonstrating saving various file formats
   // save an image in BMP format
   m_myImage.Save(_T("c:\\temp\\image1.bmp"));
   // save an image in BMP format
   m_myImage.Save(_T("c:\\temp\\image2"), Gdiplus::ImageFormatBMP);
   // save an image in JPEG format
   m_myImage.Save(_T("c:\\temp\\image3.jpg"));
   // save an image in BMP format, even though jpg file extension is used
   m_myImage.Save(_T("c:\\temp\\image4.jpg"), Gdiplus::ImageFormatBMP);
// </Snippet72>
}

void CMyDlg::OnPopupGetfilterstrings()
{
   CString strExporters;
   CString strImporters;
   CSimpleArray<GUID> aguidFileTypes;

// <Snippet73>
   //First filter in the list will be titled "All Image Files", and
   //will accept files with any extension supported by any exporter.
   CImage::GetExporterFilterString( strExporters, aguidFileTypes, 
      _T("All Image Files"));
// </Snippet73>

// <Snippet74>
   //First filter in the list will be titled "All Image Files", and
   //will accept files with any extension supported by any importer.
   CImage::GetImporterFilterString( strImporters, aguidFileTypes, 
      _T("All Image Files"));
// </Snippet74>
}

void CMyDlg::OnPopupTransparentblt()
{
   CImage srcImg;
   srcImg.Create(100, 100, 4);
   CImage dstImg;
   dstImg.Create(100, 100, 4);

   srcImg.SetTransparentColor((COLORREF)0);
   TransparentBlt(&srcImg, &dstImg, 0, 0, 100, 100);
}
