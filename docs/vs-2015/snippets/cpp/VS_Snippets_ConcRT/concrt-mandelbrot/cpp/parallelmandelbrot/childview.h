
// ChildView.h : interface of the CChildView class
//


#pragma once

typedef std::shared_ptr<Gdiplus::Bitmap> BitmapPtr;

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
   // <snippet201>
   afx_msg void OnPaint();
   afx_msg void OnSize(UINT, int, int);
   afx_msg void OnSizing(UINT, LPRECT); 
   afx_msg void OnDestroy();
   DECLARE_MESSAGE_MAP()
   // </snippet201>

protected:
   // Draws the Mandelbrot fractal to the specified Bitmap object.
   void DrawMandelbrot(BitmapPtr);
      
protected:
   ULONG_PTR m_gdiplusToken;
   // <snippet102>
   concurrency::task_group m_DrawingTasks;
   concurrency::unbounded_buffer<BitmapPtr> m_MandelbrotImages;
   // </snippet102>
};

