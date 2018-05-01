// circctl.h : Declaration of the CCircCtrl OLE control class.
//
// This is a part of the Microsoft Foundation Classes C++ library.
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
// This source code is only intended as a supplement to the
// Microsoft Foundation Classes Reference and related
// electronic documentation provided with the library.
// See these sources for detailed information regarding the
// Microsoft Foundation Classes product.

/////////////////////////////////////////////////////////////////////////////
// CCircCtrl : See circctl.cpp for implementation.

class CCircCtrl : public COleControl
{
	DECLARE_DYNCREATE(CCircCtrl)

// Constructor
public:
	CCircCtrl();

// Overrides

	// Drawing function
	virtual void OnDraw(
				CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);

	// Persistence
	virtual void DoPropExchange(CPropExchange* pPX);

	// Reset control state
	virtual void OnResetState();

	virtual BOOL OnMapPropertyToPage(DISPID dispid, LPCLSID lpclsid,
		BOOL* pbPageOptional);

// Implementation
protected:
	~CCircCtrl();
	void GetDrawRect(CRect* rc);
	short m_circleOffset;
	BOOL InBounds(short nOffset);
	BOOL InCircle(CPoint& point);
	void FlashColor(CDC* pdc);
	CString m_note;

	DECLARE_OLECREATE_EX(CCircCtrl)    // Class factory and guid
	DECLARE_OLETYPELIB(CCircCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CCircCtrl)     // Property page IDs
	DECLARE_OLECTLTYPE(CCircCtrl)      // Type name and misc status

// Message maps
	//{{AFX_MSG(CCircCtrl)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

// Dispatch maps
	//{{AFX_DISPATCH(CCircCtrl)
	BOOL m_circleShape;
	afx_msg void OnCircleShapeChanged();
	OLE_COLOR m_flashColor;
	afx_msg void OnFlashColorChanged();
	afx_msg short GetCircleOffset();
	afx_msg void SetCircleOffset(short nNewValue);
	afx_msg BSTR GetNote();
	afx_msg void SetNote(LPCTSTR lpszNewValue);
	//}}AFX_DISPATCH
	DECLARE_DISPATCH_MAP()

	afx_msg void AboutBox();

// Event maps
	//{{AFX_EVENT(CCircCtrl)
	void FireClickIn(OLE_XPOS_PIXELS x, OLE_YPOS_PIXELS y)
		{FireEvent(eventidClickIn,EVENT_PARAM(VTS_XPOS_PIXELS  VTS_YPOS_PIXELS), x, y);}
	void FireClickOut()
		{FireEvent(eventidClickOut,EVENT_PARAM(VTS_NONE));}
	//}}AFX_EVENT
	DECLARE_EVENT_MAP()

// Dispatch and event IDs
public:
	enum {
	//{{AFX_DISP_ID(CCircCtrl)
	dispidCircleShape = 1L,
	dispidCircleOffset = 3L,
	dispidNote = 4L,
	dispidFlashColor = 2L,
	eventidClickIn = 1L,
	eventidClickOut = 2L,
	//}}AFX_DISP_ID
	};
};
