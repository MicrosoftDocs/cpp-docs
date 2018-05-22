// OleContainerView.h : interface of the COleContainerView class
//


#pragma once

class COleContainerItem;

class COleContainerView : public CView
{
protected: // create from serialization only
	COleContainerView();
	DECLARE_DYNCREATE(COleContainerView)

// Attributes
public:
	COleContainerDoc* GetDocument() const;
	// m_pSelection holds the selection to the current COleContainerItem.
	// For many applications, such a member variable isn't adequate to
	//  represent a selection, such as a multiple selection or a selection
	//  of objects that are not COleContainerItem objects.  This selection
	//  mechanism is provided just to help you get started

	// TODO: replace this selection mechanism with one appropriate to your app
	COleContainerItem* m_pSelection;

   COleDropTarget m_DropTarget;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL IsSelected(const CObject* pDocItem) const;// Container support

// Implementation
public:
	virtual ~COleContainerView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnDestroy();
	afx_msg void OnSetFocus(CWnd* pOldWnd);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnInsertObject();
	afx_msg void OnCancelEditCntr();
	afx_msg void OnFilePrint();
	afx_msg void OnFilePrintPreview();
	afx_msg void OnFilePrintPreviewUIUpdate(CCmdUI* pCmdUI);
	DECLARE_MESSAGE_MAP()
public:
   afx_msg void OnAttachDispatch();
public:
   afx_msg void OnCreateDispatch();
public:
   afx_msg void OnDispatchDetachdispatch();
public:
   afx_msg void OnDispatchSetproperty();
public:
   afx_msg void OnDispatchLpdispatch();
public:
   afx_msg void OnDispatchM_bAutoRelease();
public:
   virtual DROPEFFECT OnDragOver(COleDataObject* pDataObject, DWORD dwKeyState, CPoint point);
public:
   afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
};

#ifndef _DEBUG  // debug version in OleContainerView.cpp
inline COleContainerDoc* COleContainerView::GetDocument() const
   { return reinterpret_cast<COleContainerDoc*>(m_pDocument); }
#endif

