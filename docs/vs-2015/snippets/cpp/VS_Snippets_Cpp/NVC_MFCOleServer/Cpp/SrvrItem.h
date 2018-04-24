// SrvrItem.h : interface of the CMFCOleServerSrvrItem class
//

#pragma once

class CMFCOleServerSrvrItem : public COleServerItem
{
   DECLARE_DYNAMIC(CMFCOleServerSrvrItem)

// Constructors
public:
   CMFCOleServerSrvrItem(CMFCOleServerDoc* pContainerDoc);

// Attributes
   CMFCOleServerDoc* GetDocument() const
      { return reinterpret_cast<CMFCOleServerDoc*>(COleServerItem::GetDocument()); }

// Overrides
   public:
   virtual BOOL OnDraw(CDC* pDC, CSize& rSize);
   virtual BOOL OnGetExtent(DVASPECT dwDrawAspect, CSize& rSize);

// Implementation
public:
   ~CMFCOleServerSrvrItem();
#ifdef _DEBUG
   virtual void AssertValid() const;
   virtual void Dump(CDumpContext& dc) const;
#endif

protected:
   virtual void Serialize(CArchive& ar);   // overridden for document i/o
};

