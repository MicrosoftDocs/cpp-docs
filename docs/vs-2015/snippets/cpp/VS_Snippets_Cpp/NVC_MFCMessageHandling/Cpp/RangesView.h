#pragma once



// CRangesView form view

class CRangesView : public CFormView
{
   DECLARE_DYNCREATE(CRangesView)

protected:
   CRangesView();           // protected constructor used by dynamic creation
   virtual ~CRangesView();

public:
   enum { IDD = IDD_RANGESVIEW };
#ifdef _DEBUG
   virtual void AssertValid() const;
#ifndef _WIN32_WCE
   virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
   virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

   DECLARE_MESSAGE_MAP()

// <Snippet7>
public:
   afx_msg void OnDoSomething(UINT nID);
// </Snippet7>

// <Snippet9>
public:
   afx_msg void OnZoom(UINT nID);
// </Snippet9>

public:
   afx_msg void OnButtonClicked(UINT nID);
};


