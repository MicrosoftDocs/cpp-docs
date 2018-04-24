#pragma once
#include "afxctl.h"

// MyAxCtrl.h : Declaration of the CMyAxCtrl ActiveX Control class.

// CMyAxCtrl : See MyAxCtrl.cpp for implementation.

class CMyAxCtrl : public COleControl
{
   DECLARE_DYNCREATE(CMyAxCtrl)

// Constructor
public:
   CMyAxCtrl();

// Overrides
public:
   virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
   virtual void DoPropExchange(CPropExchange* pPX);
   virtual void OnResetState();
   virtual DWORD GetControlFlags();

// Implementation
protected:
   ~CMyAxCtrl();

//	DECLARE_OLECREATE_EX(CMyAxCtrl)    // Class factory and guid
// <Snippet14>
   BEGIN_OLEFACTORY(CMyAxCtrl)
   END_OLEFACTORY(CMyAxCtrl)
// </Snippet14>

   DECLARE_OLETYPELIB(CMyAxCtrl)      // GetTypeInfo
   DECLARE_PROPPAGEIDS(CMyAxCtrl)     // Property page IDs
   DECLARE_OLECTLTYPE(CMyAxCtrl)		// Type name and misc status

// Message maps
   DECLARE_MESSAGE_MAP()

// Dispatch maps
   DECLARE_DISPATCH_MAP()

   afx_msg void AboutBox();
   afx_msg void TwiddleFont();

// Event maps
   DECLARE_EVENT_MAP()

public:
   BEGIN_INTERFACE_PART(DropTarget, IDropTarget)
      INIT_INTERFACE_PART(COleDropTarget, DropTarget)
      STDMETHOD(DragEnter)(LPDATAOBJECT, DWORD, POINTL, LPDWORD);
      STDMETHOD(DragOver)(DWORD, POINTL, LPDWORD);
      STDMETHOD(DragLeave)();
      STDMETHOD(Drop)(LPDATAOBJECT, DWORD, POINTL pt, LPDWORD);
   END_INTERFACE_PART(DropTarget)

   DECLARE_INTERFACE_MAP()

// Dispatch and event IDs
public:
   enum {
   };
public:
   virtual DWORD GetActivationPolicy();
public:
   virtual IDropTarget* GetWindowlessDropTarget();
public:
   CFontHolder* m_pMyFont;
public:
   virtual void OnFontChanged();
   CEdit m_MyEdit;
public:
   virtual void Serialize(CArchive& ar);
public:
   afx_msg int OnMouseActivate(CWnd* pDesktopWnd, UINT nHitTest, UINT message);
};

