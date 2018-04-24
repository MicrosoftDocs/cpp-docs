#pragma once

// MyAxSubCtrl.h : Declaration of the CMyAxSubCtrl ActiveX Control class.


// CMyAxSubCtrl : See MyAxSubCtrl.cpp for implementation.

// <Snippet5>
class CMyAxSubCtrl : public COleControl
{
// </Snippet5>
	DECLARE_DYNCREATE(CMyAxSubCtrl)

// Constructor
public:
	CMyAxSubCtrl();

// Overrides
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
// <Snippet1>
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	BOOL IsSubclassedControl();
// </Snippet1>
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// Implementation
protected:
	~CMyAxSubCtrl();

	DECLARE_OLECREATE_EX(CMyAxSubCtrl)    // Class factory and guid
	DECLARE_OLETYPELIB(CMyAxSubCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CMyAxSubCtrl)     // Property page IDs
	DECLARE_OLECTLTYPE(CMyAxSubCtrl)		// Type name and misc status

// Message maps
	DECLARE_MESSAGE_MAP()

// Dispatch maps
	DECLARE_DISPATCH_MAP()

// Event maps
	DECLARE_EVENT_MAP()

// Dispatch and event IDs
public:
	enum {
	};

// <Snippet6>
protected:
	LRESULT OnOcmCommand(WPARAM wParam, LPARAM lParam);
};
// </Snippet6>
