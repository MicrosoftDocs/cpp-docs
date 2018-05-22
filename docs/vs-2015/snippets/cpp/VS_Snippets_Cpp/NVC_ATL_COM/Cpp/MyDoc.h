// MyDoc.h : Declaration of the CMyDoc

#pragma once
#include "resource.h"       // main symbols

#include "NVC_ATL_COM.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif



// CMyDoc

// <Snippet12>
class ATL_NO_VTABLE CMyDoc :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CMyDoc, &CLSID_MyDoc>,
   public IDocument
{
public:
   DECLARE_OBJECT_DESCRIPTION("My Document Object 1.0")

   // Remainder of class declaration omitted.
// </Snippet12>

   CMyDoc()
   {
   }

DECLARE_REGISTRY_RESOURCEID(IDR_MYDOC)

DECLARE_NOT_AGGREGATABLE(CMyDoc)

BEGIN_COM_MAP(CMyDoc)
   COM_INTERFACE_ENTRY(IDocument)
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

OBJECT_ENTRY_AUTO(__uuidof(MyDoc), CMyDoc)
