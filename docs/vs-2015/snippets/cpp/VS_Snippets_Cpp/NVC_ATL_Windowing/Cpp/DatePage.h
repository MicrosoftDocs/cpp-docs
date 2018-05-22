// DatePage.h : Declaration of the CDatePage


#pragma once
#include "resource.h"       // main symbols
#include "NVC_ATL_Windowing.h"

// CDatePage

class ATL_NO_VTABLE CDatePage :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CDatePage, &CLSID_DatePage>,
   public IPropertyPageImpl<CDatePage>,
   public CDialogImpl<CDatePage>
{
public:
   CDatePage()
   {
      m_dwTitleID = IDS_TITLEDATEPAGE;
      m_dwHelpFileID = IDS_HELPFILEDATEPAGE;
      m_dwDocStringID = IDS_DOCSTRINGDATEPAGE;
   }

   DECLARE_PROTECT_FINAL_CONSTRUCT()

   HRESULT FinalConstruct()
   {
      return S_OK;
   }

   void FinalRelease()
   {
   }

   enum {IDD = IDD_DATEPAGE};

DECLARE_REGISTRY_RESOURCEID(IDR_DATEPAGE)

DECLARE_NOT_AGGREGATABLE(CDatePage)

BEGIN_COM_MAP(CDatePage)
   COM_INTERFACE_ENTRY(IPropertyPage)
END_COM_MAP()

BEGIN_MSG_MAP(CDatePage)
   CHAIN_MSG_MAP(IPropertyPageImpl<CDatePage>)
END_MSG_MAP()

// Handler prototypes:
//  LRESULT MessageHandler(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
//  LRESULT CommandHandler(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled);
//  LRESULT NotifyHandler(int idCtrl, LPNMHDR pnmh, BOOL& bHandled);

   STDMETHOD(Apply)(void)
   {
      ATLTRACE(_T("CDatePage::Apply\n"));
      for (UINT i = 0; i < m_nObjects; i++)
      {
         // Do something interesting here
         // ICircCtl* pCirc;
         // m_ppUnk[i]->QueryInterface(IID_ICircCtl, (void**)&pCirc);
         // pCirc->put_Caption(CComBSTR("something special"));
         // pCirc->Release();
      }
      m_bDirty = FALSE;
      return S_OK;
   }
};


OBJECT_ENTRY_AUTO(__uuidof(DatePage), CDatePage)
