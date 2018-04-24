#pragma once

// MyAxLocCtrl.h : Declaration of the CMyAxLocCtrl ActiveX Control class.


// CMyAxLocCtrl : See MyAxLocCtrl.cpp for implementation.

class CMyAxLocCtrl : public COleControl
{
   DECLARE_DYNCREATE(CMyAxLocCtrl)

// Constructor
public:
   CMyAxLocCtrl();

// Overrides
public:
   virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
   virtual void DoPropExchange(CPropExchange* pPX);
   virtual void OnResetState();

// Implementation
protected:
   ~CMyAxLocCtrl();

   DECLARE_OLECREATE_EX(CMyAxLocCtrl)    // Class factory and guid
   DECLARE_OLETYPELIB(CMyAxLocCtrl)      // GetTypeInfo
   DECLARE_PROPPAGEIDS(CMyAxLocCtrl)     // Property page IDs
   DECLARE_OLECTLTYPE(CMyAxLocCtrl)		// Type name and misc status

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

   HINSTANCE GetLocalizedResourceHandle(LCID lcid);
   HINSTANCE m_hResDll;
};

