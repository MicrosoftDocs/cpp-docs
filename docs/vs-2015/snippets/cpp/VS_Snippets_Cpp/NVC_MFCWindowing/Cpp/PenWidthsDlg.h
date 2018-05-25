#pragma once


// CPenWidthsDlg dialog

class CPenWidthsDlg : public CDialog
{
	DECLARE_DYNAMIC(CPenWidthsDlg)

public:
	CPenWidthsDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CPenWidthsDlg();

   CBrush m_brush;

// Dialog Data
	enum { IDD = IDD_PENWIDTHSDLG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
   int m_nThickWidth;
public:
   int m_nThinWidth;
public:
   virtual BOOL OnInitDialog();
public:
   afx_msg void OnTimer(UINT_PTR nIDEvent);
public:
   afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
};
