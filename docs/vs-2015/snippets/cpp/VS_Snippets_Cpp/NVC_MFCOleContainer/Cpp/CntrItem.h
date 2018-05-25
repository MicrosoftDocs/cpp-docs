// CntrItem.h : interface of the COleContainerItem class
//

#pragma once

class COleContainerDoc;
class COleContainerView;

class COleContainerItem : public COleDocObjectItem
{
	DECLARE_SERIAL(COleContainerItem)

// Constructors
public:
	COleContainerItem(COleContainerDoc* pContainer = NULL);
		// Note: pContainer is allowed to be NULL to enable IMPLEMENT_SERIALIZE
		//  IMPLEMENT_SERIALIZE requires the class have a constructor with
		//  zero arguments.  Normally, OLE items are constructed with a
		//  non-NULL document pointer

// Attributes
public:
	COleContainerDoc* GetDocument()
		{ return reinterpret_cast<COleContainerDoc*>(COleDocObjectItem::GetDocument()); }
	COleContainerView* GetActiveView()
		{ return reinterpret_cast<COleContainerView*>(COleDocObjectItem::GetActiveView()); }

	public:
	virtual void OnChange(OLE_NOTIFICATION wNotification, DWORD dwParam);
	virtual void OnActivate();
	protected:
	virtual void OnDeactivateUI(BOOL bUndoable);
	virtual BOOL OnChangeItemPosition(const CRect& rectPos);

// Implementation
public:
	~COleContainerItem();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	virtual void Serialize(CArchive& ar);
};

