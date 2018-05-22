// MyChildFrame.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCWindowing.h"
#include "MyChildFrame.h"


// CMyChildFrame

IMPLEMENT_DYNCREATE(CMyChildFrame, CMDIChildWnd)

CMyChildFrame::CMyChildFrame()
{

}

CMyChildFrame::~CMyChildFrame()
{
}

// <Snippet125>
// the following function is created by the MFC Application Wizard 
// when you select Split window from the User Interface Features tab: 
BOOL CMyChildFrame::OnCreateClient(LPCREATESTRUCT /*lpcs*/, CCreateContext* pContext)
{
	return m_wndSplitter.Create(this,
		2, 2,       // TODO: adjust the number of rows, columns
		CSize(10, 10),  // TODO: adjust the minimum pane size
		pContext);
}
// </Snippet125>

BEGIN_MESSAGE_MAP(CMyChildFrame, CMDIChildWnd)
END_MESSAGE_MAP()


// CMyChildFrame message handlers
