// This is a part of the Microsoft Foundation Classes C++ library.
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
// This source code is only intended as a supplement to the
// Microsoft Foundation Classes Reference and related
// electronic documentation provided with the library.
// See these sources for detailed information regarding the
// Microsoft Foundation Classes product.


// class CRectItem - main COleClientItem bounded by a rectangle

class CMainDoc;
class CMainView;

class CRectItem : public COleClientItem
{
   DECLARE_SERIAL(CRectItem)
   CRectItem();

public:
   CRectItem(COleDocument* pContainer);
   ~CRectItem();

// Attributes
   CPoint m_ptPos;             //position in document
   CSize GetSize();            //current size
   void SetSize(CSize size);
   CSize GetBaseSize();        //base size
   void SetBaseSize(CSize size);
   CRect GetRect()             //current rect
      { return CRect(m_ptPos, GetSize()); }
   void SetRect(CRect& rect);

   CMainDoc* GetDocument()
      { return (CMainDoc*)COleClientItem::GetDocument(); }
   CMainView* GetActiveView()
      { return (CMainView*)COleClientItem::GetActiveView(); }

// Operations
   void Dirty()
      { GetDocument()->SetModifiedFlag(); }
   void Invalidate(CView* pNotThisView = NULL);
   BOOL UpdateExtent();
   void Move(CRect &rc);
   void ResetSize();
   void GetNativeClipboardData(COleDataSource *pDataSource);

   virtual void Serialize(CArchive& ar); // from CObject - public to call directly

// Overridables
protected:
   virtual void OnChange(OLE_NOTIFICATION wNotification, DWORD dwParam);
   virtual BOOL OnChangeItemPosition(const CRect& rectPos);
   virtual void OnActivate();
   virtual COleDataSource* OnGetClipboardData(BOOL bIncludeLink,
      LPPOINT lpOffset, LPSIZE lpSize);
   virtual void OnDeactivateUI(BOOL bUndoable);

public:
   virtual void OnGetItemPosition(CRect& rPosition);
protected:
   CSize m_sizeIcon;           //current size
   CSize m_sizeContent;        //current size
   CSize m_sizeIconExtent;     //default size
   CSize m_sizeContentExtent;  //default size
};
