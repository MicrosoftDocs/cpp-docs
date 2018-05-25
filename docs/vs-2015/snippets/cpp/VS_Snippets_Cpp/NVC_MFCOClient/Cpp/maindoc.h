// maindoc.h : interface of the CMainDoc class
//
// This is a part of the Microsoft Foundation Classes C++ library.
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
// This source code is only intended as a supplement to the
// Microsoft Foundation Classes Reference and related
// electronic documentation provided with the library.
// See these sources for detailed information regarding the
// Microsoft Foundation Classes product.


class CRectItem;

class CMainDoc : public COleLinkingDoc
{
protected: // create from serialization only
   CMainDoc();
   DECLARE_DYNCREATE(CMainDoc)

// Attributes
public:
   static CLIPFORMAT m_cfPrivate;
   CSize m_sizeDoc;
   CSize& GetDocumentSize();
   BOOL m_bNeedUpdate;

// Operations
public:
   CRectItem* CreateItem();    // this document only stores CRectItems
   void DeleteItem(CRectItem* pItem);
   void AdjustItemPosition(CRectItem* pItem);

// Implementation
public:
   virtual ~CMainDoc();
   virtual void Serialize(CArchive& ar);   // overridden for document i/o
   virtual void OnShowViews(BOOL bVisible);

#ifdef _DEBUG
   virtual void AssertValid() const;
   virtual void Dump(CDumpContext& dc) const;
#endif

// Generated message map functions
protected:
   //{{AFX_MSG(CMainDoc)
   afx_msg void OnEditClearAll();
   afx_msg void OnUpdateEditClearAll(CCmdUI* pCmdUI);
   //}}AFX_MSG
   DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////
