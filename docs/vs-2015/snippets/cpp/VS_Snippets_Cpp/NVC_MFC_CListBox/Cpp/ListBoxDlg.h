#pragma once

// CMyODListBox

class CMyODListBox : public CListBox
{
	DECLARE_DYNAMIC(CMyODListBox)

public:
	CMyODListBox();
	virtual ~CMyODListBox();

protected:
	DECLARE_MESSAGE_MAP()
public:
   afx_msg int CharToItem(UINT /*nChar*/, UINT /*nIndex*/);
public:
   afx_msg int CompareItem(LPCOMPAREITEMSTRUCT /*lpCompareItemStruct*/);
public:
   virtual void DeleteItem(LPDELETEITEMSTRUCT lpDeleteItemStruct);
public:
   virtual void DrawItem(LPDRAWITEMSTRUCT /*lpDrawItemStruct*/);
public:
   virtual void MeasureItem(LPMEASUREITEMSTRUCT /*lpMeasureItemStruct*/);
public:
   afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
public:
   virtual int VKeyToItem(UINT /*nKey*/, UINT /*nIndex*/);
};

// CListBoxDlg dialog

class CListBoxDlg : public CDialog
{
	DECLARE_DYNAMIC(CListBoxDlg)

public:
	CListBoxDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CListBoxDlg();

// Dialog Data
	enum { IDD = IDD_NVC_MFC_CLISTBOX_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

   CListBox m_myListBox;
   CMyODListBox m_myODListBox;

	DECLARE_MESSAGE_MAP()
public:
   virtual BOOL OnInitDialog();
};

// <Snippet42>
// Extends the CListBox class to provide synchronization with 
// an external data source
template <typename CollectionT> 
class CSyncListBox : public CListBox
{
public:
   CSyncListBox();
   virtual ~CSyncListBox();

   afx_msg void OnPaint();
   afx_msg void OnDestroy();
   afx_msg LRESULT OnSynchronize(WPARAM wParam, LPARAM lParam);
   DECLARE_MESSAGE_MAP()

   // ...additional functionality as needed
};
// </Snippet42>