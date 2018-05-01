// frame.cpp : implementation of the CMainFrame class
//
// This is a part of the Microsoft Foundation Classes C++ library.
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
// This source code is only intended as a supplement to the
// Microsoft Foundation Classes Reference and related
// electronic documentation provided with the library.
// See these sources for detailed information regarding the
// Microsoft Foundation Classes product.



#include "stdafx.h"
#include "oclient.h"

#include "frame.h"

#ifdef _DEBUG
#undef THIS_FILE
static char BASED_CODE THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMainFrame

IMPLEMENT_DYNAMIC(CMainFrame, CMDIFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CMDIFrameWnd)
   //{{AFX_MSG_MAP(CMainFrame)
   ON_WM_CREATE()
   ON_COMMAND(ID_WINDOW_TILE_HORZ, OnWindowTileHorz)
   ON_WM_PALETTECHANGED()
   ON_WM_QUERYNEWPALETTE()
   //}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// arrays of IDs used to initialize control bars

// toolbar buttons - IDs are command buttons
static UINT BASED_CODE buttons[] =
{
   // same order as in the bitmap 'toolbar.bmp'
   ID_FILE_NEW,
   ID_FILE_OPEN,
   ID_FILE_SAVE,
      ID_SEPARATOR,
   ID_EDIT_CUT,
   ID_EDIT_COPY,
   ID_EDIT_PASTE,
      ID_SEPARATOR,
   ID_FILE_PRINT,
   ID_APP_ABOUT,
   ID_CONTEXT_HELP,
};

static UINT BASED_CODE indicators[] =
{
   ID_SEPARATOR,           // status line indicator
   ID_INDICATOR_CAPS,
   ID_INDICATOR_NUM,
   ID_INDICATOR_SCRL,
};


/////////////////////////////////////////////////////////////////////////////
// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
}

int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
   if (CMDIFrameWnd::OnCreate(lpCreateStruct) == -1)
      return -1;

   if (!m_wndToolBar.Create(this) ||
      !m_wndToolBar.LoadBitmap(IDR_MAINFRAME) ||
      !m_wndToolBar.SetButtons(buttons,
        sizeof(buttons)/sizeof(UINT)))
   {
      TRACE0("Failed to create toolbar\n");
      return -1;      // fail to create
   }

   if (!m_wndStatusBar.Create(this) ||
      !m_wndStatusBar.SetIndicators(indicators,
        sizeof(indicators)/sizeof(UINT)))
   {
      TRACE0("Failed to create status bar\n");
      return -1;      // fail to create
   }
   EnableDocking(CBRS_ALIGN_ANY);
   m_wndToolBar.EnableDocking(CBRS_ALIGN_ANY);
   DockControlBar(&m_wndToolBar);
   CDC* pDC = GetDC();
   m_palette.CreateHalftonePalette(pDC);
   ReleaseDC(pDC);
   return 0;
}

CMainFrame::~CMainFrame()
{
}

/////////////////////////////////////////////////////////////////////////////
// CMainFrame diagnostics

#ifdef _DEBUG
void CMainFrame::AssertValid() const
{
   CMDIFrameWnd::AssertValid();
}

void CMainFrame::Dump(CDumpContext& dc) const
{
   CMDIFrameWnd::Dump(dc);
}

#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMainFrame commands

void CMainFrame::OnWindowTileHorz()
{
   if (GetKeyState(VK_SHIFT) < 0)
      OnMDIWindowCmd(ID_WINDOW_TILE_VERT);
   else
      OnMDIWindowCmd(ID_WINDOW_TILE_HORZ);
}

/////////////////////////////////////////////////////////////////////////////
// CMainFrame message handlers

void CMainFrame::OnPaletteChanged(CWnd* pFocusWnd)
{
   CMDIFrameWnd::OnPaletteChanged(pFocusWnd);
   if (pFocusWnd != this)
      SelectPalette(TRUE);
}

BOOL CMainFrame::OnQueryNewPalette()
{
   if (CMDIFrameWnd::OnQueryNewPalette())
      return TRUE;
   return SelectPalette(FALSE);
}

BOOL CMainFrame::SelectPalette(BOOL bBackground)
{
   if (m_palette.m_hObject == NULL)
      return FALSE;

   CDC* pDC = GetDC();
   CPalette* pOldPal = pDC->SelectPalette(&m_palette, bBackground);
   UINT nPalChg = pDC->RealizePalette();
   pDC->SelectPalette(pOldPal, TRUE); // background
   ReleaseDC(pDC);

   if (nPalChg > 0)
      InvalidateRect(NULL, TRUE);

   return TRUE;
}
