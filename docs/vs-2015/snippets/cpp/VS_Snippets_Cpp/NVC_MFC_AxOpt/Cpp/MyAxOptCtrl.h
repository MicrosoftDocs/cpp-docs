#pragma once

// MyAxOptCtrl.h : Declaration of the CMyAxOptCtrl ActiveX Control class.


// CMyAxOptCtrl : See MyAxOptCtrl.cpp for implementation.

// <Snippet16>
class CMyAxOptCtrl : public COleControl
{
// </Snippet16>
   DECLARE_DYNCREATE(CMyAxOptCtrl)

// Constructor
public:
   CMyAxOptCtrl();

// Overrides
public:
   virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
   virtual void DoPropExchange(CPropExchange* pPX);
   virtual void OnResetState();
   virtual DWORD GetControlFlags();

// Implementation
protected:
   ~CMyAxOptCtrl();

   DECLARE_OLECREATE_EX(CMyAxOptCtrl)    // Class factory and guid
   DECLARE_OLETYPELIB(CMyAxOptCtrl)      // GetTypeInfo
   DECLARE_PROPPAGEIDS(CMyAxOptCtrl)     // Property page IDs
   DECLARE_OLECTLTYPE(CMyAxOptCtrl)		// Type name and misc status

// Message maps
   DECLARE_MESSAGE_MAP()

// Dispatch maps
   DECLARE_DISPATCH_MAP()

// Event maps
   DECLARE_EVENT_MAP()

// Dispatch and event IDs
public:
   enum {
      dispidStringProp = 4,
      dispidColorProp = 3,
      dispidShortProp = 2,
      dispidBoolProp = 1
   };
protected:
   void OnBoolPropChanged(void);
   BOOL m_BoolProp;
   void OnShortPropChanged(void);
   SHORT m_ShortProp;
   void OnColorPropChanged(void);
   OLE_COLOR m_ColorProp;
   void OnStringPropChanged(void);
   CString m_StringProp;
public:
   virtual void Serialize(CArchive& ar);
   virtual void AlternateSerialize(CArchive& ar);
public:
   virtual IDropTarget* GetWindowlessDropTarget();
   COleDropTarget m_DropTarget;
public:
   virtual DWORD GetActivationPolicy();

public:
   virtual void OnForeColorChanged();
public:
   virtual void OnBackColorChanged();
// <Snippet17>
   CPen m_pen;
   CBrush m_brush;
};
// </Snippet17>
