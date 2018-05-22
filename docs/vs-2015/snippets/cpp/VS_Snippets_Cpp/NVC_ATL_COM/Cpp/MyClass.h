// MyClass.h : Declaration of the CMyClass2

#pragma once
#include "resource.h"       // main symbols

#include "NVC_ATL_COM.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

// <Snippet55>
class ATL_NO_VTABLE CMyClass :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CMyClass, &CLSID_MyClass>,
   public IDispatchImpl<IMyClass, &IID_IMyClass, &LIBID_NVC_ATL_COMLib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
   public IDispatchImpl<IMyDualInterface, &__uuidof(IMyDualInterface), &LIBID_NVC_ATL_COMLib, /* wMajor = */ 1, /* wMinor = */ 0>
{
public:
   DECLARE_CLASSFACTORY()

   // Remainder of class declaration omitted
// </Snippet55>

   CMyClass()
   {
   }

   DECLARE_REGISTRY_RESOURCEID(IDR_MYCLASS)

   DECLARE_NOT_AGGREGATABLE(CMyClass)

   BEGIN_COM_MAP(CMyClass)
      COM_INTERFACE_ENTRY(IMyClass)
      COM_INTERFACE_ENTRY2(IDispatch, IMyDualInterface)
      COM_INTERFACE_ENTRY(IMyDualInterface)
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


   // IMyDualInterface Methods
public:
};

OBJECT_ENTRY_AUTO(__uuidof(MyClass), CMyClass)


// <Snippet3>
class CMyLicense
{
protected:
   static BOOL VerifyLicenseKey(BSTR bstr)
   {
      USES_CONVERSION;
      return !lstrcmp(OLE2T(bstr), _T("My run-time license key"));
   }

   static BOOL GetLicenseKey(DWORD /*dwReserved*/, BSTR* pBstr) 
   {
      USES_CONVERSION;
      *pBstr = SysAllocString( T2OLE(_T("My run-time license key"))); 
      return TRUE;
   }

   static BOOL IsLicenseValid() {  return TRUE; }
};
// </Snippet3>

// CMyClass2

// <Snippet2>
// <Snippet53>
class ATL_NO_VTABLE CMyClass2 :
// </Snippet53>
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CMyClass2, &CLSID_MyClass>,
   public IDispatchImpl<IMyClass, &IID_IMyClass, &LIBID_NVC_ATL_COMLib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
   public IDispatchImpl<IMyDualInterface, &__uuidof(IMyDualInterface), &LIBID_NVC_ATL_COMLib, /* wMajor = */ 1, /* wMinor = */ 0>
{
public:
   DECLARE_CLASSFACTORY2(CMyLicense)

   // Remainder of class declaration omitted
   // </Snippet2>

   CMyClass2()
   {
   }

   DECLARE_REGISTRY_RESOURCEID(IDR_MYCLASS)

   DECLARE_NOT_AGGREGATABLE(CMyClass2)

   BEGIN_COM_MAP(CMyClass2)
      COM_INTERFACE_ENTRY(IMyClass)
// <Snippet23>
      COM_INTERFACE_ENTRY2(IDispatch, IMyDualInterface)
// </Snippet23>
      COM_INTERFACE_ENTRY(IMyDualInterface)
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


   // IMyDualInterface Methods
public:
};

OBJECT_ENTRY_AUTO(__uuidof(MyClass), CMyClass2)
