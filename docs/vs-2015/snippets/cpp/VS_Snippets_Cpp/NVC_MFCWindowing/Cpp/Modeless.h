#pragma once


// CModeless dialog

class CModeless : public CDialog
{
	DECLARE_DYNAMIC(CModeless)

public:
	CModeless(CWnd* pParent = NULL);   // standard constructor
	virtual ~CModeless();

// Dialog Data
	enum { IDD = IDD_MODELESS };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
   virtual void OnOK();
   virtual void OnCancel();
};
