// MyRecordView.cpp : implementation of the CMyRecordView class
//

#include "stdafx.h"
#include "NVC_MFCDatabase.h"

#include "Customer.h"
#include "MyRecordView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMyRecordView

IMPLEMENT_DYNCREATE(CMyRecordView, CRecordView)

BEGIN_MESSAGE_MAP(CMyRecordView, CRecordView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRecordView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMyRecordView construction/destruction

// <Snippet32>
CMyRecordView::CMyRecordView()
   : CRecordView(CMyRecordView::IDD)
{
   m_pSet = NULL;
   // TODO: add construction code here

}
// </Snippet32>

CMyRecordView::~CMyRecordView()
{
}

void CMyRecordView::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// you can insert DDX_Field* functions here to 'connect' your controls to the database fields, ex.
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// See MSDN and ODBC samples for more information
}

BOOL CMyRecordView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CRecordView::PreCreateWindow(cs);
}

void CMyRecordView::OnInitialUpdate()
{
//	m_pSet = &GetDocument()->m_Customer;
	CRecordView::OnInitialUpdate();

}


// CMyRecordView printing

BOOL CMyRecordView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMyRecordView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMyRecordView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CMyRecordView diagnostics

#ifdef _DEBUG
void CMyRecordView::AssertValid() const
{
	CRecordView::AssertValid();
}

void CMyRecordView::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}
#endif //_DEBUG


// CMyRecordView database support
CRecordset* CMyRecordView::OnGetRecordset()
{
	return m_pSet;
}



// CMyRecordView message handlers
