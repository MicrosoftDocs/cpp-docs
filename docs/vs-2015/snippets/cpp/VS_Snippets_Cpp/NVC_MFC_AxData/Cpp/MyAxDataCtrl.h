#pragma once

// MyAxDataCtrl.h : Declaration of the CMyAxDataCtrl ActiveX Control class.


// CMyAxDataCtrl : See MyAxDataCtrl.cpp for implementation.

class CMyAxDataCtrl : public COleControl
{
	DECLARE_DYNCREATE(CMyAxDataCtrl)

// Constructor
public:
	CMyAxDataCtrl();

// Overrides
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// Implementation
protected:
	~CMyAxDataCtrl();

	DECLARE_OLECREATE_EX(CMyAxDataCtrl)    // Class factory and guid
	DECLARE_OLETYPELIB(CMyAxDataCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CMyAxDataCtrl)     // Property page IDs
	DECLARE_OLECTLTYPE(CMyAxDataCtrl)		// Type name and misc status

	// Subclassed control support
	BOOL IsSubclassedControl();
	LRESULT OnOcmCommand(WPARAM wParam, LPARAM lParam);

// Message maps
	DECLARE_MESSAGE_MAP()

// Dispatch maps
	DECLARE_DISPATCH_MAP()

// Event maps
	DECLARE_EVENT_MAP()

// Dispatch and event IDs
public:
	enum {
      dispidMyProp = 1
   };
protected:
   SHORT GetMyProp(void);
   void SetMyProp(SHORT newVal);

public:
// <Snippet4>
   CString m_strText;
   short m_nMyNum;
// </Snippet4>
};

