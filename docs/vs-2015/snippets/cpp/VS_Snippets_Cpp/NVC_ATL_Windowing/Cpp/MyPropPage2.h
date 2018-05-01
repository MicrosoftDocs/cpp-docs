// MyPropPage2.h : Declaration of the CMyPropPage2


#pragma once
#include "resource.h"       // main symbols
#include "NVC_ATL_Windowing.h"

// CMyPropPage2

class ATL_NO_VTABLE CMyPropPage2 :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CMyPropPage2, &CLSID_MyPropPage2>,
   public IPropertyPageImpl<CMyPropPage2>,
   public CDialogImpl<CMyPropPage2>
{
public:
   CMyPropPage2()
   {
      m_dwTitleID = IDS_TITLEMYPROPPAGE2;
      m_dwHelpFileID = IDS_HELPFILEMYPROPPAGE2;
      m_dwDocStringID = IDS_DOCSTRINGMYPROPPAGE2;
   }

   DECLARE_PROTECT_FINAL_CONSTRUCT()

   HRESULT FinalConstruct()
   {
      return S_OK;
   }

   void FinalRelease()
   {
   }

   enum {IDD = IDD_MYPROPPAGE2};

DECLARE_REGISTRY_RESOURCEID(IDR_MYPROPPAGE2)


BEGIN_COM_MAP(CMyPropPage2)
   COM_INTERFACE_ENTRY(IPropertyPage)
END_COM_MAP()

BEGIN_MSG_MAP(CMyPropPage2)
   CHAIN_MSG_MAP(IPropertyPageImpl<CMyPropPage2>)
END_MSG_MAP()

// Handler prototypes:
//  LRESULT MessageHandler(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
//  LRESULT CommandHandler(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled);
//  LRESULT NotifyHandler(int idCtrl, LPNMHDR pnmh, BOOL& bHandled);

   STDMETHOD(Apply)(void)
   {
      ATLTRACE(_T("CMyPropPage2::Apply\n"));
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


OBJECT_ENTRY_AUTO(__uuidof(MyPropPage2), CMyPropPage2)
