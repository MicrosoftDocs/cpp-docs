// PolyProp.h : Declaration of the CPolyProp


#pragma once
#include "resource.h"       // main symbols
#include "NVC_ATL_Windowing.h"

// CPolyProp

// <Snippet119>
class ATL_NO_VTABLE CPolyProp :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CPolyProp, &CLSID_PolyProp>,
   public IPropertyPageImpl<CPolyProp>,
   public CDialogImpl<CPolyProp>
{
public:
BEGIN_COM_MAP(CPolyProp)
   COM_INTERFACE_ENTRY(IPropertyPage)
END_COM_MAP()

BEGIN_MSG_MAP(CPolyProp)
   COMMAND_HANDLER(IDC_SIDES, EN_CHANGE, OnEnChangeSides)
   CHAIN_MSG_MAP(IPropertyPageImpl<CPolyProp>)
END_MSG_MAP()

   // When a CPolyProp object receives a WM_COMMAND message identified 
   // by IDC_SIDES and EN_CHANGE, the message is directed to 
   // CPolyProp::OnEnChangeSides for the actual processing.
   LRESULT OnEnChangeSides(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, 
      BOOL& /*bHandled*/);
// </Snippet119>

   CPolyProp()
   {
      m_dwTitleID = IDS_TITLEPOLYPROP;
      m_dwHelpFileID = IDS_HELPFILEPOLYPROP;
      m_dwDocStringID = IDS_DOCSTRINGPOLYPROP;
   }

   DECLARE_PROTECT_FINAL_CONSTRUCT()

   HRESULT FinalConstruct()
   {
      return S_OK;
   }

   void FinalRelease()
   {
   }

   enum {IDD = IDD_POLYPROP};

DECLARE_REGISTRY_RESOURCEID(IDR_POLYPROP)


// Handler prototypes:
//  LRESULT MessageHandler(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
//  LRESULT CommandHandler(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled);
//  LRESULT NotifyHandler(int idCtrl, LPNMHDR pnmh, BOOL& bHandled);

// <Snippet58>
   STDMETHOD(Apply)(void)
   {
      USES_CONVERSION;
      ATLTRACE(_T("CPolyProp::Apply\n"));
      for (UINT i = 0; i < m_nObjects; i++)
      {
         CComQIPtr<IPolyCtl, &IID_IPolyCtl> pPoly(m_ppUnk[i]);
         short nSides = (short)GetDlgItemInt(IDC_SIDES);
         if FAILED(pPoly->put_Sides(nSides))
         {
            CComPtr<IErrorInfo> pError;
            CComBSTR strError;
            GetErrorInfo(0, &pError);
            pError->GetDescription(&strError);
            MessageBox(OLE2T(strError), _T("Error"), MB_ICONEXCLAMATION);
            return E_FAIL;
         }
      }
      m_bDirty = FALSE;
      return S_OK;
   }
// </Snippet58>
};


OBJECT_ENTRY_AUTO(__uuidof(PolyProp), CPolyProp)
