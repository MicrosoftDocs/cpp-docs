#pragma once

// MFCActiveXControlCtrl.h : Declaration of the CMFCActiveXControlCtrl ActiveX Control class.


// CMFCActiveXControlCtrl : See MFCActiveXControlCtrl.cpp for implementation.

class CMFCActiveXControlCtrl : public COleControl
{
   DECLARE_DYNCREATE(CMFCActiveXControlCtrl)

// Constructor
public:
   CMFCActiveXControlCtrl();

// Overrides
public:
   virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
   virtual void DoPropExchange(CPropExchange* pPX);
   virtual void OnResetState();
   virtual DWORD GetControlFlags();

// Implementation
protected:
   ~CMFCActiveXControlCtrl();

   DECLARE_OLECREATE_EX(CMFCActiveXControlCtrl)    // Class factory and guid
   DECLARE_OLETYPELIB(CMFCActiveXControlCtrl)      // GetTypeInfo
   DECLARE_PROPPAGEIDS(CMFCActiveXControlCtrl)     // Property page IDs
   DECLARE_OLECTLTYPE(CMFCActiveXControlCtrl)		// Type name and misc status

// <Snippet3>
   CMyDataPathProperty EditControlText;
// </Snippet3>

// Message maps
   DECLARE_MESSAGE_MAP()

// Dispatch maps
   DECLARE_DISPATCH_MAP()

   afx_msg void AboutBox();

// Event maps
   DECLARE_EVENT_MAP()

// Dispatch and event IDs
public:
   enum {
      dispidItem = 3,
      dispidThingy = 2,
      dispidEditControlText = 1
   };
protected:
   BSTR GetEditControlText(void);
   void SetEditControlText(LPCTSTR newVal);

// <Snippet9>
   SHORT GetArray(SHORT row, SHORT column);
   void SetArray(SHORT row, SHORT column, SHORT newVal);
// </Snippet9>

// <Snippet11>
   IDispatch* GetItem(SHORT index1, SHORT index2, SHORT index3);
   void SetItem(SHORT index1, SHORT index2, SHORT index3, IDispatch* pVal);
// </Snippet11>
};

