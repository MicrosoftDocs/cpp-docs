#pragma once


// CMyWnd3

// <Snippet7>
class CMyWnd3 : public CWnd
{
   DECLARE_DYNAMIC(CMyWnd3)

public:
   CMyWnd3();
   virtual ~CMyWnd3();

protected:
   DECLARE_MESSAGE_MAP()

    //{{AFX_MSG(CMyWnd)
    afx_msg LRESULT OnFind(WPARAM wParam, LPARAM lParam);
    //}}AFX_MSG
};
// </Snippet7>

// <Snippet8>
static UINT NEAR WM_FIND = RegisterWindowMessage(_T("COMMDLG_FIND"));
// </Snippet8>

