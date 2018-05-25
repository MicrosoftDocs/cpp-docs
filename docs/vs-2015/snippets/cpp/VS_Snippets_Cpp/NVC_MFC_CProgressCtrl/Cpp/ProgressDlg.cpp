// ProgressDlg.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFC_CProgressCtrl.h"
#include "ProgressDlg.h"


// CProgressDlg dialog

IMPLEMENT_DYNAMIC(CProgressDlg, CDialog)

CProgressDlg::CProgressDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CProgressDlg::IDD, pParent)
{

}

CProgressDlg::~CProgressDlg()
{
}

void CProgressDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CProgressDlg, CDialog)
END_MESSAGE_MAP()


// CProgressDlg message handlers

BOOL CProgressDlg::OnInitDialog()
{
   CDialog::OnInitDialog();

   CWnd* pParentWnd = this;

   {
// <Snippet1>
      // Create a progress control object on the stack.
      CProgressCtrl myCtrl;

      // Create a progress control object on the heap.
      CProgressCtrl* pmyCtrl = new CProgressCtrl;   
// </Snippet1>
      delete pmyCtrl;
   }

   {
// <Snippet2>
      CProgressCtrl myCtrl;

      // Create a smooth child progress control.
      myCtrl.Create(WS_CHILD|WS_VISIBLE|PBS_SMOOTH, CRect(10,10,200,30), 
         pParentWnd, IDC_PROGRESSCTRL);   
// </Snippet2>
   }

   {
// <Snippet3>
      CProgressCtrl myCtrl;

      // Create a child progress control.
      myCtrl.Create(WS_CHILD|WS_VISIBLE, CRect(10,10,200,30), pParentWnd, 
         IDC_PROGRESSCTRL);

      // Set the new position to half of the current position.
      myCtrl.SetPos(myCtrl.GetPos()/2);   
// </Snippet3>
   }

   {
// <Snippet4>
      CProgressCtrl myCtrl;

      // Create a child progress control.
      myCtrl.Create(WS_CHILD|WS_VISIBLE, CRect(10,10,200,30), pParentWnd, 
         IDC_PROGRESSCTRL);

      // Set the position to be one-fourth of the total range.
      int nLower, nUpper;
      myCtrl.GetRange(nLower, nUpper);
      myCtrl.SetPos((nUpper-nLower)/4);   
// </Snippet4>
   }

   {
// <Snippet5>
      CProgressCtrl myCtrl;

      // Create a child progress control.
      myCtrl.Create(WS_CHILD|WS_VISIBLE, CRect(10,10,200,30), pParentWnd, 
         IDC_PROGRESSCTRL);

      // Offset the position by one-fourth of the total range.
      int nLower, nUpper;
      myCtrl.GetRange(nLower, nUpper);
      myCtrl.OffsetPos((nUpper-nLower)/4);   
// </Snippet5>
   }

   {
// <Snippet6>
      CProgressCtrl myCtrl;

      // Create a smooth child progress control.
      myCtrl.Create(WS_CHILD|WS_VISIBLE|PBS_SMOOTH, CRect(10,10,200,30), 
         pParentWnd, IDC_PROGRESSCTRL);

      // Set the background color to red.
      myCtrl.SetBkColor(RGB(255, 0, 0));   
// </Snippet6>
   }

   {
// <Snippet7>
      CProgressCtrl myCtrl;

      // Create a child progress control.
      myCtrl.Create(WS_CHILD|WS_VISIBLE, CRect(10,10,200,30), pParentWnd, 
         IDC_PROGRESSCTRL);

      // Set the range to be 0 to 100.
      myCtrl.SetRange(0, 100);

      // Set the position to be half, 50.
      myCtrl.SetPos(50);   
// </Snippet7>
   }

   {
// <Snippet8>
      CProgressCtrl myCtrl;

      // Create a smooth child progress control.
      myCtrl.Create(WS_CHILD|WS_VISIBLE|PBS_SMOOTH, CRect(10,10,200,30), 
         pParentWnd, IDC_PROGRESSCTRL);

      // Set the range to be 0 to 100.
      myCtrl.SetRange(0, 100);   
// </Snippet8>
   }

   {
// <Snippet9>
      CProgressCtrl myCtrl;

      // Create a child progress control.
      myCtrl.Create(WS_CHILD|WS_VISIBLE, CRect(10,10,200,30), pParentWnd, 
         IDC_PROGRESSCTRL);

      // Set the size to be 1/10 of the total range.
      int nLower, nUpper;
      myCtrl.GetRange(nLower, nUpper);
      myCtrl.SetStep((nUpper-nLower)/10);   
// </Snippet9>
   }

   {
// <Snippet10>
      CProgressCtrl myCtrl;

      // Create a child progress control.
      myCtrl.Create(WS_CHILD|WS_VISIBLE, CRect(10,10,200,30), pParentWnd, 
         IDC_PROGRESSCTRL);

      // Advance the position to the next step.
      myCtrl.StepIt();   
// </Snippet10>
   }

   return TRUE;  // return TRUE unless you set the focus to a control
}
