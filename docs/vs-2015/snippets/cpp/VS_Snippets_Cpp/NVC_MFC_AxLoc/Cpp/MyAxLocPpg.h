#pragma once

// MyAxLocPpg.h : Declaration of the CMyAxLocPropPage property page class.


// CMyAxLocPropPage : See MyAxLocPpg.cpp for implementation.

class CMyAxLocPropPage : public COlePropertyPage
{
   DECLARE_DYNCREATE(CMyAxLocPropPage)
   DECLARE_OLECREATE_EX(CMyAxLocPropPage)

// Constructor
public:
   CMyAxLocPropPage();

// Dialog Data
   enum { IDD = IDD_PROPPAGE_NVC_MFC_AXLOC };

// Implementation
protected:
   virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Message maps
protected:
   DECLARE_MESSAGE_MAP()

public:
   HINSTANCE GetLocalizedResourceHandle(LCID) { return NULL; }
   virtual void OnSetPageSite();
};

