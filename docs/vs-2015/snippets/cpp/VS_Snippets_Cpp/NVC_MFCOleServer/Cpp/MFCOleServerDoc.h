// MFCOleServerDoc.h : interface of the CMFCOleServerDoc class
//


#pragma once


class CMFCOleServerSrvrItem;

class CMFCOleServerDoc : public COleServerDoc
{
protected: // create from serialization only
   CMFCOleServerDoc();
   DECLARE_DYNCREATE(CMFCOleServerDoc)

// Attributes
public:
   CMFCOleServerSrvrItem* GetEmbeddedItem()
      { return reinterpret_cast<CMFCOleServerSrvrItem*>(COleServerDoc::GetEmbeddedItem()); }

// Operations
public:

// Overrides
protected:
   virtual COleServerItem* OnGetEmbeddedItem();

   virtual CDocObjectServer* GetDocObjectServer(LPOLEDOCUMENTSITE pSite);
public:
   virtual BOOL OnNewDocument();
   virtual void Serialize(CArchive& ar);

// Implementation
public:
   virtual ~CMFCOleServerDoc();
#ifdef _DEBUG
   virtual void AssertValid() const;
   virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
   DECLARE_MESSAGE_MAP()
};


