// SubDialog.cpp : implementation file
//

#include "stdafx.h"
#include "MFCControlLadenDialog.h"
#include "SubDialog.h"


// CSubDialog dialog

IMPLEMENT_DYNAMIC(CSubDialog, CDialog)

CSubDialog::CSubDialog(CWnd* pParent /*=NULL*/)
   : CDialog(CSubDialog::IDD, pParent)
{

}

CSubDialog::~CSubDialog()
{
}

void CSubDialog::DoDataExchange(CDataExchange* pDX)
{
   CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSubDialog, CDialog)
END_MESSAGE_MAP()


// CSubDialog message handlers

// <Snippet3>
BOOL CSubDialog::OnInitDialog()
{
   CDialog::OnInitDialog();

   m_wndMyBtn.SubclassDlgItem(IDC_MYBTN, this);

   return TRUE;
}
// </Snippet3>