#pragma once

// CPSheetDoc document

class CPSheetDoc : public CDocument
{
	DECLARE_DYNCREATE(CPSheetDoc)

public:
   COLORREF m_Color;
   int m_LastActivePage;
   int m_ShapeSelection;
   UINT m_NumObjects;

public:
	CPSheetDoc();
	virtual ~CPSheetDoc();
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

	DECLARE_MESSAGE_MAP()
};
