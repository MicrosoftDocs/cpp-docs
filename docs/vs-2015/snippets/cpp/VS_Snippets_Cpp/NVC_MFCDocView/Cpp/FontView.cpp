// FontView.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCDocView.h"
#include "FontView.h"


// CFontView

IMPLEMENT_DYNCREATE(CFontView, CView)

CFontView::CFontView()
   : m_FontType(ftFont)
{
   m_aDrawFuncs[ftFont] = &CFontView::DrawFont;
   m_aDrawFuncs[ftFontIndirect] = &CFontView::DrawFontIndirect;
   m_aDrawFuncs[ftPointFont] = &CFontView::DrawPointFont;
   m_aDrawFuncs[ftPointFontIndirect] = &CFontView::DrawPointFontIndirect;
   m_aDrawFuncs[ftHandle] = &CFontView::DrawHandle;
   m_aDrawFuncs[ftHFONT] = &CFontView::DrawHFONT;
}

CFontView::~CFontView()
{
}

BEGIN_MESSAGE_MAP(CFontView, CView)
   ON_COMMAND(ID_FONT_FONT, &CFontView::OnFontFont)
   ON_UPDATE_COMMAND_UI(ID_FONT_FONT, &CFontView::OnUpdateFontFont)
   ON_COMMAND(ID_FONT_FONTINDIRECT, &CFontView::OnFontFontindirect)
   ON_UPDATE_COMMAND_UI(ID_FONT_FONTINDIRECT, &CFontView::OnUpdateFontFontindirect)
   ON_COMMAND(ID_FONT_POINTFONT, &CFontView::OnFontPointfont)
   ON_UPDATE_COMMAND_UI(ID_FONT_POINTFONT, &CFontView::OnUpdateFontPointfont)
   ON_COMMAND(ID_FONT_POINTFONTINDIRECT, &CFontView::OnFontPointfontindirect)
   ON_UPDATE_COMMAND_UI(ID_FONT_POINTFONTINDIRECT, &CFontView::OnUpdateFontPointfontindirect)
   ON_COMMAND(ID_FONT_HANDLE, &CFontView::OnFontHandle)
   ON_UPDATE_COMMAND_UI(ID_FONT_HANDLE, &CFontView::OnUpdateFontHandle)
   ON_COMMAND(ID_FONT_HFONT, &CFontView::OnFontHfont)
   ON_UPDATE_COMMAND_UI(ID_FONT_HFONT, &CFontView::OnUpdateFontHfont)
   ON_COMMAND(ID_FONT_TRACEFONTNAME, &CFontView::OnFontTracefontname)
   ON_COMMAND(ID_FONTDIALOG_CFONTDIALOG, &CFontView::OnFontdialogCfontdialog)
   ON_COMMAND(ID_FONTDIALOG_GETCOLOR, &CFontView::OnFontdialogGetcolor)
   ON_COMMAND(ID_FONTDIALOG_GETCURRENTFONT, &CFontView::OnFontdialogGetcurrentfont)
   ON_COMMAND(ID_FONTDIALOG_GETFACENAME, &CFontView::OnFontdialogGetfacename)
   ON_COMMAND(ID_FONTDIALOG_GETSIZE, &CFontView::OnFontdialogGetsize)
   ON_COMMAND(ID_FONTDIALOG_GETSTYLENAME, &CFontView::OnFontdialogGetstylename)
   ON_COMMAND(ID_FONTDIALOG_GETWEIGHT, &CFontView::OnFontdialogGetweight)
   ON_COMMAND(ID_FONTDIALOG_ISBOLD, &CFontView::OnFontdialogIsbold)
   ON_COMMAND(ID_FONTDIALOG_ISITALIC, &CFontView::OnFontdialogIsitalic)
   ON_COMMAND(ID_FONTDIALOG_ISUNDERLINE, &CFontView::OnFontdialogIsunderline)
   ON_COMMAND(ID_FONTDIALOG_ISSTRIKEOUT, &CFontView::OnFontdialogIsstrikeout)
   ON_COMMAND(ID_FONTDIALOG_M32843, &CFontView::OnFontdialogM_cf)
END_MESSAGE_MAP()


// CFontView drawing

void CFontView::DrawFont(CDC* pDC)
{
   UNREFERENCED_PARAMETER(pDC);

// <Snippet71>
   // The code fragment shows how to create a font object,
   // select the font object into a DC (device context) for text
   // drawing, and finally delete the font object.

   // Initializes a CFont object with the specified characteristics. 
// <Snippet70>
   CFont font;
// </Snippet70>
   VERIFY(font.CreateFont(
      12,                        // nHeight
      0,                         // nWidth
      0,                         // nEscapement
      0,                         // nOrientation
      FW_NORMAL,                 // nWeight
      FALSE,                     // bItalic
      FALSE,                     // bUnderline
      0,                         // cStrikeOut
      ANSI_CHARSET,              // nCharSet
      OUT_DEFAULT_PRECIS,        // nOutPrecision
      CLIP_DEFAULT_PRECIS,       // nClipPrecision
      DEFAULT_QUALITY,           // nQuality
      DEFAULT_PITCH | FF_SWISS,  // nPitchAndFamily
      _T("Arial")));                 // lpszFacename

   // Do something with the font just created...
   CClientDC dc(this);  
   CFont* def_font = dc.SelectObject(&font);
   dc.TextOut(5, 5, _T("Hello"), 5);
   dc.SelectObject(def_font);

   // Done with the font.  Delete the font object.
   font.DeleteObject(); 
// </Snippet71>
}

void CFontView::DrawFontIndirect(CDC* pDC)
{
   UNREFERENCED_PARAMETER(pDC);

// <Snippet72>
   // The code fragment shows how to create a font object,
   // select the font object into a DC (device context) for text
   // drawing, and finally delete the font object.

   // Initializes a CFont object with the characteristics given 
   // in a LOGFONT structure.
   CFont font;
   LOGFONT lf;
   memset(&lf, 0, sizeof(LOGFONT));       // zero out structure
   lf.lfHeight = 12;                      // request a 12-pixel-height font
   _tcsncpy_s(lf.lfFaceName, LF_FACESIZE, 
      _T("Arial"), 7);                    // request a face name "Arial"
   VERIFY(font.CreateFontIndirect(&lf));  // create the font

   // Do something with the font just created...
   CClientDC dc(this);
   CFont* def_font = dc.SelectObject(&font);
   dc.TextOut(5, 5, _T("Hello"), 5);
   dc.SelectObject(def_font);

   // Done with the font. Delete the font object.
   font.DeleteObject();
// </Snippet72>
}

void CFontView::DrawPointFont(CDC* pDC)
{
   UNREFERENCED_PARAMETER(pDC);

// <Snippet73>
   // The code fragment shows how to create a font object,
   // select the font object into a DC (device context) for text
   // drawing, and finally delete the font object.

   CClientDC dc(this);

   CFont font;
   VERIFY(font.CreatePointFont(120, _T("Arial"), &dc));

   // Do something with the font just created...
   CFont* def_font = dc.SelectObject(&font);
   dc.TextOut(5, 5, _T("Hello"), 5);
   dc.SelectObject(def_font);

   // Done with the font. Delete the font object.
   font.DeleteObject();
// </Snippet73>
}

void CFontView::DrawPointFontIndirect(CDC* pDC)
{
   UNREFERENCED_PARAMETER(pDC);

// <Snippet74>
   // The code fragment shows how to create a font object,
   // select the font object into a DC (device context) for text
   // drawing, and finally delete the font object.
   LOGFONT lf;

   // clear out structure.
   memset(&lf, 0, sizeof(LOGFONT));

   // request a 12-pixel-height font
   lf.lfHeight = 120;

   // request a face name "Arial".
   _tcsncpy_s(lf.lfFaceName, LF_FACESIZE, _T("Arial"), 7);  

   CClientDC dc(this);

   CFont font;
   VERIFY(font.CreatePointFontIndirect(&lf, &dc));   

   // Do something with the font just created...
   CFont* def_font = dc.SelectObject(&font);
   dc.TextOut(5, 5, _T("Hello"), 5);
   dc.SelectObject(def_font);

   // Done with the font. Delete the font object.
   font.DeleteObject();
// </Snippet74>
}

void CFontView::DrawHandle(CDC* pDC)
{
   UNREFERENCED_PARAMETER(pDC);

// <Snippet75>
   // The code fragment shows how to create a font object using
   // Windows API CreateFontIndirect(), convert the HFONT to a 
   // CFont* before selecting the font object into a DC (device 
   // context) for text drawing, and finally delete the font object.

   // Initialize a CFont object with the characteristics given 
   // in a LOGFONT structure.
   LOGFONT lf;

   // clear out structure
   memset(&lf, 0, sizeof(LOGFONT));     
   // request a 12-pixel-height font
   lf.lfHeight = 12;           
   // request a face name "Arial"
   _tcsncpy_s(lf.lfFaceName, LF_FACESIZE, _T("Arial"), 7);
   // create the font
   HFONT hfont = ::CreateFontIndirect(&lf);  

   // Convert the HFONT to CFont*.
   CFont* pfont = CFont::FromHandle(hfont);

   // Do something with the font just created...
   CClientDC dc(this);
   CFont* def_font = dc.SelectObject(pfont);
   dc.TextOut(5, 5, _T("Hello"), 5);
   dc.SelectObject(def_font);

   // Done with the font. Delete the font object.
   ::DeleteObject(hfont);
// </Snippet75>
}

void CFontView::DrawHFONT(CDC* pDC)
{
   UNREFERENCED_PARAMETER(pDC);

// <Snippet77>
   // The code fragment shows the usage of CFont::operator HFONT.

   // Initialize a CFont object with the characteristics given 
   // in a LOGFONT structure.
   LOGFONT lf;

   // clear out structure
   memset(&lf, 0, sizeof(LOGFONT)); 

   // request a 12-pixel-height font
   lf.lfHeight = 12;                

   // request a face name "Arial"
   _tcsncpy_s(lf.lfFaceName, LF_FACESIZE, _T("Arial"), 7);

   CFont font1;
   font1.CreateFontIndirect(&lf);  // create the font

   // CFont::operator HFONT automatically converts font1 from 
   // CFont* to HFONT.
   CFont* font2 = CFont::FromHandle(font1);

   // Do something with the font just created...
   CClientDC dc(this);
   CFont* def_font = dc.SelectObject(font2);
   dc.TextOut(5, 5, _T("Hello"), 5);
   dc.SelectObject(def_font);

   // Done with the font. Delete the font object.
   font1.DeleteObject();  
// </Snippet77>
}

void CFontView::OnDraw(CDC* pDC)
{
   ASSERT(0 <= m_FontType && m_FontType < ftCount);
   (this->*(m_aDrawFuncs[m_FontType]))(pDC);
}


// CFontView diagnostics

#ifdef _DEBUG
void CFontView::AssertValid() const
{
	CView::AssertValid();
}

#ifndef _WIN32_WCE
void CFontView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}
#endif
#endif //_DEBUG


// CFontView message handlers

void CFontView::OnFontFont()
{
   m_FontType = ftFont;
   Invalidate();
}

void CFontView::OnUpdateFontFont(CCmdUI *pCmdUI)
{
   pCmdUI->SetCheck(ftFont == m_FontType);
}

void CFontView::OnFontFontindirect()
{
   m_FontType = ftFontIndirect;
   Invalidate();
}

void CFontView::OnUpdateFontFontindirect(CCmdUI *pCmdUI)
{
   pCmdUI->SetCheck(ftFontIndirect == m_FontType);
}

void CFontView::OnFontPointfont()
{
   m_FontType = ftPointFont;
   Invalidate();
}

void CFontView::OnUpdateFontPointfont(CCmdUI *pCmdUI)
{
   pCmdUI->SetCheck(ftPointFont == m_FontType);
}

void CFontView::OnFontPointfontindirect()
{
   m_FontType = ftPointFontIndirect;
   Invalidate();
}

void CFontView::OnUpdateFontPointfontindirect(CCmdUI *pCmdUI)
{
   pCmdUI->SetCheck(ftPointFontIndirect == m_FontType);
}

void CFontView::OnFontHandle()
{
   m_FontType = ftHandle;
   Invalidate();
}

void CFontView::OnUpdateFontHandle(CCmdUI *pCmdUI)
{
   pCmdUI->SetCheck(ftHandle == m_FontType);
}

void CFontView::OnFontHfont()
{
   m_FontType = ftHFONT;
   Invalidate();
}

void CFontView::OnUpdateFontHfont(CCmdUI *pCmdUI)
{
   pCmdUI->SetCheck(ftHFONT == m_FontType);
}

void CFontView::OnFontTracefontname()
{
   CEdit edit;
   edit.Create(WS_CHILD | WS_VISIBLE, CRect(10, 10, 100, 100), this, 1);
   CFont font;
   font.CreatePointFont(120, _T("Arial"));
   edit.SetFont(&font);
   CWnd* pWnd = &edit;

// <Snippet76>
   // The code fragment shows how to retrieve a copy of the 
   // LOGFONT structure for a currently selected font of a window.

   CFont* pFont = pWnd->GetFont();
   if (NULL != pFont)
   {
      LOGFONT lf;
      pFont->GetLogFont(&lf);
      TRACE(_T("Typeface name of font = %s\n"), lf.lfFaceName);
   }
// </Snippet76>
}

void CFontView::OnFontdialogCfontdialog()
{
// <Snippet78>
   // Show the font dialog with all the default settings.
   CFontDialog dlg;
   dlg.DoModal();

   // Show the font dialog with 12 point "Times New Roman" as the 
   // selected font.
   LOGFONT lf;
   memset(&lf, 0, sizeof(LOGFONT));

   CClientDC dc(this); // expects a CWnd that has already been initialized
   lf.lfHeight = -MulDiv(12, dc.GetDeviceCaps(LOGPIXELSY), 72);
   _tcscpy_s(lf.lfFaceName, LF_FACESIZE, _T("Times New Roman"));

   CFontDialog fdlg(&lf);
   fdlg.DoModal();
// </Snippet78>
}

void CFontView::OnFontdialogGetcolor()
{
// <Snippet79>
   // Get the color of the selected font, if any.
   CFontDialog dlg;
   if (dlg.DoModal() == IDOK)
   {
      COLORREF color = dlg.GetColor();
      TRACE(_T("Color of the selected font = %8x\n"), color);
   }
// </Snippet79>
}

void CFontView::OnFontdialogGetcurrentfont()
{
// <Snippet80>
   // Get the characteristics of the currently selected font, if any.
   CFontDialog dlg;
   if (dlg.DoModal() == IDOK)
   {
      LOGFONT lf;
      dlg.GetCurrentFont(&lf);
      TRACE(_T("Face name of the selected font = %s\n"), lf.lfFaceName);
   }
// </Snippet80>
}

void CFontView::OnFontdialogGetfacename()
{
// <Snippet81>
   // Get the face name of the selected font, if any.
   CFontDialog dlg;
   if (dlg.DoModal() == IDOK)
   {
      CString facename = dlg.GetFaceName();
      TRACE(_T("Face name of the selected font = %s\n"), facename);
   }
// </Snippet81>
}

void CFontView::OnFontdialogGetsize()
{
// <Snippet82>
   // Get the size of the selected font, if any.
   CFontDialog dlg;
   if (dlg.DoModal() == IDOK)
   {
      int size = dlg.GetSize();
      TRACE(_T("The size of the selected font = %d\n"), size);
   }
// </Snippet82>
}

void CFontView::OnFontdialogGetstylename()
{
// <Snippet83>
   // Get the style name of the selected font, if any.
   CFontDialog dlg;
   dlg.m_cf.Flags |= CF_USESTYLE;
   if (dlg.DoModal() == IDOK)
   {
      CString stylename = dlg.GetStyleName();
      TRACE(_T("Style name of the selected font = %s\n"), stylename);
   }
// </Snippet83>
}

void CFontView::OnFontdialogGetweight()
{
// <Snippet84>
   // Get the weight of the selected font, if any.
   CFontDialog dlg;
   if (dlg.DoModal() == IDOK)
   {
      int weight = dlg.GetWeight();
      TRACE(_T("Weight of the selected font = %d\n"), weight);
   }
// </Snippet84>
}

void CFontView::OnFontdialogIsbold()
{
// <Snippet85>
   // Is the selected font bold?
   CFontDialog dlg;
   if (dlg.DoModal() == IDOK)
   {
      BOOL bold = dlg.IsBold();
      TRACE(_T("Is the selected font bold? %d\n"), bold);
   }
// </Snippet85>
}

void CFontView::OnFontdialogIsitalic()
{
// <Snippet86>
   // Is the selected font italic?
   CFontDialog dlg;
   if (dlg.DoModal() == IDOK)
   {
      BOOL italic = dlg.IsItalic();
      TRACE(_T("Is the selected font italic? %d\n"), italic);
   }
// </Snippet86>
}

void CFontView::OnFontdialogIsstrikeout()
{
// <Snippet87>
   // Is the selected font displayed with strikeout?
   CFontDialog dlg;
   if (dlg.DoModal() == IDOK)
   {
      BOOL strikeout = dlg.IsStrikeOut();
      TRACE(_T("Is the selected font strikeout? %d\n"), strikeout);
   }
// </Snippet87>
}

void CFontView::OnFontdialogIsunderline()
{
// <Snippet88>
   // Is the selected font underlined?
   CFontDialog dlg;
   if (dlg.DoModal() == IDOK)
   {
      BOOL underline = dlg.IsUnderline();
      TRACE(_T("Is the selected font underlined? %d\n"), underline);
   }
// </Snippet88>
}
void CFontView::OnFontdialogM_cf()
{
// <Snippet89>
   // The code fragment creates a font based on the information 
   // we got from CFontDialog::m_cf variable.

   CFontDialog dlg;
   if (dlg.DoModal() == IDOK)
   {
      // Create the font using the selected font from CFontDialog.
      LOGFONT lf;
      memcpy(&lf, dlg.m_cf.lpLogFont, sizeof(LOGFONT));

      CFont font;
      VERIFY(font.CreateFontIndirect(&lf));

      // Do something with the font just created...
      CClientDC dc(this);
      CFont* def_font = dc.SelectObject(&font);
      dc.TextOut(5, 5, _T("Hello"), 5);
      dc.SelectObject(def_font);

      // Done with the font. Delete the font object.
      font.DeleteObject();
   }
// </Snippet89>
}
