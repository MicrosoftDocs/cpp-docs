// Modeless.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCWindowing.h"
#include "Modeless.h"


// CModeless dialog

IMPLEMENT_DYNAMIC(CModeless, CDialog)

CModeless::CModeless(CWnd* pParent /*=NULL*/)
	: CDialog(CModeless::IDD, pParent)
{

}

CModeless::~CModeless()
{
}

void CModeless::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CModeless, CDialog)
END_MESSAGE_MAP()


// CModeless message handlers

// <Snippet87>
// CModeless is a CDialog class representing a modeless dialog
// Destruction of the modeless dialog involves calling DestroyWindow in 
// OnOK() & OnCancel() handlers
void CModeless::OnOK() 
{ 
   if (!UpdateData(TRUE)) 
   {
      TRACE(_T("UpdateData failed during dialog termination\n"));
      // The UpdateData routine will set focus to correct item
      return;
   }
   DestroyWindow();
}

void CModeless::OnCancel()
{
   DestroyWindow();
}
// </Snippet87>