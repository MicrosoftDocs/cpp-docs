#pragma once

// MyAxUICtrl.h : Declaration of the CMyAxUICtrl ActiveX Control class.


// CMyAxUICtrl : See MyAxUICtrl.cpp for implementation.

class CMyAxUICtrl : public COleControl
{
   DECLARE_DYNCREATE(CMyAxUICtrl)

// Constructor
public:
   CMyAxUICtrl();

// Overrides
public:
   virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
   virtual void DoPropExchange(CPropExchange* pPX);
   virtual void OnResetState();

// Implementation
protected:
   ~CMyAxUICtrl();

// <Snippet39>
   BEGIN_OLEFACTORY(CMyAxUICtrl)        // Class factory and guid
      virtual BOOL VerifyUserLicense();
      virtual BOOL GetLicenseKey(DWORD, BSTR FAR*);
   END_OLEFACTORY(CMyAxUICtrl)
// </Snippet39>

   DECLARE_OLETYPELIB(CMyAxUICtrl)      // GetTypeInfo
   DECLARE_PROPPAGEIDS(CMyAxUICtrl)     // Property page IDs
   DECLARE_OLECTLTYPE(CMyAxUICtrl)		// Type name and misc status

// Message maps
   DECLARE_MESSAGE_MAP()

// Dispatch maps
// <Snippet13>
   DECLARE_DISPATCH_MAP()
// </Snippet13>

// Event maps
// <Snippet2>
   DECLARE_EVENT_MAP()
// </Snippet2>

// Dispatch and event IDs
public:
   enum {
      dispidArray = 4,
      dispidMyProperty = 3,
      dispidCircleOffset = 2,
      dispidPtInCircle = 1L,
      eventidClickIn = 1L
   };
protected:

// <Snippet7>
   void FireClickIn(OLE_XPOS_PIXELS xCoord, OLE_YPOS_PIXELS yCoord)
   {
      FireEvent(eventidClickIn, EVENT_PARAM(VTS_XPOS_PIXELS VTS_YPOS_PIXELS), xCoord, yCoord);
   }
// </Snippet7>
public:
   afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
// <Snippet12>
   VARIANT_BOOL InCircle(CPoint& point);
// </Snippet12>
protected:
// <Snippet18>
   VARIANT_BOOL PtInCircle(OLE_XPOS_PIXELS xCoord, OLE_YPOS_PIXELS yCoord);
// </Snippet18>
public:
   afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
protected:
// <Snippet25>
   SHORT GetCircleOffset(void);
   void SetCircleOffset(SHORT newVal);
// </Snippet25>
   SHORT GetMyProperty(void);
   void SetMyProperty(SHORT newVal);
   bool m_bReadOnlyMode;
   SHORT m_iPropVal;
// <Snippet35>
   SHORT GetArray(SHORT row, SHORT column);
   void SetArray(SHORT row, SHORT column, SHORT newVal);
// </Snippet35>
public:
   virtual BOOL PreTranslateMessage(MSG* pMsg);
};

