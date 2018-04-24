#pragma once


// CMyClass

class CMyClass : public CWnd
{
   DECLARE_DYNAMIC(CMyClass)

public:
   CMyClass();
   virtual ~CMyClass();

protected:
   DECLARE_MESSAGE_MAP()

// <Snippet10>
   afx_msg void OnMyCommand();
   afx_msg void OnUpdateMyCommand(CCmdUI* pCmdUI);
   afx_msg BOOL OnComplexCommand(UINT nID);
// </Snippet10>
};


