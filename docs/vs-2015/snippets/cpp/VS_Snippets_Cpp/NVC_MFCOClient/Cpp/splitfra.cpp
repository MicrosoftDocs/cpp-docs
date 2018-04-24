// splitfra.cpp : implementation of the CSplitFrame class
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
#include "oclient.h"
#include "splitfra.h"

#ifdef _DEBUG
#undef THIS_FILE
static char BASED_CODE THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSplitFrame

IMPLEMENT_DYNCREATE(CSplitFrame, CMDIChildWnd)

CSplitFrame::CSplitFrame()
{
}

CSplitFrame::~CSplitFrame()
{
}

BOOL CSplitFrame::OnCreateClient(LPCREATESTRUCT /*lpcs*/, CCreateContext* pContext)
{
   return m_wndSplitter.Create(this,
      2, 2,       // TODO: adjust the number of rows, columns
      CSize(10, 10),  // TODO: adjust the minimum pane size
      pContext);
}

BEGIN_MESSAGE_MAP(CSplitFrame, CMDIChildWnd)
   //{{AFX_MSG_MAP(CSplitFrame)
      // NOTE - the ClassWizard will add and remove mapping macros here.
   //}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSplitFrame message handlers
