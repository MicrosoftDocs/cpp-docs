// ExtraDlg.cpp : implementation file
//

#include "stdafx.h"
#include "MFCControlLadenDialog.h"
#include "ExtraDlg.h"


// CExtraDlg dialog

IMPLEMENT_DYNAMIC(CExtraDlg, CDialog)

CExtraDlg::CExtraDlg(CWnd* pParent /*=NULL*/)
   : CDialog(CExtraDlg::IDD, pParent)
   , m_pBitmapButton(NULL)
{

}

CExtraDlg::~CExtraDlg()
{
   delete m_pBitmapButton;
}

void CExtraDlg::DoDataExchange(CDataExchange* pDX)
{
   CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CExtraDlg, CDialog)
END_MESSAGE_MAP()


// CExtraDlg message handlers

CBitmapButton* CreateButton(CWnd* pParentWnd)
{
// <Snippet59>
   CBitmapButton* pmyButton = new CBitmapButton();

   // Create the bitmap button (must include the BS_OWNERDRAW style).
   pmyButton->Create(NULL, WS_CHILD|WS_VISIBLE|BS_OWNERDRAW, 
      CRect(10,10,100,100), pParentWnd, 1);

   // Load the bitmaps for this button.
   pmyButton->LoadBitmaps(IDB_UP, IDB_DOWN, IDB_FOCUS, IDB_DISABLE); 

   // Resize the button to be the size of the bitmaps.
   pmyButton->SizeToContent();
// </Snippet59>

   return pmyButton;
}

CBitmapButton* CreateOtherButton(CWnd* pParentWnd)
{
// <Snippet58>
   CBitmapButton* pmyButton = new CBitmapButton();

   // Create the bitmap button (must include the BS_OWNERDRAW style).
   pmyButton->Create(NULL, WS_CHILD|WS_VISIBLE|BS_OWNERDRAW, 
      CRect(10,10,100,100), pParentWnd, 1);

   // Load the bitmaps for this button.
   pmyButton->LoadBitmaps(IDB_UP, IDB_DOWN, IDB_FOCUS, IDB_DISABLE); 
// </Snippet58>

   return pmyButton;
}

BOOL CExtraDlg::OnInitDialog()
{
   CDialog::OnInitDialog();

// <Snippet57>
   // Declare a bitmap button object on the stack.
   CBitmapButton myButton;

   // Declare a bitmap button object on the heap.
   CBitmapButton* pmyButton = new CBitmapButton;
// </Snippet57>

   delete pmyButton;

   m_pBitmapButton = CreateButton(this);

   delete m_pBitmapButton;

   m_pBitmapButton = CreateOtherButton(this);

   {
// <Snippet75>
      CBitmapButton myButton;

      // Initialize the owner-drawn button with the id IDC_MYBUTTON as a bitmap 
      // button. This code is used in the OnInitDialog handler of my dialog.
      myButton.AutoLoad(IDC_MYBUTTON, this);
// </Snippet75>
   }

   return TRUE;  // return TRUE unless you set the focus to a control
}
