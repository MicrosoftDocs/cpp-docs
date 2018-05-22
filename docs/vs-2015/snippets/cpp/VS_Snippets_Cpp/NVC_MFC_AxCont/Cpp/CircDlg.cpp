// CircDlg.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFC_AxCont.h"
#include "CircDlg.h"
#include "CCirc2.h"


// CCircDlg dialog

IMPLEMENT_DYNAMIC(CCircDlg, CDialog)

CCircDlg::CCircDlg(CWnd* pParent /*=NULL*/)
   : CDialog(CCircDlg::IDD, pParent)
{

}

CCircDlg::~CCircDlg()
{
}

void CCircDlg::DoDataExchange(CDataExchange* pDX)
{
   CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CCircDlg, CDialog)
END_MESSAGE_MAP()


// CCircDlg message handlers

// <Snippet18>
void CCircDlg::OnOK()
{
   UpdateData();   // Get the current data from the dialog box.
   CCirc2 circ;    // Create a wrapper class for the ActiveX object.
   COleException e;   // In case of errors

   // Create the ActiveX object. 
   // The name is the control's progid; look it up using OleView
   if (circ.CreateDispatch(_T("CIRC.CircCtrl.1"), &e)) 
   {
      // get the Caption property of your ActiveX object
      // get the result into m_strCaption
      m_strCaption = circ.GetCaption();
      UpdateData(FALSE);   // Display the string in the dialog box.
   }
   else   { // An error
      TCHAR buf[255];
      e.GetErrorMessage(buf, sizeof(buf) / sizeof(TCHAR));
      AfxMessageBox(buf);   // Display the error message.
   }
}
// </Snippet18>