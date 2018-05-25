#pragma once

#ifdef _WIN32_WCE
#error "COlePropertyPage is not supported for Windows CE."
#endif 

// CAddtlPropPage : Property page dialog

class CAddtlPropPage : public COlePropertyPage
{
   DECLARE_DYNCREATE(CAddtlPropPage)
   DECLARE_OLECREATE_EX(CAddtlPropPage)

// Constructors
public:
   CAddtlPropPage();

// Dialog Data
   enum { IDD = IDD_ADDTLPROPPAGE };

// Implementation
protected:
   virtual void DoDataExchange(CDataExchange* pDX);        // DDX/DDV support

// Message maps
protected:
   DECLARE_MESSAGE_MAP()
};
