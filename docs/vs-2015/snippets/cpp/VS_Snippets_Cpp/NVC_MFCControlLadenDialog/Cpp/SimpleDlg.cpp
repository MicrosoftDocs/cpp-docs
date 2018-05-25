// SimpleDlg.cpp : implementation file
//

#include "stdafx.h"
#include "MFCControlLadenDialog.h"
#include "MFCControlLadenDialogDlg.h"
#include "SimpleDlg.h"

// CSimpleDlg dialog

IMPLEMENT_DYNAMIC(CSimpleDlg, CDialog)

CSimpleDlg::CSimpleDlg(CWnd* pParent /*=NULL*/)
   : CDialog(CSimpleDlg::IDD, pParent)
   , m_nMyValue(0)
   , m_nPrevValue(0)
   , m_pMyString(NULL)
{

}

CSimpleDlg::~CSimpleDlg()
{
   delete m_pMyString;
}

void CSimpleDlg::DoDataExchange(CDataExchange* pDX)
{
   CDialog::DoDataExchange(pDX);
   DDX_Control(pDX, IDC_SIMPLEEDIT, m_cMyEdit);
   DDX_Control(pDX, IDC_SIMPLELIST, m_cMyList);
   DDX_Text(pDX, IDC_SIMPLEEDIT, m_nMyValue);
}


BEGIN_MESSAGE_MAP(CSimpleDlg, CDialog)
   ON_WM_RBUTTONUP()
   ON_EN_CHANGE(IDC_SIMPLEEDIT, &CSimpleDlg::OnEnChangeSimpleedit)
END_MESSAGE_MAP()


// CSimpleDlg message handlers

// <Snippet65>
void CSimpleDlg::OnRButtonUp(UINT nFlags, CPoint point)
{
   UNREFERENCED_PARAMETER(nFlags);
   // Do something

   int nRet = point.x; // Just any value would do!
   EndDialog(nRet); // This value is returned by DoModal!

   // Do something

   return; // Dialog closed and DoModal returns only here!
}
// </Snippet65>

// <Snippet66>
void CSimpleDlg::OnCancel()
{
   // TODO: Add extra cleanup here

   // Ensure that you reset all the values back to the
   // ones before modification. This handler is called
   // when the user doesn't want to save the changes.

   if (AfxMessageBox(_T("Are you sure you want to abort the changes?"), 
      MB_YESNO) == IDNO)
   {
      // Give the user a chance if he has unknowingly hit the
      // Cancel button. If he says No, return. Don't reset. If
      // Yes, go ahead and reset the values and close the dialog.
      return; 
   }

   m_nMyValue = m_nPrevValue;
   m_pMyString = NULL; 

   CDialog::OnCancel();
}
// </Snippet66>

// <Snippet67>
BOOL CSimpleDlg::OnInitDialog()
{
   CDialog::OnInitDialog();

   // TODO: Add extra initialization here
   m_cMyEdit.SetWindowText(_T("My Name")); // Initialize control values
   m_cMyList.ShowWindow(SW_HIDE);      // Show or hide a control, etc.

   return TRUE;  // return TRUE unless you set the focus to a control
   // EXCEPTION: OCX Property Pages should return FALSE
}
// </Snippet67>

// <Snippet68>
void CSimpleDlg::OnOK()
{
   // TODO: Add extra validation here

   // Ensure that your UI got the necessary input 
   // from the user before closing the dialog. The 
   // default OnOK will close this.
   if (m_nMyValue == 0) // Is a particular field still empty?
   {	
      // Inform the user that he can't close the dialog without
      // entering the necessary values and don't close the 
      // dialog.
      AfxMessageBox(_T("Please enter a value for MyValue"));
      return; 
   }

   CDialog::OnOK(); // This will close the dialog and DoModal will return.
}
// </Snippet68>

void CSimpleDlg::OnEnChangeSimpleedit()
{
   UpdateData();
}