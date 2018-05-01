#pragma once

// CMyServerDoc document

// <Snippet10>
class CMyServerDoc : public COleServerDoc
{
   DECLARE_DISPATCH_MAP()

   // Remainder of class declaration omitted.
// </Snippet10>

	DECLARE_DYNCREATE(CMyServerDoc)

public:
	CMyServerDoc();
	virtual ~CMyServerDoc();

	virtual void OnFinalRelease();
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

	DECLARE_MESSAGE_MAP()
	DECLARE_INTERFACE_MAP()
public:
	BSTR m_strMsg;
public:
	void SetDirty(int Flags);
};
