#pragma once
#include "afxcmn.h"


// CImageListDlg dialog

class CImageListDlg : public CDialog
{
	DECLARE_DYNAMIC(CImageListDlg)

public:
	CImageListDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CImageListDlg();

// Dialog Data
	enum { IDD = IDD_NVC_MFC_CIMAGELIST_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
   virtual BOOL OnInitDialog();
protected:
   CImageList m_myImageList;

   enum PaintStyle
   {
      psDrawEx,
      psDrawIndirect,
      psExtractIcon,
      psOverlayImage,

      psCount
   };
   PaintStyle m_PaintStyle;
public:
   afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
public:
   afx_msg void OnMouseMove(UINT nFlags, CPoint point);
public:
   afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
public:
   afx_msg void OnPaint();
public:
   afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
public:
   afx_msg void OnMButtonDown(UINT nFlags, CPoint point);
};
