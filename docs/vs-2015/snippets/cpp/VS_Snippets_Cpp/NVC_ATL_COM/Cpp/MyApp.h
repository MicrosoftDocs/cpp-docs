// MyApp.h : Declaration of the CMyApp

#pragma once
#include "resource.h"       // main symbols

#include "NVC_ATL_COM.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif



// CMyApp

// <Snippet41>
class ATL_NO_VTABLE CMyApp :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CMyApp, &CLSID_MyApp>,
   public IMyApp
{
public:
   CMyApp()
   {
   }

   static void WINAPI ObjectMain(bool bStarting)
   {
      if (bStarting)
         ;// Perform custom initialization routines
      else
         ;// Perform custom termination routines
   }

   // Remainder of class declaration omitted.
// </Snippet41>

DECLARE_REGISTRY_RESOURCEID(IDR_MYAPP)


BEGIN_COM_MAP(CMyApp)
   COM_INTERFACE_ENTRY(IMyApp)
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

public:
   STDMETHOD(CreateDocument)(IDocument** ppDoc);
};

OBJECT_ENTRY_AUTO(__uuidof(MyApp), CMyApp)
