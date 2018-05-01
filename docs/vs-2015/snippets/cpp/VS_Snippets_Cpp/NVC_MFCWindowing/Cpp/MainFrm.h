// MainFrm.h : interface of the CMainFrame class
//


#pragma once

#include "Modeless.h"

// CColorMenu
class CColorMenu : public CMenu
{
public:
   CColorMenu();
   ~CColorMenu();

   void AppendColorMenuItem(UINT nID, COLORREF color);

public:
   virtual void DrawItem(LPDRAWITEMSTRUCT /*lpDrawItemStruct*/);
   virtual void MeasureItem(LPMEASUREITEMSTRUCT lpMIS);
};

// CMyFileDialog

class CMyFileDialog : public CFileDialog
{
   DECLARE_DYNAMIC(CMyFileDialog)

public:
   CMyFileDialog(BOOL bOpenFileDialog, // TRUE for FileOpen, FALSE for FileSaveAs
      LPCTSTR lpszDefExt = NULL,
      LPCTSTR lpszFileName = NULL,
      DWORD dwFlags = OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT,
      LPCTSTR lpszFilter = NULL,
      CWnd* pParentWnd = NULL);
   virtual ~CMyFileDialog();

protected:
   DECLARE_MESSAGE_MAP()
public:
   virtual BOOL OnInitDialog();
};

// <Snippet136>
class CMainFrame : public CMDIFrameWnd
{
   DECLARE_MESSAGE_MAP()

   // Remainder of class declaration omitted.
// </Snippet136>

   DECLARE_DYNAMIC(CMainFrame)
public:
   CMainFrame();

// Attributes
public:
   CColorMenu m_ColorMenu;

// <Snippet67>
// Declare a CWnd member of CMainFrame
public:
   CWnd m_wndMDIClient;
// </Snippet67>

   CModeless m_Modeless;

// Operations
public:
	static void CALLBACK MyTimerProc(
   HWND hWnd,      // handle of CWnd that called SetTimer
   UINT nMsg,      // WM_TIMER
   UINT_PTR nIDEvent,   // timer identification
   DWORD dwTime    // system time
);

// Overrides
public:
   virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// Implementation
public:
   virtual ~CMainFrame();
#ifdef _DEBUG
   virtual void AssertValid() const;
   virtual void Dump(CDumpContext& dc) const;
#endif

protected:  // control bar embedded members
   CStatusBar  m_wndStatusBar;
   CToolBar    m_wndToolBar;

   HMENU m_hDrawMenu;
   HACCEL m_hDrawAccel;

   CMenu m_NewMenu;
   CMenu m_FileMenu;

   CMenu m_ShortMenu;
   CMenu m_IndiMenu;

   CBitmap m_CheckBitmap;
   CBitmap m_UnCheckBitmap;
   bool m_bCheck;

   UINT_PTR m_nWindowTimer;
   UINT_PTR m_nCallbackTimer;

// Generated message map functions
protected:
   afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
public:
   afx_msg void OnFileNewMdiChildWnd();
public:
   afx_msg void OnHello();
public:
   afx_msg void OnCloseWindow();
public:
   afx_msg void OnMaximizeWindow();
public:
   afx_msg void OnRestoreWindow();
protected:
   virtual BOOL OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext);
public:
   afx_msg void OnNewDraw();
public:
   afx_msg BOOL OnWindowCommand(UINT nID);
public:
   afx_msg void OnActivateNextWindow();
public:
   afx_msg void OnActivateFirstMDIChild();
public:
   afx_msg void OnMenuCreatemenu();
public:
   afx_msg void OnMenuSetupcolor();
public:
   afx_msg void OnMenuDisablefilenew();
public:
   afx_msg void OnMenuAttach();
public:
   afx_msg void OnMenuDeletetempmap();
public:
   afx_msg void OnToggleTestMenuItemInfo();
public:
   afx_msg void OnToggleTestMenuState();
public:
   afx_msg void OnChangeFileMenu();
public:
   afx_msg void OnReplaceMenu();
public:
   afx_msg void OnLoadMenuIndirect();
public:
   afx_msg void OnUpdateMenuBitmap(CCmdUI *pCmdUI);
public:
   afx_msg void OnWinappAddtorecentfilelist();
public:
   afx_msg void OnWinappWinhelp();
public:
   afx_msg void OnWinappGetprofilebinary();
public:
   afx_msg void OnWinappGetprofileint();
public:
   afx_msg void OnWinappGetprofilestring();
public:
   afx_msg void OnWinappWriteprofilebinary();
public:
   afx_msg void OnCursorDocursor();
public:
   afx_msg void OnCwndMydlg();
public:
   afx_msg void OnCwndModeless();
public:
   afx_msg void OnCwndPenwidthsdlg();
public:
   afx_msg void OnCwndMyfiledialog();
public:
   afx_msg void OnCwndDeletefilemenu();
public:
   afx_msg void DisplayModeless();
public:
   afx_msg void HideModeless();
public:
   afx_msg void OnDisplayErrorMessage();
public:
   afx_msg void OnStartTimer();
public:
   afx_msg void OnStopTimer();
public:
   afx_msg void OnTimer(UINT_PTR nIDEvent);
public:
   afx_msg void OnGlobalsAfxgetapp();
public:
   afx_msg void OnGlobalsCloseapp();
public:
   afx_msg void OnGlobalsAfxgetresourcehandle();
public:
   afx_msg void OnGlobalsAfxmessagebox();
public:
   afx_msg void OnGlobalsAfxregisterwndclass();
};

