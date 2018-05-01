// MyDataSource.cpp : implementation file
//

#include "stdafx.h"
#include "MFCListView.h"
#include "MFCListViewDoc.h"
#include "MyListView.h"
#include "MyDataSource.h"


// CMyDataSource

IMPLEMENT_DYNAMIC(CMyDataSource, COleDataSource)


CMyDataSource::CMyDataSource() : m_pParent(NULL)
{
}

void CMyDataSource::Initialize(LPNMLISTVIEW pNMLV, CMyListView* pParent)
{
   ASSERT(NULL == m_pParent);

   m_pParent = pParent;
   m_NMLV = *pNMLV;
}

CMyDataSource::~CMyDataSource()
{
}


BEGIN_MESSAGE_MAP(CMyDataSource, COleDataSource)
END_MESSAGE_MAP()



// CMyDataSource message handlers

BOOL CMyDataSource::OnRenderData(LPFORMATETC lpFormatEtc, LPSTGMEDIUM lpStgMedium)
{
   BOOL bSuccess = FALSE;

   bSuccess = COleDataSource::OnRenderData(lpFormatEtc, lpStgMedium);
   if (!bSuccess)
   {
      LVITEM lvi = {0};
      TCHAR pszText[64];
      pszText[0] = _T('\0');

      lvi.mask = LVIF_TEXT;
      lvi.iItem = m_NMLV.iItem;
      lvi.pszText = pszText;
      lvi.cchTextMax = sizeof(pszText) / sizeof(TCHAR);
      if (m_pParent->GetListCtrl().GetItem(&lvi))
      {
         lpStgMedium->tymed = TYMED_HGLOBAL;
         lpStgMedium->hGlobal = GlobalAlloc(GMEM_FIXED, sizeof(pszText));
         if (NULL != lpStgMedium->hGlobal)
         {
// for some reason code analysis thinks the hGlobal isn't big enough, though it is
            if (NULL != memcpy(lpStgMedium->hGlobal, pszText, sizeof(pszText)))
            {
               bSuccess = TRUE;			
            }
         }
      }
   }

   return bSuccess;
}
