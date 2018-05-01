// ThisExample.h : Declaration of the CThisExample

#pragma once
#include "resource.h"       // main symbols

#include "NVC_ATL_Windowing.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif



// CThisExample

class ATL_NO_VTABLE CThisExample :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CThisExample, &CLSID_ThisExample>,
   public ISupportErrorInfo,
   public IDispatchImpl<IThisExample, &IID_IThisExample, &LIBID_NVC_ATL_WindowingLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
   CThisExample()
   {
   }

DECLARE_REGISTRY_RESOURCEID(IDR_THISEXAMPLE)

// <Snippet109>
BEGIN_COM_MAP(CThisExample)
   COM_INTERFACE_ENTRY(IThisExample)
   COM_INTERFACE_ENTRY(IDispatch)
   COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()
// </Snippet109>

// ISupportsErrorInfo
   STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);


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

OBJECT_ENTRY_AUTO(__uuidof(ThisExample), CThisExample)

class CExampleDispatch : 
   public CComObjectRoot,
   public IDispatchImpl<IExample, &IID_IExample, &LIBID_NVC_ATL_WindowingLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
   CExampleDispatch() {}

   BEGIN_COM_MAP(CExampleDispatch)
      COM_INTERFACE_ENTRY(IExample)
      COM_INTERFACE_ENTRY(IDispatch)
   END_COM_MAP()
};

class ATL_NO_VTABLE CExample :
   public CComCoClass<CExample, &CLSID_Example>,
   public ISupportErrorInfo,
   public IExampleBase,
   public CExampleDispatch
{
public:
   CExample()
   {
// <Snippet140>
      _ATL_FUNC_INFO info = {CC_STDCALL, VT_EMPTY, 2, {VT_I4, VT_BSTR} };
// </Snippet140>
      info;
   }

// <Snippet117>
BEGIN_COM_MAP(CExample)
   COM_INTERFACE_ENTRY(IExample)
   COM_INTERFACE_ENTRY_IID(IID_IDispatch, CExampleDispatch)
   COM_INTERFACE_ENTRY(IExampleBase)
   COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()
// </Snippet117>

// <Snippet122>
   BEGIN_MSG_MAP(CExample)
   END_MSG_MAP()
// </Snippet122>

// ISupportsErrorInfo
   STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);


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

class CEntry2ExampleBase : 
   public CComObjectRoot,
   public IDispatchImpl<IEntry2ExampleBase, &IID_IEntry2ExampleBase, &LIBID_NVC_ATL_WindowingLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
   CEntry2ExampleBase() {}

   BEGIN_COM_MAP(CEntry2ExampleBase)
      COM_INTERFACE_ENTRY(IEntry2ExampleBase)
      COM_INTERFACE_ENTRY(IDispatch)
   END_COM_MAP()
};

// <Snippet118>
class ATL_NO_VTABLE CEntry2Example :
   public CEntry2ExampleBase, // CEntry2ExampleBase derives from IDispatch
   public IDispatchImpl<IEntry2Example, &IID_IEntry2Example, &LIBID_NVC_ATL_WindowingLib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
   public CComCoClass<CEntry2Example, &CLSID_Entry2Example>
{
public:
   CEntry2Example()
   {
   }

BEGIN_COM_MAP(CEntry2Example)
   COM_INTERFACE_ENTRY(IEntry2Example)
   COM_INTERFACE_ENTRY2(IDispatch, IEntry2Example)
END_COM_MAP()
};
// </Snippet118>

// <Snippet121>
class ATL_NO_VTABLE CNoAggClass :
   public CComObjectRoot,
   public CComCoClass<CNoAggClass, &CLSID_NoAggClass>
{
public:
   CNoAggClass()
   {
   }

   DECLARE_NOT_AGGREGATABLE(CNoAggClass)
};
// </Snippet121>

// <Snippet123>
class ATL_NO_VTABLE CMyDescribedClass :
   public CComObjectRoot,
   public CComCoClass<CMyDescribedClass, &CLSID_MyDescribedClass>
{
public:
   CMyDescribedClass()
   {
   }

   // Override CComCoClass::GetObjectDescription
   DECLARE_OBJECT_DESCRIPTION("My Described Object 1.0")
};
// </Snippet123>

// <Snippet125>
class ATL_NO_VTABLE COnlyAggClass :
   public CComObjectRoot,
   public CComCoClass<COnlyAggClass, &CLSID_OnlyAggClass>
{
public:
   COnlyAggClass()
   {
   }

   DECLARE_ONLY_AGGREGATABLE(COnlyAggClass)
};
// </Snippet125>