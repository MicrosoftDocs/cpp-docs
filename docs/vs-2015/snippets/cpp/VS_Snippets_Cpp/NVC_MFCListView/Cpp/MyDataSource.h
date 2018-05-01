
#pragma once


// CMyDataSource command target

class CMyDataSource : public COleDataSource
{
   DECLARE_DYNAMIC(CMyDataSource)

public:
   CMyDataSource();
   virtual ~CMyDataSource();

   void Initialize(LPNMLISTVIEW pNMLV, CMyListView* pParent);

protected:
   DECLARE_MESSAGE_MAP()

   NMLISTVIEW m_NMLV;
   CMyListView* m_pParent;

public:
   virtual BOOL OnRenderData(LPFORMATETC lpFormatEtc, LPSTGMEDIUM lpStgMedium);
};


