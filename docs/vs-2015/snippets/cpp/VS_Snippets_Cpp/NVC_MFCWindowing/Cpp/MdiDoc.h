#pragma once

// CMdiDoc document

class CMdiDoc : public COleServerDoc
{
	DECLARE_DYNCREATE(CMdiDoc)

public:
	CMdiDoc();
	virtual ~CMdiDoc();

   HMENU m_hDefaultMenu;

#ifndef _WIN32_WCE
	virtual void Serialize(CArchive& ar);   // overridden for document i/o
#endif
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	virtual BOOL OnNewDocument();
#ifndef _WIN32_WCE
	virtual COleServerItem* OnGetEmbeddedItem();
#endif

   virtual HMENU GetDefaultMenu();

	DECLARE_MESSAGE_MAP()
};
