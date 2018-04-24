// circctl.cpp : Implementation of the CCircCtrl OLE control class.
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
#include "circctl.h"
#include "circppg.h"
#include <msstkppg.h>

#ifdef _DEBUG
#undef THIS_FILE
static char BASED_CODE THIS_FILE[] = __FILE__;
#endif


IMPLEMENT_DYNCREATE(CCircCtrl, COleControl)


/////////////////////////////////////////////////////////////////////////////
// Message map

BEGIN_MESSAGE_MAP(CCircCtrl, COleControl)
	//{{AFX_MSG_MAP(CCircCtrl)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONDBLCLK()
	ON_WM_LBUTTONUP()
	ON_WM_SIZE()
	//}}AFX_MSG_MAP
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()


/////////////////////////////////////////////////////////////////////////////
// Dispatch map

BEGIN_DISPATCH_MAP(CCircCtrl, COleControl)
	//{{AFX_DISPATCH_MAP(CCircCtrl)
	DISP_PROPERTY_NOTIFY(CCircCtrl, "CircleShape", m_circleShape, OnCircleShapeChanged, VT_BOOL)
	DISP_PROPERTY_NOTIFY(CCircCtrl, "FlashColor", m_flashColor, OnFlashColorChanged, VT_COLOR)
	DISP_PROPERTY_EX(CCircCtrl, "CircleOffset", GetCircleOffset, SetCircleOffset, VT_I2)
	DISP_PROPERTY_EX(CCircCtrl, "Note", GetNote, SetNote, VT_BSTR)
	DISP_STOCKPROP_BACKCOLOR()
	DISP_STOCKPROP_CAPTION()
	DISP_STOCKPROP_FONT()
	DISP_STOCKPROP_FORECOLOR()
	//}}AFX_DISPATCH_MAP
	DISP_FUNCTION_ID(CCircCtrl, "AboutBox", DISPID_ABOUTBOX, AboutBox, VT_EMPTY, VTS_NONE)
END_DISPATCH_MAP()


/////////////////////////////////////////////////////////////////////////////
// Event map

BEGIN_EVENT_MAP(CCircCtrl, COleControl)
	//{{AFX_EVENT_MAP(CCircCtrl)
	EVENT_CUSTOM("ClickIn", FireClickIn, VTS_XPOS_PIXELS  VTS_YPOS_PIXELS)
	EVENT_CUSTOM("ClickOut", FireClickOut, VTS_NONE)
	//}}AFX_EVENT_MAP
END_EVENT_MAP()


/////////////////////////////////////////////////////////////////////////////
// Property pages

// TODO: Add more property pages as needed.  Remember to increase the count!
BEGIN_PROPPAGEIDS(CCircCtrl, 3)
	PROPPAGEID(CCircPropPage::guid)
	PROPPAGEID(CLSID_StockColorPage)
	PROPPAGEID(CLSID_StockFontPage)
END_PROPPAGEIDS(CCircCtrl)


/////////////////////////////////////////////////////////////////////////////
// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CCircCtrl, "CIRC.CircCtrl.1",
	0x9dbafccf, 0x592f, 0x101b, 0x85, 0xce, 0x0, 0x60, 0x8c, 0xec, 0x29, 0x7b)


/////////////////////////////////////////////////////////////////////////////
// Type library ID and version

IMPLEMENT_OLETYPELIB(CCircCtrl, _tlid, _wVerMajor, _wVerMinor)


/////////////////////////////////////////////////////////////////////////////
// Interface IDs

const IID BASED_CODE IID_DCirc =
		{ 0x9dbafcd0, 0x592f, 0x101b, { 0x85, 0xce, 0x0, 0x60, 0x8c, 0xec, 0x29, 0x7b } };
const IID BASED_CODE IID_DCircEvents =
		{ 0x9dbafcd1, 0x592f, 0x101b, { 0x85, 0xce, 0x0, 0x60, 0x8c, 0xec, 0x29, 0x7b } };


/////////////////////////////////////////////////////////////////////////////
// Control type information

static const DWORD BASED_CODE _dwCircOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CCircCtrl, IDS_CIRC, _dwCircOleMisc)


/////////////////////////////////////////////////////////////////////////////
// CCircCtrl::CCircCtrlFactory::UpdateRegistry -
// Adds or removes system registry entries for CCircCtrl

BOOL CCircCtrl::CCircCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterControlClass(
			AfxGetInstanceHandle(),
			m_clsid,
			m_lpszProgID,
			IDS_CIRC,
			IDB_CIRC,
			FALSE,                      //  Not insertable
			_dwCircOleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}


/////////////////////////////////////////////////////////////////////////////
// CCircCtrl::CCircCtrl - Constructor

CCircCtrl::CCircCtrl()
{
	InitializeIIDs(&IID_DCirc, &IID_DCircEvents);

	// TODO: Initialize your control's instance data here.
}


/////////////////////////////////////////////////////////////////////////////
// CCircCtrl::~CCircCtrl - Destructor

CCircCtrl::~CCircCtrl()
{
	// TODO: Cleanup your control's instance data here.
}


/////////////////////////////////////////////////////////////////////////////
// CCircCtrl::OnDraw - Drawing function

void CCircCtrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect&)
{
	CBrush* pOldBrush;
	CBrush bkBrush(TranslateColor(GetBackColor()));
	CPen* pOldPen;
	CRect rc = rcBounds;
	CFont* pOldFont;
	TEXTMETRIC tm;
	const CString& strCaption = InternalGetText();

	// Set the ForeColor property color and transparent background mode into the device context
	pdc->SetTextColor(TranslateColor(GetForeColor()));
	pdc->SetBkMode(TRANSPARENT);

	// Paint the background using the BackColor property
	pdc->FillRect(rcBounds, &bkBrush);

	// Draw the ellipse using the BackColor property and a black pen
	GetDrawRect(&rc);
	pOldBrush = pdc->SelectObject(&bkBrush);
	pOldPen = (CPen*)pdc->SelectStockObject(BLACK_PEN);
	pdc->Ellipse(rc);

	// Draw the caption and note using the stock Font and ForeColor properties
	pOldFont = SelectStockFont(pdc);
	GetStockTextMetrics(&tm);

	pdc->SetTextAlign(TA_CENTER | TA_TOP);
	pdc->ExtTextOut((rc.left + rc.right) / 2, (rc.top + rc.bottom - tm.tmHeight) / 2,
		ETO_CLIPPED, rc, strCaption, strCaption.GetLength(), NULL);
	pdc->SetTextAlign(TA_LEFT | TA_TOP);
	pdc->ExtTextOut(rcBounds.left, rcBounds.top,
		ETO_CLIPPED, rcBounds, m_note, m_note.GetLength(), NULL);
	pdc->SelectObject(pOldFont);

	pdc->SelectObject(pOldPen);
	pdc->SelectObject(pOldBrush);
}


/////////////////////////////////////////////////////////////////////////////
// CCircCtrl::DoPropExchange - Persistence support

void CCircCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	if (pPX->GetVersion() == (DWORD)MAKELONG(_wVerMinor, _wVerMajor))
	{
		PX_Bool(pPX, _T("CircleShape"), m_circleShape, TRUE);
		PX_Short(pPX, _T("CircleOffset"), m_circleOffset, 0);
		PX_Long(pPX, _T("FlashColor"), (long &)m_flashColor, RGB(0xFF, 0x00, 0x00));
		PX_String(pPX, _T("Note"), m_note, _T(""));
	}
	else if (pPX->IsLoading())
	{
		// Skip over persistent data
		BOOL bDummy;
		short sDummy;
		long lDummy;
		CString strDummy;
		PX_Bool(pPX, _T("CircleShape"), bDummy, FALSE);
		PX_Short(pPX, _T("CircleOffset"), sDummy, 0);
		PX_Long(pPX, _T("FlashColor"), lDummy, 0);
		PX_String(pPX, _T("Note"), strDummy, _T(""));

		// Force property values to these defaults
		m_circleShape = TRUE;
		m_circleOffset = 0;
		m_flashColor = RGB(0xFF, 0x00, 0x00);
		m_note = _T("");
	}
}


/////////////////////////////////////////////////////////////////////////////
// CCircCtrl::OnResetState - Reset control to default state

void CCircCtrl::OnResetState()
{
	COleControl::OnResetState();  // Resets defaults found in DoPropExchange

	// TODO: Reset any other control state here.
}


/////////////////////////////////////////////////////////////////////////////
// CCircCtrl::AboutBox - Display an "About" box to the user

void CCircCtrl::AboutBox()
{
	CDialog dlgAbout(IDD_ABOUTBOX_CIRC);
	dlgAbout.DoModal();
}


/////////////////////////////////////////////////////////////////////////////
// CCircCtrl message handlers


void CCircCtrl::OnCircleShapeChanged()
{
	SetModifiedFlag();

	// force the control to redraw itself
	InvalidateControl();

	// reset the circle offset, if necessary
	if (m_circleShape)
		SetCircleOffset(0);
}


void CCircCtrl::GetDrawRect(CRect* rc)
{
	if (m_circleShape)
	{
		int cx = rc->right - rc->left;
		int cy = rc->bottom - rc->top;

		if (cx > cy)
		{
			rc->left += (cx - cy) / 2;
			rc->right = rc->left + cy;

			// offset circle in bounding rect
			rc->left += m_circleOffset;
			rc->right += m_circleOffset;
		}
		else
		{
			rc->top += (cy - cx) / 2;
			rc->bottom = rc->top + cx;

			// offset circle in bounding rect
			rc->bottom -= m_circleOffset;
			rc->top -= m_circleOffset;
		}
	}
}


short CCircCtrl::GetCircleOffset()
{
	return m_circleOffset;
}


void CCircCtrl::SetCircleOffset(short nNewValue)
{
	// Validate the specified offset value
	if ((m_circleOffset != nNewValue) && m_circleShape && InBounds(nNewValue))
	{
		m_circleOffset = nNewValue;
		SetModifiedFlag();
		InvalidateControl();
	}
}


BOOL CCircCtrl::InBounds(short nOffset)
{
	int diameter;
	int length;
	int cx;
	int cy;

	GetControlSize(&cx, &cy);

	if (cx > cy)
	{
		length = cx;
		diameter = cy;
	}
	else
	{
		length = cy;
		diameter = cx;
	}
	if (nOffset < 0)
		nOffset = (short) -nOffset;
	return (diameter / 2 + nOffset) <= (length / 2);
}


void CCircCtrl::OnLButtonDown(UINT nFlags, CPoint point)
{
	CDC* pdc;

	// Flash the color of the control if within the ellipse.
	if (InCircle(point))
	{
		pdc = GetDC();
		FlashColor(pdc);
		ReleaseDC(pdc);

		// Fire the ClickIn event
		FireClickIn(point.x, point.y);
	}
	else
		// Fire the ClickOut event
		FireClickOut();

	COleControl::OnLButtonDown(nFlags, point);
}


void CCircCtrl::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	CDC* pdc;

	// Flash the color of the control if within the ellipse.
	if (InCircle(point))
	{
		pdc = GetDC();
		FlashColor(pdc);
		ReleaseDC(pdc);
	}

	COleControl::OnLButtonDblClk(nFlags, point);
}


void CCircCtrl::OnLButtonUp(UINT nFlags, CPoint point)
{
	// Redraw the control.
	if (InCircle(point))
		InvalidateControl();

	COleControl::OnLButtonUp(nFlags, point);
}


BOOL CCircCtrl::InCircle(CPoint& point)
{
	CRect rc;
	GetClientRect(rc);
	GetDrawRect(&rc);

	// Determine radii
	double a = (rc.right - rc.left) / 2;
	double b = (rc.bottom - rc.top) / 2;

	// Determine x, y
	double x = point.x - (rc.left + rc.right) / 2;
	double y = point.y - (rc.top + rc.bottom) / 2;

	// Apply ellipse formula
	return ((x * x) / (a * a) + (y * y) / (b * b) <= 1);
}


void CCircCtrl::FlashColor(CDC* pdc)
{
	CBrush* pOldBrush;
	CBrush flashBrush(TranslateColor(m_flashColor));
	CPen* pOldPen;
	CRect rc;

	GetClientRect(rc);
	GetDrawRect(&rc);
	pOldBrush = pdc->SelectObject(&flashBrush);
	pOldPen = (CPen*)pdc->SelectStockObject(BLACK_PEN);
	pdc->Ellipse(rc);
	pdc->SelectObject(pOldPen);
	pdc->SelectObject(pOldBrush);
}


BOOL CCircCtrl::OnMapPropertyToPage(DISPID dispid, LPCLSID lpclsid,
	BOOL* pbPageOptional)
{
	switch(dispid)
	{
		case dispidFlashColor:
			*lpclsid = CLSID_CColorPropPage;
			*pbPageOptional = TRUE;
			return TRUE;
	}
	return COleControl::OnMapPropertyToPage(dispid, lpclsid, pbPageOptional);
}


BSTR CCircCtrl::GetNote()
{
	return m_note.AllocSysString();
}


void CCircCtrl::SetNote(LPCTSTR lpszNewValue)
{
	if (m_note != lpszNewValue)
	{
		m_note = lpszNewValue;
		SetModifiedFlag();
		InvalidateControl();
		BoundPropertyChanged(dispidNote);
	}
}

void CCircCtrl::OnSize(UINT nType, int cx, int cy)
{
	COleControl::OnSize(nType, cx, cy);

	// If circle shape is true & cicrle does not fit in new size, reset the offset
	if (m_circleShape && !InBounds(GetCircleOffset()))
		SetCircleOffset(0);

}

void CCircCtrl::OnFlashColorChanged() 
{
	// TODO: Add notification handler code

	SetModifiedFlag();
}
