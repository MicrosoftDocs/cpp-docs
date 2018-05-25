#pragma once

#ifdef _WIN32_WCE
#error "CMDIChildWnd is not supported for Windows CE."
#endif 

class CMyListBox : public CListBox
{
   DECLARE_DYNCREATE(CMyListBox)
};

class CMySplitterWnd : public CSplitterWnd
{
public:
   CMySplitterWnd();

   COLORREF m_BkColor;
   CBrush m_hbrListBoxBkgnd;

protected:
	DECLARE_MESSAGE_MAP()
public:
   afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
public:
   afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
};


// CSplitChildFrm frame with splitter

class CSplitChildFrm : public CMDIChildWnd
{
	DECLARE_DYNCREATE(CSplitChildFrm)
protected:
	CSplitChildFrm();           // protected constructor used by dynamic creation
	virtual ~CSplitChildFrm();

	CMySplitterWnd m_wndSplitter;

protected:
	virtual BOOL OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext);

	DECLARE_MESSAGE_MAP()
public:
   afx_msg void OnSizing(UINT fwSide, LPRECT pRect);
};


