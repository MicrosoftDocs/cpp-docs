#pragma once


// CMySecondPage dialog

class CMySecondPage : public CPropertyPage
{
   DECLARE_DYNAMIC(CMySecondPage)

public:
   CMySecondPage();
   virtual ~CMySecondPage();

// Dialog Data
   enum { IDD = IDD_PROPPAGE2 };

protected:
   virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

   DECLARE_MESSAGE_MAP()
public:
   CString m_strMember3;
public:
   CString m_strMember4;
};
