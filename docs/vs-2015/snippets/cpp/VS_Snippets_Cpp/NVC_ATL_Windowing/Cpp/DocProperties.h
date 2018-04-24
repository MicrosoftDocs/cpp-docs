// DocProperties.h : Declaration of the CDocProperties


#pragma once
#include "resource.h"       // main symbols
#include "NVC_ATL_Windowing.h"

// <Snippet74>
// MSO.dll
#import <libid:2DF8D04C-5BFA-101B-BDE5-00AA0044DE52> version("2.2") \
   rename("RGB", "Rgb")   \
   rename("DocumentProperties", "documentproperties")   \
   rename("ReplaceText", "replaceText")   \
   rename("FindText", "findText")   \
   rename("GetObject", "getObject")   \
   raw_interfaces_only

// dte.olb
#import <libid:80CC9F66-E7D8-4DDD-85B6-D9E6CD0E93E2> \
   inject_statement("using namespace Office;")   \
   rename("ReplaceText", "replaceText")   \
   rename("FindText", "findText")   \
   rename("GetObject", "getObject")   \
   rename("SearchPath", "searchPath")   \
   raw_interfaces_only
// </Snippet74>

// CDocProperties

class ATL_NO_VTABLE CDocProperties :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CDocProperties, &CLSID_DocProperties>,
   public IPropertyPageImpl<CDocProperties>,
   public CDialogImpl<CDocProperties>
{

// <Snippet75>
typedef IPropertyPageImpl<CDocProperties> PPGBaseClass;
// </Snippet75>


public:
   CDocProperties()
   {
      m_dwTitleID = IDS_TITLEDOCUMENTPROPERTIES;
      m_dwHelpFileID = IDS_HELPFILEDOCUMENTPROPERTIES;
      m_dwDocStringID = IDS_DOCSTRINGDOCUMENTPROPERTIES;
   }

// <Snippet77>
   CComBSTR m_bstrFullName;  // The original name
   VARIANT_BOOL m_bReadOnly; // The original read-only state
// </Snippet77>

   DECLARE_PROTECT_FINAL_CONSTRUCT()

   HRESULT FinalConstruct()
   {
      return S_OK;
   }

   void FinalRelease()
   {
   }

   enum {IDD = IDD_DOCUMENTPROPERTIES};

DECLARE_REGISTRY_RESOURCEID(IDR_DOCUMENTPROPERTIES)


BEGIN_COM_MAP(CDocProperties)
   COM_INTERFACE_ENTRY(IPropertyPage)
END_COM_MAP()

// <Snippet73>
BEGIN_MSG_MAP(CDocProperties)
   COMMAND_HANDLER(IDC_NAME, EN_CHANGE, OnUIChange)
   COMMAND_HANDLER(IDC_READONLY, BN_CLICKED, OnUIChange)
   CHAIN_MSG_MAP(IPropertyPageImpl<CDocProperties>)
END_MSG_MAP()

   // Respond to changes in the UI to update the dirty status of the page
   LRESULT OnUIChange(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled)
   {
      wNotifyCode; wID; hWndCtl; bHandled;
      SetDirty(true);
      return 0;
   }
// </Snippet73>

// Handler prototypes:
//  LRESULT MessageHandler(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
//  LRESULT CommandHandler(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled);
//  LRESULT NotifyHandler(int idCtrl, LPNMHDR pnmh, BOOL& bHandled);

// <Snippet79>
   STDMETHOD(Apply)(void)
   {
      // If we don't have any objects, this method should not be called
      if (!m_ppUnk)
         return E_UNEXPECTED;

      // Use Apply to validate the user's settings and update the objects'
      // properties

      // Check whether we need to update the object
      // Quite important since standard property frame calls Apply
      // when it doesn't need to
      if (!m_bDirty)
         return S_OK;
      
      HRESULT hr = E_UNEXPECTED;

      // Get a pointer to the document
      CComQIPtr<EnvDTE::Document> pDoc(m_ppUnk[0]);
      if (!pDoc)
         return hr;
      
      // Get the read-only setting
      VARIANT_BOOL bReadOnly = IsDlgButtonChecked(IDC_READONLY) ? VARIANT_TRUE : VARIANT_FALSE;

      // Get the file name
      CComBSTR bstrName;
      if (!GetDlgItemText(IDC_NAME, bstrName.m_str))
         return E_FAIL;

      // Set the read-only property
      if (bReadOnly != m_bReadOnly)
      {
         hr = pDoc->put_ReadOnly(bReadOnly);
         if (FAILED(hr))
            return hr;
      }

      // Save the document
      if (bstrName != m_bstrFullName)
      {
         EnvDTE::vsSaveStatus status;
         hr = pDoc->Save(bstrName, &status);
         if (FAILED(hr))
            return hr;
      }

      // Clear the dirty status of the property page
      SetDirty(false);

      return S_OK;
   }
// </Snippet79>

// <Snippet76>
   STDMETHOD(SetObjects)(ULONG nObjects, IUnknown** ppUnk)
   {
      HRESULT hr = E_INVALIDARG;
      if (nObjects == 1)
      {
         CComQIPtr<EnvDTE::Document> pDoc(ppUnk[0]);
         if (pDoc)
            hr = PPGBaseClass::SetObjects(nObjects, ppUnk);
      }
      return hr;
   }
// </Snippet76>

// <Snippet78>
   STDMETHOD(Activate)(HWND hWndParent, LPCRECT prc, BOOL bModal)
   {
      // If we don't have any objects, this method should not be called
      // Note that OleCreatePropertyFrame will call Activate even if
      // a call to SetObjects fails, so this check is required
      if (!m_ppUnk)
         return E_UNEXPECTED;

      // Use Activate to update the property page's UI with information
      // obtained from the objects in the m_ppUnk array

      // We update the page to display the Name and ReadOnly properties
      // of the document

      // Call the base class
      HRESULT hr = PPGBaseClass::Activate(hWndParent, prc, bModal);
      if (FAILED(hr))
         return hr;

      // Get the EnvDTE::Document pointer
      CComQIPtr<EnvDTE::Document> pDoc(m_ppUnk[0]);
      if (!pDoc)
         return E_UNEXPECTED;
      
      // Get the FullName property
      hr = pDoc->get_FullName(&m_bstrFullName);
      if (FAILED(hr))
         return hr;

      // Set the text box so that the user can see the document name
      USES_CONVERSION;
      SetDlgItemText(IDC_NAME, CW2CT(m_bstrFullName));

      // Get the ReadOnly property
      m_bReadOnly = VARIANT_FALSE;
      hr = pDoc->get_ReadOnly(&m_bReadOnly);
      if (FAILED(hr))
         return hr;

      // Set the check box so that the user can see the document's read-only status
      CheckDlgButton(IDC_READONLY, m_bReadOnly ? BST_CHECKED : BST_UNCHECKED);

      return hr;
   }
// </Snippet78>
};


OBJECT_ENTRY_AUTO(__uuidof(DocProperties), CDocProperties)
