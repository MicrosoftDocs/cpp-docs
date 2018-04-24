#pragma once

#ifdef _WIN32_WCE
#error "CMDIChildWnd is not supported for Windows CE."
#endif 

// CMyChildFrame frame with splitter

class CMyChildFrame : public CMDIChildWnd
{
	DECLARE_DYNCREATE(CMyChildFrame)
protected:
	CMyChildFrame();           // protected constructor used by dynamic creation
	virtual ~CMyChildFrame();

	CSplitterWnd m_wndSplitter;

protected:
	virtual BOOL OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext);

	DECLARE_MESSAGE_MAP()
};


