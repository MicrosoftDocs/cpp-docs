// MyDlg.h : Declaration of the CMyDlg

#pragma once

#include "resource.h"       // main symbols

#include <atlhost.h>


// CMyDlg

// <Snippet92>
class CMyDlg : 
   public CAxDialogImpl<CMyDlg>
{
public:
BEGIN_MSG_MAP(CMyDlg)
   MESSAGE_HANDLER(WM_INITDIALOG, OnInitDialog)
   COMMAND_HANDLER(IDOK, BN_CLICKED, OnClickedOK)
   COMMAND_HANDLER(IDCANCEL, BN_CLICKED, OnClickedCancel)
   CHAIN_MSG_MAP(CAxDialogImpl<CMyDlg>)
END_MSG_MAP()

   LRESULT OnInitDialog(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled)
   {
      CAxDialogImpl<CMyDlg>::OnInitDialog(uMsg, wParam, lParam, bHandled);

      AtlAdviseSinkMap(this, TRUE);

      bHandled = TRUE;
      return 1;  // Let the system set the focus
   }

   // Remainder of class declaration omitted.
// </Snippet92>

   BEGIN_SINK_MAP(CMyDlg)
   END_SINK_MAP()

   CMyDlg()
   {
   }

   ~CMyDlg()
   {
   }

// <Snippet41>
   enum { IDD = IDD_MYDLG };
// </Snippet41>

   LRESULT OnClickedOK(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled)
   {
      UNREFERENCED_PARAMETER(wNotifyCode);
      UNREFERENCED_PARAMETER(hWndCtl);
      UNREFERENCED_PARAMETER(bHandled);
      EndDialog(wID);
      return 0;
   }

   LRESULT OnClickedCancel(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled)
   {
      UNREFERENCED_PARAMETER(wNotifyCode);
      UNREFERENCED_PARAMETER(hWndCtl);
      UNREFERENCED_PARAMETER(bHandled);
      EndDialog(wID);
      return 0;
   }
};


