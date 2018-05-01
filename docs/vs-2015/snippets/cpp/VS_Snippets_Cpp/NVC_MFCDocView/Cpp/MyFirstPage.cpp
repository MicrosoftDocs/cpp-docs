// MyFirstPage.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCDocView.h"
#include "MyFirstPage.h"


// CMyFirstPage dialog

IMPLEMENT_DYNAMIC(CMyFirstPage, CPropertyPage)

CMyFirstPage::CMyFirstPage()
   : CPropertyPage(CMyFirstPage::IDD)
   , m_nMember1(0)
   , m_nMember2(0)
{

}

CMyFirstPage::~CMyFirstPage()
{
}

void CMyFirstPage::DoDataExchange(CDataExchange* pDX)
{
   CPropertyPage::DoDataExchange(pDX);
   DDX_Slider(pDX, IDC_SLIDER1, m_nMember1);
   DDV_MinMaxInt(pDX, m_nMember1, 0, 200);
   DDX_Slider(pDX, IDC_SLIDER2, m_nMember2);
   DDV_MinMaxInt(pDX, m_nMember2, 0, 560);
}


BEGIN_MESSAGE_MAP(CMyFirstPage, CPropertyPage)
END_MESSAGE_MAP()


// CMyFirstPage message handlers
