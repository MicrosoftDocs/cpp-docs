// MyCompositeProps.h : Declaration of the CMyCompositeProps


#pragma once
#include "resource.h"       // main symbols
#include "NVC_ATL_COM.h"

// CMyCompositeProps

class ATL_NO_VTABLE CMyCompositeProps :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CMyCompositeProps, &CLSID_MyCompositeProps>,
   public IPropertyPageImpl<CMyCompositeProps>,
   public CDialogImpl<CMyCompositeProps>
{
public:
   CMyCompositeProps()
   {
      m_dwTitleID = IDS_TITLEMYCOMPOSITEPROPS;
      m_dwHelpFileID = IDS_HELPFILEMYCOMPOSITEPROPS;
      m_dwDocStringID = IDS_DOCSTRINGMYCOMPOSITEPROPS;
   }

   DECLARE_PROTECT_FINAL_CONSTRUCT()

   HRESULT FinalConstruct()
   {
      return S_OK;
   }

   void FinalRelease()
   {
   }

   enum {IDD = IDD_MYCOMPOSITEPROPS};

DECLARE_REGISTRY_RESOURCEID(IDR_MYCOMPOSITEPROPS)

DECLARE_NOT_AGGREGATABLE(CMyCompositeProps)

BEGIN_COM_MAP(CMyCompositeProps)
   COM_INTERFACE_ENTRY(IPropertyPage)
END_COM_MAP()

BEGIN_MSG_MAP(CMyCompositeProps)
   CHAIN_MSG_MAP(IPropertyPageImpl<CMyCompositeProps>)
END_MSG_MAP()

// Handler prototypes:
//  LRESULT MessageHandler(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
//  LRESULT CommandHandler(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled);
//  LRESULT NotifyHandler(int idCtrl, LPNMHDR pnmh, BOOL& bHandled);

   STDMETHOD(Apply)(void)
   {
      ATLTRACE(_T("CMyCompositeProps::Apply\n"));
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


OBJECT_ENTRY_AUTO(__uuidof(MyCompositeProps), CMyCompositeProps)
