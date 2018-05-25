// MyWindow.cpp : Implementation of CMyWindow
#include "stdafx.h"
#include "MyWindow.h"


// CMyWindow

DWORD CMyWinTraitsClass::GetWndStyle(DWORD dwStyle)
{
   return dwStyle;
}

DWORD CMyWinTraitsClass::GetWndExStyle(DWORD dwExStyle)
{
   return dwExStyle;
}
LRESULT CMyDialog::OnBnClickedCancel(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/)
{
   // TODO: Add your control notification handler code here

   return 0;
}

LRESULT CMyDialog2::OnNMClickTree1(int /*idCtrl*/, LPNMHDR /*pNMHDR*/, BOOL& /*bHandled*/)
{
   // TODO: Add your control notification handler code here

   return 0;
}

// <Snippet137>
LRESULT CMyWindow::OnMsg(UINT nMsg, WPARAM wParam, LPARAM lParam, 
   BOOL& bHandled)
{
   MSG msg = { m_hWnd, nMsg, wParam, lParam, 0, { 0, 0 } };
   LRESULT lRet = SendMessage(m_hWndOther, WM_FORWARDMSG, 0, (LPARAM)&msg);
   if(lRet == 0)   // not handled
      bHandled = FALSE;
   return 0;
}
// </Snippet137>