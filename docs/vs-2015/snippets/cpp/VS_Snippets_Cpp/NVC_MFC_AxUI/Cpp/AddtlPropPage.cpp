// AddtlPropPage.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFC_AxUI.h"
#include "AddtlPropPage.h"


// CAddtlPropPage dialog

IMPLEMENT_DYNCREATE(CAddtlPropPage, COlePropertyPage)



// Message map

BEGIN_MESSAGE_MAP(CAddtlPropPage, COlePropertyPage)
END_MESSAGE_MAP()



// Initialize class factory and guid

// {CC036C55-F641-45EF-9260-007FCAEE7A1C}
IMPLEMENT_OLECREATE_EX(CAddtlPropPage, "NVC_MFC_AxUI.AddtlPropPage",
   0xcc036c55, 0xf641, 0x45ef, 0x92, 0x60, 0, 0x7f, 0xca, 0xee, 0x7a, 0x1c)



// CAddtlPropPage::CAddtlPropPageFactory::UpdateRegistry -
// Adds or removes system registry entries for CAddtlPropPage

// <Snippet33>
BOOL CAddtlPropPage::CAddtlPropPageFactory::UpdateRegistry(BOOL bRegister)
{
   if (bRegister)
      return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
         m_clsid, IDS_SAMPLE_ADDPAGE);
   else
      return AfxOleUnregisterClass(m_clsid, NULL);
}
// </Snippet33>


// CAddtlPropPage::CAddtlPropPage - Constructor

// <Snippet34>
CAddtlPropPage::CAddtlPropPage() :
   COlePropertyPage(IDD, IDS_SAMPLE_ADDPPG_CAPTION)
{

}
// </Snippet34>


// CAddtlPropPage::DoDataExchange - Moves data between page and properties

void CAddtlPropPage::DoDataExchange(CDataExchange* pDX)
{
   DDP_PostProcessing(pDX);
}



// CAddtlPropPage message handlers
