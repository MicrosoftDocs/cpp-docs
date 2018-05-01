// MyPropPage3.h : Declaration of the CMyPropPage3


#pragma once
#include "resource.h"       // main symbols
#include "NVC_ATL_Windowing.h"

// CMyPropPage3

class ATL_NO_VTABLE CMyPropPage3 :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CMyPropPage3, &CLSID_MyPropPage3>,
   public IPropertyPageImpl<CMyPropPage3>,
   public CDialogImpl<CMyPropPage3>
{
public:
   CMyPropPage3()
   {
      m_dwTitleID = IDS_TITLEMYPROPPAGE3;
      m_dwHelpFileID = IDS_HELPFILEMYPROPPAGE3;
      m_dwDocStringID = IDS_DOCSTRINGMYPROPPAGE3;
   }

   DECLARE_PROTECT_FINAL_CONSTRUCT()

   HRESULT FinalConstruct()
   {
      return S_OK;
   }

   void FinalRelease()
   {
   }

   enum {IDD = IDD_MYPROPPAGE3};

DECLARE_REGISTRY_RESOURCEID(IDR_MYPROPPAGE3)


BEGIN_COM_MAP(CMyPropPage3)
   COM_INTERFACE_ENTRY(IPropertyPage)
END_COM_MAP()

BEGIN_MSG_MAP(CMyPropPage3)
   CHAIN_MSG_MAP(IPropertyPageImpl<CMyPropPage3>)
END_MSG_MAP()

// Handler prototypes:
//  LRESULT MessageHandler(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
//  LRESULT CommandHandler(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled);
//  LRESULT NotifyHandler(int idCtrl, LPNMHDR pnmh, BOOL& bHandled);

   STDMETHOD(Apply)(void)
   {
      ATLTRACE(_T("CMyPropPage3::Apply\n"));
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


OBJECT_ENTRY_AUTO(__uuidof(MyPropPage3), CMyPropPage3)
