// PenWidthsDlg.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCWindowing.h"
#include "PenWidthsDlg.h"


// CPenWidthsDlg dialog

IMPLEMENT_DYNAMIC(CPenWidthsDlg, CDialog)

CPenWidthsDlg::CPenWidthsDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CPenWidthsDlg::IDD, pParent)
   , m_nThickWidth(0)
   , m_nThinWidth(0)
{
   m_brush.CreateSolidBrush(RGB(0, 0Xff, 0));
}

CPenWidthsDlg::~CPenWidthsDlg()
{
}

// <Snippet90>
void CPenWidthsDlg::DoDataExchange(CDataExchange* pDX)
{
   CDialog::DoDataExchange(pDX);
   DDX_Text(pDX, IDC_THINPENWIDTH, m_nThinWidth);
	DDV_MinMaxInt(pDX, m_nThinWidth, 1, 20);
   DDX_Text(pDX, IDC_THICKPENWIDTH, m_nThickWidth);
   DDV_MinMaxInt(pDX, m_nThickWidth, 1, 20);
}
// </Snippet90>

BEGIN_MESSAGE_MAP(CPenWidthsDlg, CDialog)
   ON_WM_TIMER()
   ON_WM_CTLCOLOR()
END_MESSAGE_MAP()


// CPenWidthsDlg message handlers

// <Snippet95>
BOOL CPenWidthsDlg::OnInitDialog()
{
   CDialog::OnInitDialog();

   // set timer to cause dialog to flash
   SetTimer(1, 500, NULL);
   return TRUE;  // return TRUE unless you set the focus to a control
}

void CPenWidthsDlg::OnTimer(UINT_PTR nIDEvent)
{
   // cause the dialog to flash
   FlashWindow(TRUE);
   CDialog::OnTimer(nIDEvent);
}
// </Snippet95>

// <Snippet107>
// This OnCtlColor handler will change the color of a static control
// with the ID of IDC_MYSTATIC. The code assumes that the CPenWidthsDlg
// class has an initialized and created CBrush member named m_brush.
// The control will be painted with red text and a background
// color of m_brush.
HBRUSH CPenWidthsDlg::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
   // Call the base class implementation first! Otherwise, it may
   // undo what we're trying to accomplish here.
   HBRUSH hbr = CDialog::OnCtlColor(pDC, pWnd, nCtlColor);

   // Are we painting the IDC_MYSTATIC control? We can use
   // CWnd::GetDlgCtrlID() to perform the most efficient test.
   if (pWnd->GetDlgCtrlID() == IDC_MYSTATIC)
   {
      // Set the text color to red
      pDC->SetTextColor(RGB(255, 0, 0));

      // Set the background mode for text to transparent 
      // so background will show thru.
      pDC->SetBkMode(TRANSPARENT);

      // Return handle to our CBrush object
      hbr = m_brush;
   }

   return hbr;
}
// </Snippet107>