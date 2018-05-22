// OleDbViewView.cpp : implementation of the CMyOleDbView class
//

#include "stdafx.h"
#include "NVC_MFCDatabase.h"

#include "OleDbViewSet.h"
#include "MyOleDbDoc.h"
#include "MyOleDbView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMyOleDbView

IMPLEMENT_DYNCREATE(CMyOleDbView, COleDBRecordView)

BEGIN_MESSAGE_MAP(CMyOleDbView, COleDBRecordView)
END_MESSAGE_MAP()

// CMyOleDbView construction/destruction

CMyOleDbView::CMyOleDbView()
	: COleDBRecordView(CMyOleDbView::IDD)
{
	m_pSet = NULL;
	// TODO: add construction code here

}

CMyOleDbView::~CMyOleDbView()
{
}

void CMyOleDbView::DoDataExchange(CDataExchange* pDX)
{
	COleDBRecordView::DoDataExchange(pDX);
	// you can insert DDX_* functions, as well as SetDlgItem*/GetDlgItem* API calls to link your database to the view
	// ex. ::SetDlgItemText(m_hWnd, IDC_MYCONTROL, m_pSet->m_MyColumn);
	// See MSDN and OLEDB samples for more information
}

BOOL CMyOleDbView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return COleDBRecordView::PreCreateWindow(cs);
}

void CMyOleDbView::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_Product;
	{
		CWaitCursor wait;
		HRESULT hr = m_pSet->OpenAll();
		if (FAILED(hr))
		{
			// Failed to open recordset.  If the recordset is a 
			// stored procedure, make sure that you have properly
			// initialized any input parameters before calling
			// the OpenAll() method.

			AfxMessageBox(_T("Record set failed to open."), MB_OK);
			// Disable the Next and Previous record commands,
			// since attempting to change the current record without an
			// open RowSet will cause a crash
			m_bOnFirstRecord = TRUE;
			m_bOnLastRecord = TRUE;
		}
		if( hr == DB_S_ENDOFROWSET )
		{
			// the rowset is empty (does not contain any rows)
			AfxMessageBox(_T("Record set opened but there were no rows to return."), MB_OK);
			// Disable the Next and Previous record commands
			m_bOnFirstRecord = TRUE;
			m_bOnLastRecord = TRUE;
		}
	}
	COleDBRecordView::OnInitialUpdate();

}


// CMyOleDbView diagnostics

#ifdef _DEBUG
void CMyOleDbView::AssertValid() const
{
	COleDBRecordView::AssertValid();
}

void CMyOleDbView::Dump(CDumpContext& dc) const
{
	COleDBRecordView::Dump(dc);
}

CMyOleDbDoc* CMyOleDbView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMyOleDbDoc)));
	return (CMyOleDbDoc*)m_pDocument;
}
#endif //_DEBUG


// CMyOleDbView database support
CRowset<>* CMyOleDbView::OnGetRowset()
{
	return (CRowset<>*)(CRowset<CAccessor<CProductAccessor>>*)m_pSet->GetRowsetBase();
}



// CMyOleDbView message handlers
