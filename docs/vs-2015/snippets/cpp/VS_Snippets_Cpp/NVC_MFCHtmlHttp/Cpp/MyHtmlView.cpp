// MyHtmlView.cpp : implementation of the CMyHtmlView class
//

#include "stdafx.h"
#include "NVC_MFCHtmlHttp.h"

#include "MyDoc.h"
#include "MyHtmlView.h"
#include "MyDHtmlDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMyHtmlView

IMPLEMENT_DYNCREATE(CMyHtmlView, CHtmlView)

BEGIN_MESSAGE_MAP(CMyHtmlView, CHtmlView)
   ON_COMMAND(ID_VIEW_DHTMLDLG, &CMyHtmlView::OnViewDhtmldlg)
   ON_COMMAND(ID_VIEW_GOTOMICROSOFT, &CMyHtmlView::OnGoToMicrosoft)
   ON_COMMAND(ID_VIEW_AFXGETAPPMODULESTATE, &CMyHtmlView::OnViewAfxgetappmodulestate)
END_MESSAGE_MAP()

// CMyHtmlView construction/destruction

CMyHtmlView::CMyHtmlView()
{
	// TODO: add construction code here

}

CMyHtmlView::~CMyHtmlView()
{
}

BOOL CMyHtmlView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CHtmlView::PreCreateWindow(cs);
}

void CMyHtmlView::OnInitialUpdate()
{
	CHtmlView::OnInitialUpdate();

	Navigate2(_T("http://www.msdn.microsoft.com/visualc/"),NULL,NULL);
}


// CMyHtmlView diagnostics

#ifdef _DEBUG
void CMyHtmlView::AssertValid() const
{
	CHtmlView::AssertValid();
}

void CMyHtmlView::Dump(CDumpContext& dc) const
{
	CHtmlView::Dump(dc);
}

CMyDoc* CMyHtmlView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMyDoc)));
	return (CMyDoc*)m_pDocument;
}
#endif //_DEBUG


// CMyHtmlView message handlers

void CMyHtmlView::OnViewDhtmldlg()
{
   CMyDHtmlDlg dhd;
   dhd.DoModal();

   {
// <Snippet5>
   CDHtmlDialog mydialog(IDD_MYDHTMLDLG);
   mydialog.m_nHtmlResID = IDR_HTML_MYDHTMLDLG;
   mydialog.DoModal();
// </Snippet5>
   }

   {
// <Snippet6>
   CDHtmlDialog mydialog(IDD_MYDHTMLDLG);
   TCHAR szResID[] = _T("HTML_PAGE");
   mydialog.m_szHtmlResID = szResID;
   mydialog.DoModal( );
// </Snippet6>
   }
}

// <Snippet7>
void CMyHtmlView::OnGoToMicrosoft()
{
   Navigate2(_T("http://home.microsoft.com"));
}
// </Snippet7>

void CMyHtmlView::OnViewAfxgetappmodulestate()
{
// <Snippet8>
   AFX_MANAGE_STATE(AfxGetAppModuleState());
// </Snippet8>
}
