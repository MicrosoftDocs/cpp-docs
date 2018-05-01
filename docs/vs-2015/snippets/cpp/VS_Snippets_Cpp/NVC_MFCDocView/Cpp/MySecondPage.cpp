// MySecondPage.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCDocView.h"
#include "MySecondPage.h"


// CMySecondPage dialog

IMPLEMENT_DYNAMIC(CMySecondPage, CPropertyPage)

CMySecondPage::CMySecondPage()
   : CPropertyPage(CMySecondPage::IDD)
   , m_strMember3(_T(""))
   , m_strMember4(_T(""))
{

}

CMySecondPage::~CMySecondPage()
{
}

void CMySecondPage::DoDataExchange(CDataExchange* pDX)
{
   CPropertyPage::DoDataExchange(pDX);
   DDX_Text(pDX, IDC_EDIT1, m_strMember3);
   DDX_Text(pDX, IDC_EDIT2, m_strMember4);
   DDV_MaxChars(pDX, m_strMember4, 30);
}


BEGIN_MESSAGE_MAP(CMySecondPage, CPropertyPage)
END_MESSAGE_MAP()


// CMySecondPage message handlers
