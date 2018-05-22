// VariantArrayCollection.h : Declaration of the CVariantArrayCollection

#pragma once
#include "resource.h"       // main symbols

#include "NVC_ATL_COM.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

// <Snippet32>
template <class EnumType, class ElementType>
HRESULT CreateEnumerator(IUnknown** ppUnk, ElementType* begin, ElementType* end,
   IUnknown* pUnk, CComEnumFlags flags)
{
   if (ppUnk == NULL)
      return E_POINTER;
   *ppUnk = NULL;

   CComObject<EnumType>* pEnum = NULL;
   HRESULT hr = CComObject<EnumType>::CreateInstance(&pEnum);

   if (FAILED(hr))
      return hr;

   hr = pEnum->Init(begin, end, pUnk, flags);

   if (SUCCEEDED(hr))
      hr = pEnum->QueryInterface(ppUnk);

   if (FAILED(hr))
      delete pEnum;

   return hr;
} // CreateEnumerator
// </Snippet32>

// CVariantArrayCollection

// <Snippet33>
typedef CComEnum<IEnumVARIANT, &IID_IEnumVARIANT, VARIANT, _Copy<VARIANT> > VarArrEnum;

class ATL_NO_VTABLE CVariantArrayCollection :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CVariantArrayCollection, &CLSID_VariantArrayCollection>,
   public IDispatchImpl<IVariantArrayCollection, &IID_IVariantArrayCollection, &LIBID_NVC_ATL_COMLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
VARIANT m_arr[3];
public:
    STDMETHOD(get__NewEnum)(IUnknown** ppUnk)
    {
        return CreateEnumerator<VarArrEnum>(ppUnk, &m_arr[0], &m_arr[3], this, 
           AtlFlagNoCopy);
    }

    // Remainder of class declaration omitted.
 // </Snippet33>

public:
   CVariantArrayCollection()
   {
   }

DECLARE_REGISTRY_RESOURCEID(IDR_VARIANTARRAYCOLLECTION)


BEGIN_COM_MAP(CVariantArrayCollection)
   COM_INTERFACE_ENTRY(IVariantArrayCollection)
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

OBJECT_ENTRY_AUTO(__uuidof(VariantArrayCollection), CVariantArrayCollection)
