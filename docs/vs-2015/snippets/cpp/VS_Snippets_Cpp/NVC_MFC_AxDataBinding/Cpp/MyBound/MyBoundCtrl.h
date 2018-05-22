#pragma once

// MyBoundCtrl.h : Declaration of the CMyBoundCtrl ActiveX Control class.


// CMyBoundCtrl : See MyBoundCtrl.cpp for implementation.

class CMyBoundCtrl : public COleControl
{
	DECLARE_DYNCREATE(CMyBoundCtrl)

// Constructor
public:
	CMyBoundCtrl();

// Overrides
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// Implementation
protected:
	~CMyBoundCtrl();

	DECLARE_OLECREATE_EX(CMyBoundCtrl)    // Class factory and guid
	DECLARE_OLETYPELIB(CMyBoundCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CMyBoundCtrl)     // Property page IDs
	DECLARE_OLECTLTYPE(CMyBoundCtrl)		// Type name and misc status

   CString m_strMyBoundProp;

// Message maps
	DECLARE_MESSAGE_MAP()

// Dispatch maps
	DECLARE_DISPATCH_MAP()

// Event maps
	DECLARE_EVENT_MAP()

// Dispatch and event IDs
public:
	enum {
      dispidMyBoundProp = 1
   };
protected:
   BSTR GetMyBoundProp(void);
   void SetMyBoundProp(LPCTSTR newVal);
};

