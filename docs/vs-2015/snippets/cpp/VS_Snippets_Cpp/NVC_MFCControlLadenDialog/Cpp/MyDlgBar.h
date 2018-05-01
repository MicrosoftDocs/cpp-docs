#pragma once


// CMyDlgBar

class CMyDlgBar : public CDialogBar
{
   DECLARE_DYNAMIC(CMyDlgBar)

public:
   CMyDlgBar();
   virtual ~CMyDlgBar();

protected:
   DECLARE_MESSAGE_MAP()
public:
   afx_msg BOOL OnEraseBkgnd(CDC* pDC);
public:
   afx_msg void OnMove(int x, int y);
};


