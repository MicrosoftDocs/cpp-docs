// OtherObject.h : Declaration of the COtherObject

#pragma once
#include "resource.h"       // main symbols

#include "NVC_ATL_Windowing.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif



// COtherObject

class ATL_NO_VTABLE COtherObject :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<COtherObject, &CLSID_OtherObject>,
   public IDispatchImpl<IOtherObject, &IID_IOtherObject, &LIBID_NVC_ATL_WindowingLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
   COtherObject()
   {
   }

DECLARE_REGISTRY_RESOURCEID(IDR_OTHEROBJECT)


BEGIN_COM_MAP(COtherObject)
   COM_INTERFACE_ENTRY(IOtherObject)
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

OBJECT_ENTRY_AUTO(__uuidof(OtherObject), COtherObject)

class CBase : public CComObjectRoot
{
public:
   CBase() {}
   BEGIN_COM_MAP(CBase)
   END_COM_MAP()
};

class ATL_NO_VTABLE CThisObject :
   public IUnknown,
   public CBase
{
public:
   CThisObject()
   {
   }

// <Snippet111>
BEGIN_COM_MAP(CThisObject)
   COM_INTERFACE_ENTRY(IUnknown)
   COM_INTERFACE_ENTRY_CHAIN(CBase)
END_COM_MAP()
// </Snippet111>


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

class ATL_NO_VTABLE COuterObject :
   public IDispatchImpl<IOuterObject, &IID_IOuterObject, &LIBID_NVC_ATL_WindowingLib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
   public CBase
{
public:
   COuterObject()
   {
   }

// <Snippet116>
BEGIN_COM_MAP(COuterObject)
   COM_INTERFACE_ENTRY2(IDispatch, IOuterObject)
   COM_INTERFACE_ENTRY_CHAIN(CBase)
END_COM_MAP()
// </Snippet116>


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