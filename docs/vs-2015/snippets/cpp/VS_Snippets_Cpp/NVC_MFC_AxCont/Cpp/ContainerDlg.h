#pragma once

// <Snippet1>
#include "circ.h"
// </Snippet1>


// CContainerDlg dialog

// <Snippet4>
class CContainerDlg : public CDialog
{
   DECLARE_DYNAMIC(CContainerDlg)

public:
   CContainerDlg(CWnd* pParent = NULL);   // standard constructor
   virtual ~CContainerDlg();

   virtual void OnFinalRelease();

// Dialog Data
   enum { IDD = IDD_CONTAINER_DIALOG };

protected:
   virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

   DECLARE_MESSAGE_MAP()
   DECLARE_DISPATCH_MAP()
   DECLARE_INTERFACE_MAP()
public:
   CCirc m_circctl;
// </Snippet4>
protected:
   DECLARE_EVENTSINK_MAP()
public:
   virtual BOOL OnInitDialog();
   BOOL OnClickInCircctrl1(OLE_XPOS_PIXELS nX, OLE_YPOS_PIXELS nY);
public:
   afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
// <Snippet5>
};
// </Snippet5>