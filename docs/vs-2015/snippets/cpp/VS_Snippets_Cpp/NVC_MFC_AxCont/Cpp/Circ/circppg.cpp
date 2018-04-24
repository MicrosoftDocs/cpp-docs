// circppg.cpp : Implementation of the CCircPropPage property page class.
//
// This is a part of the Microsoft Foundation Classes C++ library.
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
// This source code is only intended as a supplement to the
// Microsoft Foundation Classes Reference and related
// electronic documentation provided with the library.
// See these sources for detailed information regarding the
// Microsoft Foundation Classes product.

#include "stdafx.h"
#include "circ.h"
#include "circppg.h"

#ifdef _DEBUG
#undef THIS_FILE
static char BASED_CODE THIS_FILE[] = __FILE__;
#endif


IMPLEMENT_DYNCREATE(CCircPropPage, COlePropertyPage)


/////////////////////////////////////////////////////////////////////////////
// Message map

BEGIN_MESSAGE_MAP(CCircPropPage, COlePropertyPage)
	//{{AFX_MSG_MAP(CCircPropPage)
	// NOTE - ClassWizard will add and remove message map entries
	//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()


/////////////////////////////////////////////////////////////////////////////
// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CCircPropPage, "CIRC.CircPropPage.1",
	0x9dbafcd3, 0x592f, 0x101b, 0x85, 0xce, 0x0, 0x60, 0x8c, 0xec, 0x29, 0x7b)


/////////////////////////////////////////////////////////////////////////////
// CCircPropPage::CCircPropPageFactory::UpdateRegistry -
// Adds or removes system registry entries for CCircPropPage

BOOL CCircPropPage::CCircPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_CIRC_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}


/////////////////////////////////////////////////////////////////////////////
// CCircPropPage::CCircPropPage - Constructor

CCircPropPage::CCircPropPage() :
	COlePropertyPage(IDD, IDS_CIRC_PPG_CAPTION)
{
	//{{AFX_DATA_INIT(CCircPropPage)
	m_caption = _T("");
	m_circleOffset = 0;
	m_circleShape = FALSE;
	m_note = _T("");
	//}}AFX_DATA_INIT
}


/////////////////////////////////////////////////////////////////////////////
// CCircPropPage::DoDataExchange - Moves data between page and properties

void CCircPropPage::DoDataExchange(CDataExchange* pDX)
{
	//{{AFX_DATA_MAP(CCircPropPage)
	DDP_Text(pDX, IDC_CAPTION, m_caption, _T("Caption") );
	DDX_Text(pDX, IDC_CAPTION, m_caption);
	DDP_Text(pDX, IDC_CIRCLEOFFSET, m_circleOffset, _T("CircleOffset") );
	DDX_Text(pDX, IDC_CIRCLEOFFSET, m_circleOffset);
	DDP_Check(pDX, IDC_CIRCLESHAPE, m_circleShape, _T("CircleShape") );
	DDX_Check(pDX, IDC_CIRCLESHAPE, m_circleShape);
	DDP_Text(pDX, IDC_NOTE, m_note, _T("Note") );
	DDX_Text(pDX, IDC_NOTE, m_note);
	//}}AFX_DATA_MAP
	DDP_PostProcessing(pDX);
}


/////////////////////////////////////////////////////////////////////////////
// CCircPropPage message handlers
