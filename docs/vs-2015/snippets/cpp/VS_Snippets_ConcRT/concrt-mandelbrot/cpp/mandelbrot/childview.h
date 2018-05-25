
// ChildView.h : interface of the CChildView class
//


#pragma once

// <snippet2>
typedef std::shared_ptr<Gdiplus::Bitmap> BitmapPtr;
// </snippet2>

// CChildView window

class CChildView : public CWnd
{
// Construction
public:
	CChildView();

// Attributes
public:

// Operations
public:

// Overrides
	protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// Implementation
public:
	virtual ~CChildView();

	// Generated message map functions
protected:
	afx_msg void OnPaint();
	DECLARE_MESSAGE_MAP()

// <snippet3>
protected:
   // Draws the Mandelbrot fractal to the specified Bitmap object.
   void DrawMandelbrot(BitmapPtr);

protected:
   ULONG_PTR m_gdiplusToken;
// </snippet3>
};

