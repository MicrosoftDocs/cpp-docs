#pragma once


// CMyWnd2

class CMyWnd2 : public CWnd
{
   DECLARE_DYNAMIC(CMyWnd2)

public:
   CMyWnd2();
   virtual ~CMyWnd2();

protected:
   DECLARE_MESSAGE_MAP()

// <Snippet3>
   // inside the class declaration
    afx_msg LRESULT OnMyMessage(WPARAM wParam, LPARAM lParam);
// </Snippet3>
};

// <Snippet4>
#define WM_MYMESSAGE (WM_USER + 100)
// </Snippet4>


