// TestDialog.cpp : implementation file
//

#include "stdafx.h"
#include "MFCControlLadenDialog.h"
#include "TestDialog.h"


// CTestDialog dialog

IMPLEMENT_DYNAMIC(CTestDialog, CDialog)

CTestDialog::CTestDialog(CWnd* pParent /*=NULL*/)
   : CDialog(CTestDialog::IDD, pParent)
   , m_bVal(FALSE)
   , m_strName(_T(""))
{

}

CTestDialog::~CTestDialog()
{
}

// <Snippet49>
void CTestDialog::DoDataExchange(CDataExchange* pDX)
{
   CDialog::DoDataExchange(pDX);
   DDX_Check(pDX, IDC_MY_CHECKBOX, m_bVal);
   DDX_Text(pDX, IDC_MY_TEXTBOX, m_strName);
   DDV_MaxChars(pDX, m_strName, 20);
}
// </Snippet49>

BEGIN_MESSAGE_MAP(CTestDialog, CDialog)
END_MESSAGE_MAP()


// CTestDialog message handlers

BOOL CTestDialog::OnInitDialog()
{
   CDialog::OnInitDialog();

// <Snippet70>
   CYourDataExchange dx(this, FALSE);
   try
   { 
      DoDataExchange(&dx); 
   } 
   catch(CUserException* pe) 
   { 
      // some part of the exchange went wrong 
      // but the user has already been notified 
      pe->Delete();
   } 
// </Snippet70>

   return TRUE;  // return TRUE unless you set the focus to a control
}