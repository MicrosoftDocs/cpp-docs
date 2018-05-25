#pragma once
#include "afxwin.h"
#include <afxdlgs.h>


// CMyFileDlg dialog
class CMyFileDlg : public CDialog
{
// Construction
public:
    CMyFileDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
    enum { IDD = IDD_NVC_MFC_CFILEDIALOG_DIALOG };

    protected:
    virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
    HICON m_hIcon;

    // Used for examples
    CFileDialog * m_myFileDialogPtr;

    // Generated message map functions
    virtual BOOL OnInitDialog();
    afx_msg void OnPaint();
    afx_msg HCURSOR OnQueryDragIcon();
    DECLARE_MESSAGE_MAP()

private:
    void CreateOpenDialog();
    void CreateSaveDialog();
    void DeleteDialog();
    void RunTests();
};
