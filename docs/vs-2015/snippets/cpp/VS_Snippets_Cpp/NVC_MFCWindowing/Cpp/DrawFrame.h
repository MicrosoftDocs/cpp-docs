#pragma once


// CDrawFrame frame

class CDrawFrame : public CMDIChildWnd
{
	DECLARE_DYNCREATE(CDrawFrame)
protected:
	CDrawFrame();           // protected constructor used by dynamic creation
	virtual ~CDrawFrame();

protected:
	DECLARE_MESSAGE_MAP()
};


