// StaticDlg.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFC_CStatic.h"
#include "StaticDlg.h"


// CStaticDlg dialog

IMPLEMENT_DYNAMIC(CStaticDlg, CDialog)

CStaticDlg::CStaticDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CStaticDlg::IDD, pParent)
{

}

CStaticDlg::~CStaticDlg()
{
}

void CStaticDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CStaticDlg, CDialog)
END_MESSAGE_MAP()


// CStaticDlg message handlers

BOOL CStaticDlg::OnInitDialog()
{
   CDialog::OnInitDialog();

   CWnd* pParentWnd = this;

   {
// <Snippet1>
      // This code can be placed in OnInitDialog 
      CStatic myStatic;

      // Create a child static control that centers its text horizontally.
      myStatic.Create(_T("my static"), WS_CHILD|WS_VISIBLE|SS_CENTER, 
         CRect(10,10,150,50), pParentWnd);   
// </Snippet1>
   }

   {
// <Snippet2>
      // Create a static object on the stack.
      CStatic myStatic;

      // Create a static object on the heap.
      CStatic* pmyStatic = new CStatic;
// </Snippet2>
      delete pmyStatic;
   }

   {
    static CStatic* _m_pCStatic_A;
    static CStatic* _m_pCStatic_B;

// <Snippet3>
  // Code such as this could be placed in the OnInitDialog callback.
  // It creates two bitmap static controls on the heap, using members
  // _m_pCStatic_A and _m_pCStatic_B to identify them so that they can
  // be destroyed when no longer needed.

    CBitmap CBmp;
    CImage CImg;

    // Create a child bitmap static control and load it from a CBitmap object.
    _m_pCStatic_A = new CStatic;
    _m_pCStatic_A->Create(_T("A bitmap static control (A)"), 
        WS_CHILD|WS_BORDER|WS_VISIBLE|SS_BITMAP|SS_CENTERIMAGE, CRect(16,16,64,64),
        pParentWnd);
    CBmp.LoadOEMBitmap(OBM_CLOSE);  // Loads one of the default Windows bitmaps
    _m_pCStatic_A->SetBitmap( HBITMAP(CBmp) );
    _m_pCStatic_A->ShowWindow( SW_SHOW );

    // Create a child bitmap static control and load it from a CImage object.
    _m_pCStatic_B = new CStatic;
    _m_pCStatic_B->Create(_T("A bitmap static control (B)"), 
        WS_CHILD|WS_BORDER|WS_VISIBLE|SS_BITMAP|SS_CENTERIMAGE, CRect(90,16,138,64),
        pParentWnd);
    CImg.Load( _T("test.png") );
    if( _m_pCStatic_B->GetBitmap( ) == NULL )
      _m_pCStatic_B->SetBitmap( HBITMAP(CImg) );

    /* Then, later: 
     delete( _m_pCStatic_A );
     delete( _m_pCStatic_B );
     */
// </Snippet3>
   }

   {
// <Snippet4>
      CStatic myStatic;

      // Create a child icon static control.
      myStatic.Create(_T("my static"), 
         WS_CHILD|WS_VISIBLE|SS_ICON|SS_CENTERIMAGE, CRect(10,10,150,50), 
         pParentWnd);

      // If no image is defined for the static control, define the image 
      // to the system arrow and question mark cursor.
      if (myStatic.GetCursor() == NULL)
         myStatic.SetCursor(::LoadCursor(NULL, IDC_HELP));
// </Snippet4>
   }

   {
// <Snippet5>
      CStatic myStatic;

      // Create a child enhanced metafile static control.
      myStatic.Create(_T("my static"), 
         WS_CHILD|WS_VISIBLE|SS_ENHMETAFILE|SS_CENTERIMAGE, 
         CRect(10,10,150,50), pParentWnd);

      // If no image is defined for the static control, define the image 
      // to be "myemf.emf."
      if (myStatic.GetEnhMetaFile() == NULL)
         myStatic.SetEnhMetaFile(::GetEnhMetaFile(_T("myemf.emf")));   
// </Snippet5>
   }

   {
// <Snippet6>
      CStatic myStatic;

      // Create a child icon static control.
      myStatic.Create(_T("my static"), 
         WS_CHILD|WS_VISIBLE|SS_ICON|SS_CENTERIMAGE, CRect(10,10,150,50), 
         pParentWnd);

      // If no icon is defined for the static control, define the icon 
      // to the system error icon.
      if (myStatic.GetIcon() == NULL)
         myStatic.SetIcon(::LoadIcon(NULL, IDI_ERROR));   
// </Snippet6>
   }

   return TRUE;  // return TRUE unless you set the focus to a control
}
