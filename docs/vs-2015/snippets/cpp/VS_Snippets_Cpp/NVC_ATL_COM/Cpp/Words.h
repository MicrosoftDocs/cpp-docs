// Words.h : Declaration of the CWords

#pragma once
#include "resource.h"       // main symbols

#include "NVC_ATL_COM.h"
#include <string>
#include <vector>
#include "VCUE_Copy.h"
#include "VCUE_CopyString.h"

// <Snippet25>
// Store the data in a vector of std::strings
typedef std::vector< std::string >         ContainerType;

// The collection interface exposes the data as BSTRs
typedef BSTR                               CollectionExposedType;
typedef IWords                             CollectionInterface;

// Use IEnumVARIANT as the enumerator for VB compatibility
typedef VARIANT                            EnumeratorExposedType;
typedef IEnumVARIANT                       EnumeratorInterface;
// </Snippet25>

// <Snippet26>
// Typedef the copy classes using existing typedefs
typedef VCUE::GenericCopy<EnumeratorExposedType, ContainerType::value_type> EnumeratorCopyType;
typedef VCUE::GenericCopy<CollectionExposedType, ContainerType::value_type> CollectionCopyType;
// </Snippet26>

// <Snippet27>
typedef CComEnumOnSTL< EnumeratorInterface, &__uuidof(EnumeratorInterface), EnumeratorExposedType, EnumeratorCopyType, ContainerType > EnumeratorType;
typedef ICollectionOnSTLImpl< CollectionInterface, ContainerType, CollectionExposedType, CollectionCopyType, EnumeratorType > CollectionType;
// </Snippet27>

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif



// CWords

// <Snippet28>
class ATL_NO_VTABLE CWords :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CComCoClass<CWords, &CLSID_Words>,
   // 'CollectionType' replaces 'IWords' in next line
   public IDispatchImpl<CollectionType, &IID_IWords, &LIBID_NVC_ATL_COMLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
DECLARE_REGISTRY_RESOURCEID(IDR_WORDS)


BEGIN_COM_MAP(CWords)
   COM_INTERFACE_ENTRY(IWords)
   COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

// Remainder of class declaration omitted.
// </Snippet28>

// <Snippet29>
   CWords()
   {
       m_coll.push_back("this");
       m_coll.push_back("is");
       m_coll.push_back("a");
       m_coll.push_back("test");
   }
// </Snippet29>

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

OBJECT_ENTRY_AUTO(__uuidof(Words), CWords)
