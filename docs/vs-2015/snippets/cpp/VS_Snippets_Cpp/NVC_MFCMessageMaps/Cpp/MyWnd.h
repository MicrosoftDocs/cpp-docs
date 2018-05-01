#pragma once


// CMyWnd1

// <Snippet1>
class CMyWnd1 : public CWnd
{
   DECLARE_DYNAMIC(CMyWnd1)

public:
   CMyWnd1();
   virtual ~CMyWnd1();

protected:
   DECLARE_MESSAGE_MAP()
public:
   //{{AFX_MSG(CMyWnd1)
   afx_msg void OnPaint();
   //}}AFX_MSG
};
// </Snippet1>

