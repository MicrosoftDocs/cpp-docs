#pragma once

// MyAxPicCtrl.h : Declaration of the CMyAxPicCtrl ActiveX Control class.


// CMyAxPicCtrl : See MyAxPicCtrl.cpp for implementation.

class CMyAxPicCtrl : public COleControl
{
	DECLARE_DYNCREATE(CMyAxPicCtrl)

// Constructor
public:
	CMyAxPicCtrl();

// Overrides
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// Implementation
protected:
	~CMyAxPicCtrl();

	DECLARE_OLECREATE_EX(CMyAxPicCtrl)    // Class factory and guid
	DECLARE_OLETYPELIB(CMyAxPicCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CMyAxPicCtrl)     // Property page IDs
	DECLARE_OLECTLTYPE(CMyAxPicCtrl)		// Type name and misc status

// Message maps
	DECLARE_MESSAGE_MAP()

// Dispatch maps
	DECLARE_DISPATCH_MAP()

// Event maps
	DECLARE_EVENT_MAP()

// <Snippet3>
   CPictureHolder    m_pic;
// </Snippet3>

// Dispatch and event IDs
public:
	enum {
      dispidControlPicture = 1
   };

protected:
// <Snippet4>
   IPictureDisp* GetControlPicture(void);
   void SetControlPicture(IPictureDisp* pVal);
// </Snippet4>
};

