#pragma once


// CHelloWnd frame

class CHelloWnd : public CMDIChildWnd
{
	DECLARE_DYNCREATE(CHelloWnd)
public:
	CHelloWnd();           // protected constructor used by dynamic creation
protected:
	virtual ~CHelloWnd();

protected:
	DECLARE_MESSAGE_MAP()
public:
   BOOL Create(LPCTSTR szTitle, LONG style, const RECT& rect, CMDIFrameWnd* parent);
};


