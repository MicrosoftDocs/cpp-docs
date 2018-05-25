// MyListView.h : interface of the CMyListView class
//


#pragma once



class CMyListView : public CListView
{
protected: // create from serialization only
   CMyListView();
   DECLARE_DYNCREATE(CMyListView)

// Attributes
public:
   CMFCListViewDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
   virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
   virtual void OnInitialUpdate(); // called first time after construct

// Implementation
public:
   virtual ~CMyListView();
#ifdef _DEBUG
   virtual void AssertValid() const;
   virtual void Dump(CDumpContext& dc) const;
#endif

protected:

   COleDropTarget m_DropTarg;

// Generated message map functions
protected:
   DECLARE_MESSAGE_MAP()
public:
   afx_msg void OnLvnBegindrag(NMHDR *pNMHDR, LRESULT *pResult);
public:
   virtual BOOL OnDrop(COleDataObject* pDataObject, DROPEFFECT dropEffect, CPoint point);
public:
   virtual DROPEFFECT OnDragEnter(COleDataObject* pDataObject, DWORD dwKeyState, CPoint point);
public:
   afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
public:
   virtual DROPEFFECT OnDragOver(COleDataObject* pDataObject, DWORD dwKeyState, CPoint point);
public:
   afx_msg void OnEditCopy();
public:
   afx_msg void OnEditCut();
};

#ifndef _DEBUG  // debug version in MyListView.cpp
inline CMFCListViewDoc* CMyListView::GetDocument() const
   { return reinterpret_cast<CMFCListViewDoc*>(m_pDocument); }
#endif

