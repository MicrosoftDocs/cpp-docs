// MyDaoRecordView.cpp : implementation of the CMyDaoRecordView class
//

#include "stdafx.h"
#include "NVC_MFCDatabase.h"

#include "MyDaoDatabaseDoc.h"
#include "MyDaoRecordView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMyDaoRecordView

IMPLEMENT_DYNCREATE(CMyDaoRecordView, CDaoRecordView)

BEGIN_MESSAGE_MAP(CMyDaoRecordView, CDaoRecordView)
   // Standard printing commands
   ON_COMMAND(ID_FILE_PRINT, &CDaoRecordView::OnFilePrint)
   ON_COMMAND(ID_FILE_PRINT_DIRECT, &CDaoRecordView::OnFilePrint)
   ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CDaoRecordView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMyDaoRecordView construction/destruction

// <Snippet35>
CMyDaoRecordView::CMyDaoRecordView()
   : CDaoRecordView(CMyDaoRecordView::IDD)
{
   m_pSet = NULL;
   // TODO: add construction code here

}
// </Snippet35>

CMyDaoRecordView::~CMyDaoRecordView()
{
}

// <Snippet43>
void CMyDaoRecordView::DoDataExchange(CDataExchange* pDX)
{
   CDaoRecordView::DoDataExchange(pDX);
   DDX_FieldCBString(pDX, IDC_LASTNAME, m_pSet->m_LastName, m_pSet);
   DDX_FieldText(pDX, IDC_ID, m_pSet->m_EmployeeID, m_pSet);
   DDX_FieldText(pDX, IDC_AGE, m_pSet->m_Age, m_pSet);
}
// </Snippet43>

BOOL CMyDaoRecordView::PreCreateWindow(CREATESTRUCT& cs)
{
   // TODO: Modify the Window class or styles here by modifying
   //  the CREATESTRUCT cs

   return CDaoRecordView::PreCreateWindow(cs);
}

void CMyDaoRecordView::OnInitialUpdate()
{
//	m_pSet = &GetDocument()->m_Customer;
   CDaoRecordView::OnInitialUpdate();

}


// CMyDaoRecordView printing

BOOL CMyDaoRecordView::OnPreparePrinting(CPrintInfo* pInfo)
{
   // default preparation
   return DoPreparePrinting(pInfo);
}

void CMyDaoRecordView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
   // TODO: add extra initialization before printing
}

void CMyDaoRecordView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
   // TODO: add cleanup after printing
}


// CMyRecordView diagnostics

#ifdef _DEBUG
void CMyDaoRecordView::AssertValid() const
{
   CDaoRecordView::AssertValid();
}

void CMyDaoRecordView::Dump(CDumpContext& dc) const
{
   CDaoRecordView::Dump(dc);
}
#endif //_DEBUG


// CMyDaoRecordView database support
CDaoRecordset* CMyDaoRecordView::OnGetRecordset()
{
   return m_pSet;
}



// CMyDaoRecordView message handlers
