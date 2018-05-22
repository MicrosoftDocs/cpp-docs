#pragma once

// MyAxOptPpg.h : Declaration of the CMyAxOptPropPage property page class.


// CMyAxOptPropPage : See MyAxOptPpg.cpp for implementation.

class CMyAxOptPropPage : public COlePropertyPage
{
   DECLARE_DYNCREATE(CMyAxOptPropPage)
   DECLARE_OLECREATE_EX(CMyAxOptPropPage)

// Constructor
public:
   CMyAxOptPropPage();

// Dialog Data
   enum { IDD = IDD_PROPPAGE_NVC_MFC_AXOpt };

// Implementation
protected:
   virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Message maps
protected:
   DECLARE_MESSAGE_MAP()
};

