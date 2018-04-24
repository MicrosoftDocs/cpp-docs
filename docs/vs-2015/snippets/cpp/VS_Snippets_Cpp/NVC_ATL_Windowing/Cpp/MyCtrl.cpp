// MyCtrl.cpp : Implementation of CMyCtrl
#include "stdafx.h"
#include "MyCtrl.h"
#include "MyDlg.h"
#include "MyWindow.h"
#include "MyComponent.h"
#include "MySink.h"
#include "Buddy.h"
#include "CBuddySink.h"

// CMyCtrl

STDMETHODIMP CMyCtrl::CWindowAttach(void)
{
// <Snippet1>
   //The following example attaches an HWND to the CWindow object
   HWND hWnd  = ::GetDesktopWindow();
   CWindow myWindow;
   myWindow.Attach(hWnd);
// </Snippet1>

   myWindow.Detach();

   return S_OK;
}

// <Snippet2>
//The following example attaches an HWND to the CWindow object
//and calls CWindow::BeginPaint() and CWindow::EndPaint() in the 
// WM_PAINT handler of a CWindowImpl-derived class
LRESULT CMyCtrl::OnPaint(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, 
   BOOL& /*bHandled*/)
{
   CWindow myWindow;
   myWindow.Attach(m_hWnd);
   PAINTSTRUCT ps;
   HDC hDC  = myWindow.BeginPaint(&ps);
   //Use the hDC as much as you want
   ::Rectangle(hDC, 0, 0, 50, 50);

   myWindow.EndPaint(&ps);

   return 0;
}
// </Snippet2>

STDMETHODIMP CMyCtrl::CWindowBringWindowToTop(void)
{
   HWND hWnd = m_hWnd;

// <Snippet3>
   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::BringWindowToTop() to bring the window to the top 
   //of the z-order.

   CWindow myWindow;
   myWindow.Attach(hWnd);
   BOOL bOnTop = myWindow.BringWindowToTop();

   //check if we could bring the window on top
   if(bOnTop)
   {
      //Do something
   }
// </Snippet3>

   return S_OK;
}

STDMETHODIMP CMyCtrl::CWindowCenterWindow(void)
{
   CreateAndShowMyDlg();

   HWND hWndChild = m_hWnd;
   HWND hWndPopup = m_MyDlg;
   HWND hWndOverlapped = GetParent();

// <Snippet4>
   //The following example attaches various HWNDs to the CWindow objects 
   //and calls CWindow::CenterWindow() for each of them

   CWindow childWindow, popupWindow, overlappedWindow;

   childWindow.Attach(hWndChild); //a window created with WS_CHILD style
   childWindow.CenterWindow();    //This will center the child 
                                  //window against its Parent window

   popupWindow.Attach(hWndPopup); //a window created with WS_POPUP style
   popupWindow.CenterWindow();    //This will center the popup window 
                                  //against its Owner window

   overlappedWindow.Attach(hWndOverlapped); //a window created with 
                                            //WS_OVERLAPPED style
   overlappedWindow.CenterWindow(::GetDesktopWindow()); //This will center 
                          //the overlapped window against the DeskTop window
// </Snippet4>

   return S_OK;
}

void CMyCtrl::CreateAndShowMyDlg()
{
   if (!m_MyDlg.IsWindow())
   {
      m_MyDlg.Create(m_hWnd);   
   }
   m_MyDlg.ShowWindow(SW_SHOW);
}

STDMETHODIMP CMyCtrl::CWindowDestroyWindow(void)
{
   CreateAndShowMyDlg();
   HWND hWndChild = m_MyDlg.m_hWnd;

// <Snippet5>
   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::DestroyWindow() to destroy the window

   CWindow myWindow;
   myWindow.Attach(hWndChild);
   //call the CWindow wrappers
 
   myWindow.DestroyWindow();
   hWndChild = NULL;
// </Snippet5>

   return S_OK;
}

STDMETHODIMP CMyCtrl::CWindowDetach(void)
{
   HWND hWnd = m_hWnd;

// <Snippet6>
   //The following example attaches an HWND to the CWindow object and 
   //later detaches the CWindow object from the HWND when no longer needed

   CWindow myWindow;
   myWindow.Attach(hWnd);

   //call CWindow wrappers

   //We don't need the C++ object any more, so detach it from the HWND.
   myWindow.Detach(); 
// </Snippet6>

   return S_OK;
}

STDMETHODIMP CMyCtrl::CWindowEnableWindow(void)
{
   CreateAndShowMyDlg();
   HWND hWnd = m_MyDlg.m_hWnd;

// <Snippet7>
   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::EnableWindow() to enable and disable the window
   //wrapped by the CWindow object

   CWindow myWindow;
   myWindow.Attach(hWnd);

   //The following call enables the window 
   //CWindow::EnableWindow() takes TRUE as the default parameter

   myWindow.EnableWindow();

   if(myWindow.IsWindowEnabled())
   {
      //Do something now that the window is enabled

      //Now it's time to disable the window again
      myWindow.EnableWindow(FALSE);
   }
// </Snippet7>

   return S_OK;
}

STDMETHODIMP CMyCtrl::CWindowGetClientRect(void)
{
    HWND hWnd = m_hWnd;

// <Snippet8>
   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::GetClientRect() to get the client area rectangle
   //of the window

   CWindow myWindow;
   myWindow.Attach(hWnd);
   RECT rc;
   myWindow.GetClientRect(&rc);
// </Snippet8>

   return S_OK;
}

STDMETHODIMP CMyCtrl::CWindowGetDC(void)
{
   HWND hWnd = m_hWnd;
// <Snippet9>
   // The following example attaches a HWND to the CWindow object,
   // calls CWindow::GetDC to retrieve the DC of the client
   // area of the window wrapped by CWindow Object, and calls
   // CWindow::ReleaseDC to release the DC. 

   CWindow myWindow;
   myWindow.Attach(hWnd);   
   HDC hDC = myWindow.GetDC();

   // Use the DC

   myWindow.ReleaseDC(hDC);
   hDC = NULL;
// </Snippet9>

   return S_OK;
}

STDMETHODIMP CMyCtrl::CWindowGetExStyle(void)
{
   HWND hWnd = m_hWnd;
// <Snippet10>
   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::GetExStyle() to retrieve the extended styles of 
   //the window

   CWindow myWindow;
   myWindow.Attach(hWnd);
   DWORD dwExStyles = myWindow.GetExStyle();
// </Snippet10>
   dwExStyles;

   return S_OK;
}

STDMETHODIMP CMyCtrl::CWindowGetParent(void)
{
   HWND hWnd = m_hWnd;
// <Snippet11>
   // The following example attaches a HWND to the CWindow object
   // and calls CWindow::GetParent to find out the parent
   // window of the window wrapped by CWindow object.

   CWindow myWindow;
   myWindow.Attach(hWnd);   
   HWND hWndParent = myWindow.GetParent();
// </Snippet11>
   hWndParent;

   return S_OK;
}

STDMETHODIMP CMyCtrl::CWindowGetStyle(void)
{
   HWND hWnd = m_hWnd;
// <Snippet12>
   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::GetStyle() to retrieve the styles of the window

   CWindow myWindow;
   myWindow.Attach(hWnd);
   DWORD dwStyles = myWindow.GetStyle();
// </Snippet12>
   dwStyles;

   return S_OK;
}

STDMETHODIMP CMyCtrl::CWindowGetTopWindow(void)
{
   HWND hWnd = GetParent();
// <Snippet13>
   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::GetTopWindow() to get the top-level child window

   CWindow myWindow;
   myWindow.Attach(hWnd);
   HWND hWndFavoriteChild = myWindow.GetTopWindow();
// </Snippet13>
   hWndFavoriteChild;

   return S_OK;
}

STDMETHODIMP CMyCtrl::CWindowGetWindowDC(void)
{
   HWND hWnd = m_hWnd;
// <Snippet14>
   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::GetWindowDC() to retrieve the DC of the entire window

   CWindow myWindow;
   myWindow.Attach(hWnd);
   HDC hDC = myWindow.GetWindowDC();
// </Snippet14>
   hDC;

   return S_OK;
}

STDMETHODIMP CMyCtrl::CWindowGetWindowProcessID(void)
{
   HWND hWnd = m_hWnd;
// <Snippet15>
   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::GetWindowProcessID() to retrieve the id of the 
   //process that created the window

   CWindow myWindow;
   myWindow.Attach(hWnd);
   DWORD dwID = myWindow.GetWindowProcessID();
// </Snippet15>
   dwID;

   return S_OK;
}

STDMETHODIMP CMyCtrl::CWindowGetWindowThreadID(void)
{
   HWND hWnd = m_hWnd;
// <Snippet16>
   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::GetWindowThreadID() to retrieve the id of the thread 
   //that created the window

   CWindow myWindow;
   myWindow.Attach(hWnd);
   DWORD dwID = myWindow.GetWindowThreadID();
// </Snippet16>
   dwID;

   return S_OK;
}

STDMETHODIMP CMyCtrl::CWindowHideCaret(void)
{
   HWND hWndEdit = m_hWnd;
// <Snippet17>
   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::HideCaret() to hide the caret of the window owning 
   //the caret

   CWindow myWindow;
   myWindow.Attach(hWndEdit);
   myWindow.HideCaret();
// </Snippet17>

   return S_OK;
}

STDMETHODIMP CMyCtrl::CWindowInvalidate(void)
{
   HWND hWnd = m_hWnd;
// <Snippet18>
   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::Invalidate() to invalidate the entire client area

   CWindow myWindow;
   myWindow.Attach(hWnd);
   myWindow.Invalidate();
// </Snippet18>

   return S_OK;
}

STDMETHODIMP CMyCtrl::CWindowIsIconic(void)
{
   HWND hWnd = m_hWnd;
// <Snippet19>
   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::IsIconic() to determine if the window is minimized

   CWindow myWindow;
   myWindow.Attach(hWnd);
   BOOL bIconic = myWindow.IsIconic();
// </Snippet19>
   bIconic;

   return S_OK;
}

STDMETHODIMP CMyCtrl::CWindowIsWindow(void)
{
   HWND hWnd = m_hWnd;
// <Snippet20>
   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::IsWindow() to verify if the HWND corresponds 
   //to an existing window

   CWindow myWindow;
   myWindow.Attach(hWnd);
   BOOL bWindow = myWindow.IsWindow();
// </Snippet20>
   bWindow;

   return S_OK;
}

STDMETHODIMP CMyCtrl::CWindowIsWindowEnabled(void)
{
   HWND hWnd = m_hWnd;
// <Snippet21>
   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::IsWindowEnabled() to verify if the window is enabled 
   //for receiving input

   CWindow myWindow;
   myWindow.Attach(hWnd);
   BOOL bEnabled = myWindow.IsWindowEnabled();
// </Snippet21>
   bEnabled;

   return S_OK;
}

STDMETHODIMP CMyCtrl::CWindowIsWindowVisible(void)
{
   HWND hWnd = m_hWnd;
// <Snippet22>
   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::IsWindowVisible() to determine the visibility state 
   //of the window

   CWindow myWindow;
   myWindow.Attach(hWnd);
   BOOL bVisible = myWindow.IsWindowVisible();
// </Snippet22>
   bVisible;

   return S_OK;
}

STDMETHODIMP CMyCtrl::CWindowIsWindowUnicode(void)
{
   HWND hWnd = m_hWnd;
// <Snippet23>
   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::IsWindowUnicode() to determine if the window is a 
   //UNICODE window or an ANSI one.

   CWindow myWindow;
   myWindow.Attach(hWnd);
   BOOL bUnicode = myWindow.IsWindowUnicode();
// </Snippet23>
   bUnicode;

   return S_OK;
}

STDMETHODIMP CMyCtrl::CWindowMessageBox(void)
{
   HWND hWnd = m_hWnd;
// <Snippet24>
   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::MessageBox() to pop up a Windows message box

   CWindow myWindow;
   myWindow.Attach(hWnd);
   myWindow.MessageBox(_T("Hello World"));
// </Snippet24>

   return S_OK;
}

STDMETHODIMP CMyCtrl::CWindowModifyStyle(void)
{
   HWND hWnd = m_hWnd;
// <Snippet25>
   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::ModifyStyle() to add and remove the window styles

   CWindow myWindow;
   myWindow.Attach(hWnd);

   //The following line removes the WS_CLIPCHILDREN style from the 
   //window and adds the WS_CAPTION style to the window
   myWindow.ModifyStyle(WS_CLIPCHILDREN, WS_CAPTION);
// </Snippet25>

   return S_OK;
}

STDMETHODIMP CMyCtrl::CWindowModifyStyleEx(void)
{
   HWND hWnd = m_hWnd;
// <Snippet26>
   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::ModifyStyleEx() to add and remove the extended 
   //window styles

   CWindow myWindow;
   myWindow.Attach(hWnd);

   //The following line removes WS_EX_CONTEXTHELP extended style from 
   //the window and adds WS_EX_TOOLWINDOW extended style to the window 

   myWindow.ModifyStyleEx(WS_EX_CONTEXTHELP, WS_EX_TOOLWINDOW);
// </Snippet26>

   return S_OK;
}

STDMETHODIMP CMyCtrl::CWindowPostMessage(void)
{
   HWND hWnd = m_hWnd;
// <Snippet27>
   //The following example attaches an HWND to the CWindow object and 
   //posts a WM_PAINT message to the Window wrapped by the CWindow object 
   //using CWindow::PostMessage() with the default values of WPARAM and 
   //LPARAM

   CWindow myWindow;
   myWindow.Attach(hWnd);
   myWindow.PostMessage(WM_PAINT);
// </Snippet27>

   return S_OK;
}

STDMETHODIMP CMyCtrl::CWindowRedrawWindow(void)
{
   HWND hWnd = m_hWnd;
// <Snippet28>
   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::RedrawWindow() to update the entire window using the 
   //default arguments

   CWindow myWindow;
   myWindow.Attach(hWnd);
   BOOL bRedrawn = myWindow.RedrawWindow();
// </Snippet28>
   bRedrawn;

   return S_OK;
}

STDMETHODIMP CMyCtrl::CWindowSendMessage(void)
{
   HWND hWnd = m_hWnd;
// <Snippet29>
   // The following example attaches a HWND to the CWindow
   // object and sends a WM_PAINT message to the window
   // wrapped by CWindow object using CWindow::SendMessage.

   CWindow myWindow;
   myWindow.Attach(hWnd);   
   myWindow.SendMessage(WM_PAINT, 0L, 0L);
// </Snippet29>

   return S_OK;
}

STDMETHODIMP CMyCtrl::CWindowSetActiveWindow(void)
{
   HWND hWnd = m_hWnd;
// <Snippet30>
   // The following example attaches a HWND to the CWindow object
   // and sets the window as an active window by calling 
   // CWindow::SetActiveWindow which returns the HWND of the
   // previously active window.

   CWindow myWindow;
   myWindow.Attach(hWnd);   
   HWND hWndPrev = myWindow.SetActiveWindow();
// </Snippet30>
   hWndPrev;

   return S_OK;
}

STDMETHODIMP CMyCtrl::CWindowSetFocus(void)
{
   CreateAndShowMyDlg();
   HWND hWnd = m_MyDlg.m_hWnd;
// <Snippet31>
   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::SetFocus() to set the input focus

   CWindow myWindow;
   myWindow.Attach(hWnd);
   HWND hWndLeftFocus = myWindow.SetFocus();
// </Snippet31>
   hWndLeftFocus;

   return S_OK;
}

STDMETHODIMP CMyCtrl::CWindowSetParent(void)
{
   HWND hWndChild = m_hWnd;
   CreateAndShowMyDlg();
   HWND hWndParent = m_MyDlg.m_hWnd;
// <Snippet32>
   // The following example attaches a HWND to the CWindow object
   // and sets the hWndParent as the parent window of the 
   // window wrapped by CWindow object using CWindow::SetParent.

   CWindow myWindow;
   myWindow.Attach(hWndChild);
   HWND hWndPrevParent = myWindow.SetParent(hWndParent);
// </Snippet32>
   hWndPrevParent;

   return S_OK;
}

STDMETHODIMP CMyCtrl::CWindowSetRedraw(void)
{
   HWND hWnd = m_hWnd;
// <Snippet33>
   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::SetRedraw() to set and reset the redraw flag

   CWindow myWindow;
   myWindow.Attach(hWnd);
   myWindow.SetRedraw();      //sets the redraw flag to TRUE
   //
   //
   myWindow.SetRedraw(FALSE); //sets the redraw flag to FALSE
// </Snippet33>

   return S_OK;
}

STDMETHODIMP CMyCtrl::CWindowSetText(void)
{
   CreateAndShowMyDlg();
   HWND hWnd = m_MyDlg.m_hWnd;
// <Snippet34>
   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::SetWindowText() to set the new title-text of the 
   //window

   CWindow myWindow;
   myWindow.Attach(hWnd);
   myWindow.SetWindowText(_T("Hello ATL"));
// </Snippet34>

   return S_OK;
}

STDMETHODIMP CMyCtrl::CWindowShowCaret(void)
{
   CreateAndShowMyDlg();
   HWND hWnd = m_MyDlg.m_hWnd;
// <Snippet35>
   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::ShowCaret() to show the caret

   CWindow myWindow;
   myWindow.Attach(hWnd);
   myWindow.ShowCaret();
// </Snippet35>

   return S_OK;
}

STDMETHODIMP CMyCtrl::CWindowShowWindow(void)
{
   CreateAndShowMyDlg();
   HWND hWnd = m_MyDlg.m_hWnd;
// <Snippet36>
   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::ShowWindow() to show the window in its maximized state

   CWindow myWindow;
   myWindow.Attach(hWnd);
   myWindow.ShowWindow(SW_SHOWMAXIMIZED);
// </Snippet36>

   return S_OK;
}

STDMETHODIMP CMyCtrl::CWindowUpdateWindow(void)
{
   HWND hWnd = m_hWnd;
// <Snippet37>
   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::UpdateWindow() to update the window

   CWindow myWindow;
   myWindow.Attach(hWnd);
   BOOL bUpdated = myWindow.UpdateWindow();
// </Snippet37>
   bUpdated;

   return S_OK;
}

STDMETHODIMP CMyCtrl::CAxWindowCreateControl(void)
{
   TCHAR* lpszName = _T("NVC_ATL_Windowing.AtlEdit.1");
   HWND hWnd = GetParent();
   IStream* pStream = NULL;

// <Snippet42>
   AtlAxCreateControlEx(lpszName, hWnd, pStream, NULL, NULL, GUID_NULL, NULL);
// </Snippet42>

   return S_OK;
}

STDMETHODIMP CMyCtrl::TestCustomWndDlg(void)
{
   CMyCustomWnd mcw;
   mcw.Create(m_hWnd);
   mcw.DestroyWindow();

   CMyEdit me;
   me.Create(m_hWnd);
   me.DestroyWindow();

   CMyDialog md;
   md.Create(m_hWnd);
   md.DestroyWindow();

   CMyContainer mc;

   return S_OK;
}

STDMETHODIMP CMyCtrl::CreateCAxWindow(void)
{
// <Snippet69>
   AtlAxWinInit();
// </Snippet69>

// <Snippet70>
   CAxWindow wnd;
// </Snippet70>

// <Snippet71>
   RECT rect = { 0, 0, 100, 100 };
   wnd.Create(m_hWnd, rect, _T("MSCAL.Calendar"), WS_CHILD | WS_VISIBLE | 
      WS_CLIPSIBLINGS | WS_CLIPCHILDREN, WS_EX_CLIENTEDGE);
// </Snippet71>

   return S_OK;
}

STDMETHODIMP CMyCtrl::TestMyChainedWnd(void)
{
   CMyChainWnd myCtl;
   CChainedObj chainedObj;

// <Snippet89>
   myCtl.SetChainEntry(1313, &chainedObj);
// </Snippet89>

   RECT rect = { 0, 0, 100, 100 };
   myCtl.Create(m_hWnd, rect, _T("ChainedWnd"), WS_CHILD | WS_VISIBLE |
      WS_CLIPSIBLINGS | WS_CLIPCHILDREN);
   myCtl.ShowWindow(SW_SHOW);

   myCtl.DestroyWindow();

   return S_OK;
}

STDMETHODIMP CMyCtrl::TestMyComponent(void)
{
// <Snippet96>
// <Snippet91>
   LPUNKNOWN m_pSourceUnk;
   LPUNKNOWN m_pSinkUnk;
   DWORD m_dwCustCookie;

   // create source object
   HRESULT hr = CoCreateInstance (CLSID_MyComponent, NULL, CLSCTX_ALL, 
      IID_IUnknown, (LPVOID*)&m_pSourceUnk);
   ATLASSERT(SUCCEEDED(hr));

   // Create sink object.  CMySink is a CComObjectRootEx-derived class 
   // that implements the event interface methods.
   CComObject<CMySink>* pSinkClass;
   CComObject<CMySink>::CreateInstance(&pSinkClass);
   hr = pSinkClass->QueryInterface (IID_IUnknown, (LPVOID*)&m_pSinkUnk);
   ATLASSERT(SUCCEEDED(hr));

   hr = AtlAdvise (m_pSourceUnk, m_pSinkUnk, __uuidof(_IMyComponentEvents), &m_dwCustCookie);
   ATLASSERT(SUCCEEDED(hr));    
// </Snippet91>

   // do something
   CComBSTR bstrMsg(L"Hi there!");
   ((CMyComponent*)m_pSourceUnk)->Fire_ShowMyMsg(bstrMsg);

   hr = AtlUnadvise (m_pSourceUnk, __uuidof(_IMyComponentEvents), m_dwCustCookie);
   ATLASSERT(SUCCEEDED(hr));
// </Snippet96>

   return S_OK;
}

STDMETHODIMP CMyCtrl::TestEasySink(void)
{
   CComObject<CBuddy>* pBuddy;
   CComObject<CBuddy>::CreateInstance(&pBuddy);
   CComPtr<IUnknown> punkBuddy;
   pBuddy->QueryInterface(IID_IUnknown, (void**)&punkBuddy);
   CEasySink<54, CCBuddySink> sink;
   sink.EasyAdvise(punkBuddy);
   sink.EasyUnadvise(punkBuddy);

   return S_OK;
}

CMyCtrl* gpMyCtrl = NULL;

// <Snippet94>
// MyTimerProc is a callback function passed to SetTimer()
VOID CALLBACK MyTimerProc(HWND /*hwnd*/, UINT /*uMsg*/, UINT /*idEvent*/, 
   DWORD /*dwTime*/)
{
   LPDISPATCH pDisp = NULL;
   // gpMyCtrl is a global variable of type CMyCtrl*
   // _GetEntries() is a static function you get with BEGIN_COM_MAP()
   AtlInternalQueryInterface (gpMyCtrl, CMyCtrl::_GetEntries(), IID_IDispatch, 
      (LPVOID*)&pDisp);
   //...
   pDisp->Release ();
}
// </Snippet94>

STDMETHODIMP CMyCtrl::ToggleIntQITimer(BOOL bStart)
{
   if (bStart)
   {
      gpMyCtrl = this;
      m_uIntQITimer = SetTimer(m_uIntQITimer, 1000, &MyTimerProc);
   }
   else
   {
      KillTimer(m_uIntQITimer);   
   }

   return S_OK;
}

STDMETHODIMP CMyCtrl::TestMyClass(void)
{
   try
   {
      CMyClass mc;
   }
   catch (CAtlException* pe)
   {
      pe;
   }

   return S_OK;
}

STDMETHODIMP CMyCtrl::TestpAtlModule(void)
{
// <Snippet97>
   LONG lLocks = _pAtlModule->GetLockCount();
// </Snippet97>
   
   lLocks;

   return S_OK;
}
