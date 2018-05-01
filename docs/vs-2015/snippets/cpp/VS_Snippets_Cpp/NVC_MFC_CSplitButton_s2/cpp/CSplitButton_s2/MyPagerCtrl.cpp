// MyPagerCtrl.cpp : implementation file
//

#include "stdafx.h"
#include "CSplitButton_s2.h"
#include "MyPagerCtrl.h"


// CMyPagerCtrl

IMPLEMENT_DYNAMIC(CMyPagerCtrl, CPagerCtrl)

CMyPagerCtrl::CMyPagerCtrl()
{
}

CMyPagerCtrl::~CMyPagerCtrl()
{
}

// <snippet8>
BEGIN_MESSAGE_MAP(CMyPagerCtrl, CPagerCtrl)
		ON_NOTIFY_REFLECT(PGN_CALCSIZE, &CMyPagerCtrl::OnCalcSize)
END_MESSAGE_MAP()

// CMyPagerCtrl message handlers
void CMyPagerCtrl::OnCalcSize(NMHDR* code, LRESULT* param)
{
// If the control contained in the pager control changes size, use this
// handler to change the size of the pager control accordingly.

		LPNMPGCALCSIZE tmp = (LPNMPGCALCSIZE)code;
		*param = 0;
		tmp->iWidth = 500;
		tmp->iHeight = 50;
}

// </snippet8>