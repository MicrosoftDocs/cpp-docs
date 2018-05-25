#pragma once


// CMyFirstPage dialog

class CMyFirstPage : public CPropertyPage
{
   DECLARE_DYNAMIC(CMyFirstPage)

public:
   CMyFirstPage();
   virtual ~CMyFirstPage();

// Dialog Data
   enum { IDD = IDD_PROPPAGE1 };

protected:
   virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

   DECLARE_MESSAGE_MAP()
public:
   int m_nMember1;
public:
   int m_nMember2;
};
