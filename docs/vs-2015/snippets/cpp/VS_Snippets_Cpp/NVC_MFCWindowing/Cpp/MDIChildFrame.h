#pragma once


// CMdiChildFrame frame

class CMdiChildFrame : public CMDIChildWnd
{
	DECLARE_DYNCREATE(CMdiChildFrame)
protected:
	CMdiChildFrame();           // protected constructor used by dynamic creation
	virtual ~CMdiChildFrame();

protected:
	DECLARE_MESSAGE_MAP()
public:
   afx_msg void OnActionArrangeIconicWindows();
protected:
   virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
};


