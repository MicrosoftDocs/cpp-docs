#pragma once

// MyAxFontCtrl.h : Declaration of the CMyAxFontCtrl ActiveX Control class.


// CMyAxFontCtrl : See MyAxFontCtrl.cpp for implementation.

class CMyAxFontCtrl : public COleControl
{
	DECLARE_DYNCREATE(CMyAxFontCtrl)

// Constructor
public:
	CMyAxFontCtrl();

// Overrides
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// Implementation
protected:
	~CMyAxFontCtrl();

	DECLARE_OLECREATE_EX(CMyAxFontCtrl)    // Class factory and guid
	DECLARE_OLETYPELIB(CMyAxFontCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CMyAxFontCtrl)     // Property page IDs
	DECLARE_OLECTLTYPE(CMyAxFontCtrl)		// Type name and misc status

// Message maps
	DECLARE_MESSAGE_MAP()

// Dispatch maps
	DECLARE_DISPATCH_MAP()

// Event maps
	DECLARE_EVENT_MAP()

// Dispatch and event IDs
public:
	enum {
      dispidHeadingFont = 1
   };
protected:
   IDispatch* GetHeadingFont(void);
   void SetHeadingFont(IDispatch* pVal);

// <Snippet8>
protected:
   CFontHolder m_fontHeading;
// </Snippet8>

// <Snippet19>
protected:
   BEGIN_INTERFACE_PART(HeadingFontNotify, IPropertyNotifySink)
   INIT_INTERFACE_PART(CMyAxFontCtrl, HeadingFontNotify)
      STDMETHOD(OnRequestEdit)(DISPID);
      STDMETHOD(OnChanged)(DISPID);
   END_INTERFACE_PART(HeadingFontNotify)
// </Snippet19>
};

