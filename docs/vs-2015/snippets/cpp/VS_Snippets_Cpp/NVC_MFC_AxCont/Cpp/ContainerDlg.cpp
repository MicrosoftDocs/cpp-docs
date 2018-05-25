// ContainerDlg.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFC_AxCont.h"
#include "ContainerDlg.h"


// CContainerDlg dialog

IMPLEMENT_DYNAMIC(CContainerDlg, CDialog)

CContainerDlg::CContainerDlg(CWnd* pParent /*=NULL*/)
   : CDialog(CContainerDlg::IDD, pParent)
{

   EnableAutomation();

}

CContainerDlg::~CContainerDlg()
{
}

void CContainerDlg::OnFinalRelease()
{
   // When the last reference for an automation object is released
   // OnFinalRelease is called.  The base class will automatically
   // deletes the object.  Add additional cleanup required for your
   // object before calling the base class.

   CDialog::OnFinalRelease();
}

void CContainerDlg::DoDataExchange(CDataExchange* pDX)
{
   CDialog::DoDataExchange(pDX);
// <Snippet6>
   DDX_Control(pDX, IDC_CIRCCTRL1, m_circctl);
// </Snippet6>
}


BEGIN_MESSAGE_MAP(CContainerDlg, CDialog)
   ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

BEGIN_DISPATCH_MAP(CContainerDlg, CDialog)
END_DISPATCH_MAP()

// Note: we add support for IID_IContainerDlg to support typesafe binding
//  from VBA.  This IID must match the GUID that is attached to the 
//  dispinterface in the .IDL file.

// {5F2BA27C-BF72-40BC-BCE3-3ABBDC3C50D8}
static const IID IID_IContainerDlg =
{ 0x5F2BA27C, 0xBF72, 0x40BC, { 0xBC, 0xE3, 0x3A, 0xBB, 0xDC, 0x3C, 0x50, 0xD8 } };

BEGIN_INTERFACE_MAP(CContainerDlg, CDialog)
   INTERFACE_PART(CContainerDlg, IID_IContainerDlg, Dispatch)
END_INTERFACE_MAP()

// <Snippet10>
// <Snippet8>
BEGIN_EVENTSINK_MAP(CContainerDlg, CDialog)
// </Snippet8>
   ON_EVENT(CContainerDlg, IDC_CIRCCTRL1, 1 /* ClickIn */, OnClickInCircctrl1, 
      VTS_I4 VTS_I4)
// <Snippet9>
END_EVENTSINK_MAP()
// </Snippet9>
// </Snippet10>

// CContainerDlg message handlers

// <Snippet7>
BOOL CContainerDlg::OnInitDialog()
{
   CDialog::OnInitDialog();

   m_circctl.SetCaption(_T("Circ 2 Control"));
   if(!m_circctl.GetCircleShape())
      m_circctl.SetCircleShape(TRUE);

   return TRUE;  // return TRUE unless you set the focus to a control
}
// </Snippet7>

// <Snippet11>
BOOL CContainerDlg::OnClickInCircctrl1(OLE_XPOS_PIXELS nX, OLE_YPOS_PIXELS nY)
{
   // use nX and nY here
   TRACE(_T("nX = %d, nY = %d\n"), nX, nY);
   return TRUE;
}
// </Snippet11>


void CContainerDlg::OnLButtonDown(UINT nFlags, CPoint point)
{
// <Snippet19>
   CCirc myCirc;
   myCirc.SubclassDlgItem(IDC_CIRCCTRL2, this);
   // ... use myCirc ...
   myCirc.UnsubclassWindow();
// </Snippet19>

   CDialog::OnLButtonDown(nFlags, point);
}
