#pragma once

// MFCActiveXControlPropPage.h : Declaration of the 
// CMFCActiveXControlPropPage property page class.


// CMFCActiveXControlPropPage : See MFCActiveXControlPropPage.cpp 
// for implementation.

class CMFCActiveXControlPropPage : public COlePropertyPage
{
   DECLARE_DYNCREATE(CMFCActiveXControlPropPage)
   DECLARE_OLECREATE_EX(CMFCActiveXControlPropPage)

// Constructor
public:
   CMFCActiveXControlPropPage();

// Dialog Data
   enum { IDD = IDD_PROPPAGE_MFCACTIVEXCONTROL };

// Implementation
protected:
   virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Message maps
protected:
   DECLARE_MESSAGE_MAP()
};

