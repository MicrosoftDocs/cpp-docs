#pragma once

// MyAxSerCtrl.h : Declaration of the CMyAxSerCtrl ActiveX Control class.


// CMyAxSerCtrl : See MyAxSerCtrl.cpp for implementation.

class CMyAxSerCtrl : public COleControl
{
	DECLARE_DYNCREATE(CMyAxSerCtrl)

// Constructor
public:
	CMyAxSerCtrl();

// Overrides
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// Implementation
protected:
	~CMyAxSerCtrl();

	DECLARE_OLECREATE_EX(CMyAxSerCtrl)    // Class factory and guid
	DECLARE_OLETYPELIB(CMyAxSerCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CMyAxSerCtrl)     // Property page IDs
	DECLARE_OLECTLTYPE(CMyAxSerCtrl)		// Type name and misc status

// Message maps
	DECLARE_MESSAGE_MAP()

// Dispatch maps
	DECLARE_DISPATCH_MAP()

// Event maps
	DECLARE_EVENT_MAP()

// Dispatch and event IDs
public:
	enum {
      dispidOriginalDate = 3,
      dispidReleaseDate = 2,
      dispidCircleShape = 1
   };
protected:
   void OnCircleShapeChanged(void);
   BOOL m_bCircleShape;
   void OnReleaseDateChanged(void);
   LONG m_ReleaseDate;
   void OnOriginalDateChanged(void);
   LONG m_OriginalDate;
};

