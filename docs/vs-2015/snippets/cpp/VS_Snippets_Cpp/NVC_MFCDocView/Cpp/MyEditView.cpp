// MyEditView.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCDocView.h"
#include "MyEditView.h"


// CMyEditView

IMPLEMENT_DYNCREATE(CMyEditView, CEditView)

CMyEditView::CMyEditView()
{

}

CMyEditView::~CMyEditView()
{
}

BEGIN_MESSAGE_MAP(CMyEditView, CEditView)
   ON_COMMAND(ID_EDIT_SETLIMITTEXT, &CMyEditView::OnEditSetlimittext)
   ON_COMMAND(ID_EDIT_SETTABSTOPS, &CMyEditView::OnEditSettabstops)
   ON_COMMAND(ID_FILE_PRINT, &CEditView::OnFilePrint)
END_MESSAGE_MAP()


// CMyEditView diagnostics

#ifdef _DEBUG
void CMyEditView::AssertValid() const
{
	CEditView::AssertValid();
}

#ifndef _WIN32_WCE
void CMyEditView::Dump(CDumpContext& dc) const
{
	CEditView::Dump(dc);
}
#endif
#endif //_DEBUG


// CMyEditView message handlers

// <Snippet66>
void CMyEditView::OnInitialUpdate()
{
   CEditView::OnInitialUpdate();

   // get the edit control and set some initial properties for it
   CEdit& theEdit = GetEditCtrl();

   // adjust the left margin without changing the right margin
   DWORD dwMargins = theEdit.GetMargins();
   theEdit.SetMargins(20, HIWORD(dwMargins));

   // only accept 10k of text
   theEdit.SetLimitText(10 * 1024);
}
// </Snippet66>

void CMyEditView::OnEditSetlimittext()
{
   int nNewVal = 5000;
// <Snippet65>
   GetEditCtrl().SetLimitText(nNewVal); //nNewVal, the new character limit
// </Snippet65>
}

void CMyEditView::OnEditSettabstops()
{
// <Snippet67>
   // gain a reference to the edit control
   CEdit& theEdit = GetEditCtrl();

   // get the font the control is using
   CFont* pFont = theEdit.GetFont();
   TEXTMETRIC tm;

   // get the control's DC, too
   CDC* pDC = theEdit.GetDC();

   // Select the font that the control uses by default into the DC.
   // We must do this because the control may or may not be using
   // that font at this exact moment
   CFont* pOldFont = pDC->SelectObject(pFont);

   // Retrieve text metrics for that font and return the previously
   // selected font.
   pDC->GetTextMetrics(&tm);
   pDC->SelectObject(pOldFont);

   // Get an identity rectangle and map it to dialog units
   CRect rect(0, 0, 100, 1);
   ::MapDialogRect((HWND)this, rect);

   // We now know that 100 dialog units are rect.Width() screen units,
   // so we can multiply screen units by 100 and divide by rect.Width()
   // to find dialog units from screen units. tm.tmAveCharWidth is
   // the width of _one_ character, so setting the tabs at every
   // four characters means we also multiply by four.
   SetTabStops((4 * tm.tmAveCharWidth * 100) / rect.Width());
// </Snippet67>
}

// <Snippet184>
BOOL CMyEditView::OnPreparePrinting(CPrintInfo* pInfo)
{
   return CEditView::DoPreparePrinting(pInfo);
}
// </Snippet184>