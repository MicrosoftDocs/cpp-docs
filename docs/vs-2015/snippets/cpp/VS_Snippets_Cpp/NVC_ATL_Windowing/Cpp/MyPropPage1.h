// MyPropPage1.h : Declaration of the CMyPropPage1


#pragma once
#include "resource.h"       // main symbols
#include "NVC_ATL_Windowing.h"

// CMyPropPage1

class ATL_NO_VTABLE CMyPropPage1 :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CMyPropPage1, &CLSID_MyPropPage1>,
   public IPropertyPageImpl<CMyPropPage1>,
   public CDialogImpl<CMyPropPage1>
{
public:
   CMyPropPage1()
   {
      m_dwTitleID = IDS_TITLEMYPROPPAGE1;
      m_dwHelpFileID = IDS_HELPFILEMYPROPPAGE1;
      m_dwDocStringID = IDS_DOCSTRINGMYPROPPAGE1;
   }

   DECLARE_PROTECT_FINAL_CONSTRUCT()

   HRESULT FinalConstruct()
   {
      return S_OK;
   }

   void FinalRelease()
   {
   }

   enum {IDD = IDD_MYPROPPAGE1};

DECLARE_REGISTRY_RESOURCEID(IDR_MYPROPPAGE1)


BEGIN_COM_MAP(CMyPropPage1)
   COM_INTERFACE_ENTRY(IPropertyPage)
END_COM_MAP()

BEGIN_MSG_MAP(CMyPropPage1)
   CHAIN_MSG_MAP(IPropertyPageImpl<CMyPropPage1>)
END_MSG_MAP()

// Handler prototypes:
//  LRESULT MessageHandler(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
//  LRESULT CommandHandler(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled);
//  LRESULT NotifyHandler(int idCtrl, LPNMHDR pnmh, BOOL& bHandled);

   STDMETHOD(Apply)(void)
   {
      ATLTRACE(_T("CMyPropPage1::Apply\n"));
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


OBJECT_ENTRY_AUTO(__uuidof(MyPropPage1), CMyPropPage1)
