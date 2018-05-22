#pragma once

// MyAxUIPpg.h : Declaration of the CMyAxUIPropPage property page class.


// CMyAxUIPropPage : See MyAxUIPpg.cpp for implementation.

class CMyAxUIPropPage : public COlePropertyPage
{
   DECLARE_DYNCREATE(CMyAxUIPropPage)
   DECLARE_OLECREATE_EX(CMyAxUIPropPage)

// Constructor
public:
   CMyAxUIPropPage();

// Dialog Data
   enum { IDD = IDD_PROPPAGE_NVC_MFC_AXUI };

// Implementation
protected:
   virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Message maps
protected:
   DECLARE_MESSAGE_MAP()
public:
   CString m_caption;
};

