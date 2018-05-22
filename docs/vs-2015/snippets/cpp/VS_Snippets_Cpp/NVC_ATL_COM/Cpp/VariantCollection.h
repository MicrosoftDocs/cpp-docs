// VariantCollection.h : Declaration of the CVariantCollection

#pragma once
#include "resource.h"       // main symbols

#include "NVC_ATL_COM.h"
#include <vector>


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

// <Snippet34>
template <class EnumType, class CollType>
HRESULT CreateSTLEnumerator(IUnknown** ppUnk, IUnknown* pUnkForRelease, 
   CollType& collection)
{
   if (ppUnk == NULL)
      return E_POINTER;
   *ppUnk = NULL;

   CComObject<EnumType>* pEnum = NULL;
   HRESULT hr = CComObject<EnumType>::CreateInstance(&pEnum);

   if (FAILED(hr))
      return hr;

   hr = pEnum->Init(pUnkForRelease, collection);

   if (SUCCEEDED(hr))
      hr = pEnum->QueryInterface(ppUnk);

   if (FAILED(hr))
      delete pEnum;

   return hr;
} // CreateSTLEnumerator
// </Snippet34>

// CVariantCollection

// <Snippet35>
typedef CComEnumOnSTL<IEnumVARIANT, &IID_IEnumVARIANT, VARIANT, _Copy<VARIANT>,
   std::vector<CComVariant> > VarVarEnum;

class ATL_NO_VTABLE CVariantCollection :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CVariantCollection, &CLSID_VariantCollection>,
   public IDispatchImpl<IVariantCollection, &IID_IVariantCollection, &LIBID_NVC_ATL_COMLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
   std::vector<CComVariant> m_vec;

   STDMETHOD(get__NewEnum)(IUnknown** ppUnk)
   {
      return CreateSTLEnumerator<VarVarEnum>(ppUnk, this, m_vec);
   }

   // Remainder of class declaration omitted.
// </Snippet35>

public:
   CVariantCollection()
   {
   }

DECLARE_REGISTRY_RESOURCEID(IDR_VARIANTCOLLECTION)


BEGIN_COM_MAP(CVariantCollection)
   COM_INTERFACE_ENTRY(IVariantCollection)
   COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



   DECLARE_PROTECT_FINAL_CONSTRUCT()

   HRESULT FinalConstruct()
   {
      return S_OK;
   }

   void FinalRelease()
   {
   }

public:

};

OBJECT_ENTRY_AUTO(__uuidof(VariantCollection), CVariantCollection)
