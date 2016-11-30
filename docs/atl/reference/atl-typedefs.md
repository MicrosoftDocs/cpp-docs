---
title: "ATL Typedefs | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "index-page "
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "typedefs, ATL"
  - "typedefs"
  - "ATL, typedefs"
ms.assetid: 7dd05baa-3efb-4e3b-af23-793c610f4560
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# ATL Typedefs
The Active Template Library includes the following typedefs.  
  
|||  
|-|-|  
|[_ATL_BASE_MODULE](#_atl_base_module)|Defined as a typedef based on [_ATL_BASE_MODULE70](../../atl/reference/atl-base-module70-structure.md).|  
|[_ATL_COM_MODULE](#_atl_com_module)|Defined as a typedef based on [_ATL_COM_MODULE70](../../atl/reference/atl-com-module70-structure.md).|  
|[_ATL_MODULE](#_atl_module)|Defined as a typedef based on [_ATL_MODULE70](../../atl/reference/atl-module70-structure.md).|  
|[_ATL_WIN_MODULE](#_atl_win_module)|Defined as a typedef based on [_ATL_WIN_MODULE70](../../atl/reference/atl-win-module70-structure.md)|  
|[ATL_URL_PORT](#atl_url_port)|The type used by [CUrl](../../atl/reference/curl-class.md) for specifying a port number.|  
|[CComDispatchDriver](#ccomdispatchdriver)|This class manages COM interface pointers.|  
|[CComGlobalsThreadModel](#ccomglobalsthreadmodel)|Calls the appropriate thread model methods, regardless of the threading model being used.|  
|[CComObjectThreadModel](#ccomobjectthreadmodel)|Calls the appropriate thread model methods, regardless of the threading model being used.|  
|[CContainedWindow](#ccontainedwindow)|This class is a specialization of **CContainedWindowT.**|  
|[CPath](#cpath)|A specialization of [CPathT](../../atl/reference/cpatht-class.md) using `CString`.|  
|[CPathA](#cpatha)|A specialization of [CPathT](../../atl/reference/cpatht-class.md) using `CStringA`.|  
|[CPathW](#cpathw)|A specialization of [CPathT](../../atl/reference/cpatht-class.md) using `CStringW`.|  
|[CSimpleValArray](#csimplevalarray)|Represents an array for storing simple types.|  
|[DefaultThreadTraits](#defaultthreadtraits)|The default thread traits class.|  
|[LPCURL](#lpcurl)|A pointer to a constant [CUrl](../../atl/reference/curl-class.md) object.|  
|[LPURL](#lpurl)|A pointer to a [CUrl](../../atl/reference/curl-class.md) object.|  
  
##  <a name="_atl_base_module"></a>  _ATL_BASE_MODULE  
 Defined as a typedef based on _ATL_BASE_MODULE70.  
  
```   
typedef ATL::_ATL_BASE_MODULE70 _ATL_BASE_MODULE;   
```  
  
### Remarks  
 Used in every ATL project. Based on [_ATL_BASE_MODULE70](../../atl/reference/atl-base-module70-structure.md).  
  
 Classes that are part of the ATL 7.0 Module Classes derive from the _ATL_BASE_MODULE structure.  For more information on ATL Module Classes, refer to [COM Modules Classes](../../atl/com-modules-classes.md).  
  
##  <a name="_atl_com_module"></a>  _ATL_COM_MODULE  
 Defined as a typedef based on _ATL_COM_MODULE70.  
  
```   
typedef ATL::_ATL_COM_MODULE70 _ATL_COM_MODULE;   
```  
  
### Remarks  
 Used by ATL projects which use COM features. Based on [_ATL_COM_MODULE70](../../atl/reference/atl-com-module70-structure.md).  
  
##  <a name="_atl_module"></a>  _ATL_MODULE  
 Defined as a typedef based on _ATL_MODULE70.  
  
```   
typedef ATL::_ATL_MODULE70 _ATL_MODULE;   
```  
  
### Remarks  
 Based on [_ATL_MODULE70](../../atl/reference/atl-module70-structure.md).  
  
##  <a name="_atl_win_module"></a>  _ATL_WIN_MODULE  
 Defined as a typedef based on _ATL_WIN_MODULE70.  
  
```   
typedef ATL::_ATL_WIN_MODULE70 _ATL_WIN_MODULE; 
 
```  
  
### Remarks  
 Used by any ATL projects which use windowing features. Based on [_ATL_WIN_MODULE70](../../atl/reference/atl-win-module70-structure.md).  
  
##  <a name="atl_url_port"></a>  ATL_URL_PORT 
  The type used by [CUrl](curl-class.md) for specifying a port number.
```  
typedef WORD ATL_URL_PORT;
```  

##  <a name="ccomdispatchdriver"></a>  CComDispatchDriver  
 This class manages COM interface pointers.  
  
```   
typedef CComQIPtr<IDispatch, &__uuidof(IDispatch)> CComDispatchDriver;   
```  
  
##  <a name="ccomglobalsthreadmodel"></a>  CComGlobalsThreadModel  
 Calls the appropriate thread model methods, regardless of the threading model being used.  
  
```   
#if defined(_ATL_SINGLE_THREADED)  
typedef CComSingleThreadModel CComGlobalsThreadModel;  
#elif defined(_ATL_APARTMENT_THREADED)  
typedef CComMultiThreadModel CComGlobalsThreadModel;  
#elif defined(_ATL_FREE_THREADED)  
typedef CComMultiThreadModel CComGlobalsThreadModel;  
#else  
#pragma message ("No global threading model defined")  
#endif   
```  
  
### Remarks  
 Depending on the threading model used by your application, the `typedef` name `CComGlobalsThreadModel` references either [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) or [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md). These classes provide additional `typedef` names to reference a critical section class.  
  
> [!NOTE]
> `CComGlobalsThreadModel` does not reference class [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md).  
  
 Using `CComGlobalsThreadModel` frees you from specifying a particular threading model class. Regardless of the threading model being used, the appropriate methods will be called.  
  
 In addition to `CComGlobalsThreadModel`, ATL provides the `typedef` name [CComObjectThreadModel](#ccomobjectthreadmodel). The class referenced by each `typedef` depends on the threading model used, as shown in the following table:  
  
|typedef|Single threading|Apartment threading|Free threading|  
|-------------|----------------------|-------------------------|--------------------|  
|`CComObjectThreadModel`|S|S|M|  
|`CComGlobalsThreadModel`|S|M|M|  
  
 S= `CComSingleThreadModel`; M= `CComMultiThreadModel`  
  
 Use `CComObjectThreadModel` within a single object class. Use `CComGlobalsThreadModel` in an object that is globally available to your program, or when you want to protect module resources across multiple threads.  
  
##  <a name="ccomobjectthreadmodel"></a>  CComObjectThreadModel  
 Calls the appropriate thread model methods, regardless of the threading model being used.  
  
```   
#if defined(_ATL_SINGLE_THREADED)  
typedef CComSingleThreadModel CComObjectThreadModel;  
#elif defined(_ATL_APARTMENT_THREADED)  
typedef CComSingleThreadModel CComObjectThreadModel;  
#elif defined(_ATL_FREE_THREADED)  
typedef CComMultiThreadModel CComObjectThreadModel;  
#else  
#pragma message ("No global threading model defined")  
#endif   
```  
  
### Remarks  
 Depending on the threading model used by your application, the `typedef` name `CComObjectThreadModel` references either [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) or [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md). These classes provide additional `typedef` names to reference a critical section class.  
  
> [!NOTE]
> `CComObjectThreadModel` does not reference class [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md).  
  
 Using `CComObjectThreadModel` frees you from specifying a particular threading model class. Regardless of the threading model being used, the appropriate methods will be called.  
  
 In addition to `CComObjectThreadModel`, ATL provides the `typedef` name [CComGlobalsThreadModel](#ccomglobalsthreadmodel). The class referenced by each `typedef` depends on the threading model used, as shown in the following table:  
  
|typedef|Single threading|Apartment threading|Free threading|  
|-------------|----------------------|-------------------------|--------------------|  
|`CComObjectThreadModel`|S|S|M|  
|`CComGlobalsThreadModel`|S|M|M|  
  
 S= `CComSingleThreadModel`; M= `CComMultiThreadModel`  
  
 Use `CComObjectThreadModel` within a single object class. Use `CComGlobalsThreadModel` in an object that is either globally available to your program, or when you want to protect module resources across multiple threads.  
  
##  <a name="ccontainedwindow"></a>  CContainedWindow  
 This class is a specialization of **CContainedWindowT.**  
  
```   
typedef CContainedWindowT<CWindow> CContainedWindow;   
```  
  
### Remarks  
 `CContainedWindow` is a specialization of [CContainedWindowT](../../atl/reference/ccontainedwindowt-class.md). If you want to change the base class or traits, use `CContainedWindowT` directly.  
  
##  <a name="cpath"></a>  CPath  
 A specialization of [CPathT](../../atl/reference/cpatht-class.md) using `CString`.  
  
```   
typedef CPathT<CString> CPath;   
```  
  
##  <a name="cpatha"></a>  CPathA  
 A specialization of [CPathT](../../atl/reference/cpatht-class.md) using `CStringA`.  
  
```   
typedef CPathT<CStringA> CPathA;   
```  
  
##  <a name="cpathw"></a>  CPathW  
 A specialization of [CPathT](../../atl/reference/cpatht-class.md) using `CStringW`.  
  
```   
typedef ATL::CPathT<CStringW> CPathW;   
```  
  
##  <a name="csimplevalarray"></a>  CSimpleValArray  
 Represents an array for storing simple types.  
  
```   
#define CSimpleValArray CSimpleArray   
```  
  
### Remarks  
 `CSimpleValArray` is provided for creating and managing arrays containing simple data types. It is a simple #define of [CSimpleArray](../../atl/reference/csimplearray-class.md).  
  
##  <a name="lpcurl"></a>  LPCURL  
 A pointer to a constant [CUrl](../../atl/reference/curl-class.md) object.  
  
```   
typedef const CUrl* LPCURL;   
```  

##  <a name="defaultthreadtraits"></a>  DefaultThreadTraits
The default thread traits class.

### Syntax
```  
      #if defined(_MT)  
   typedef CRTThreadTraits DefaultThreadTraits;  
#else  
   typedef Win32ThreadTraits DefaultThreadTraits;  
#endif  
```

## Remarks
If the current project uses the multithreaded CRT, DefaultThreadTraits is defined as CRTThreadTraits. Otherwise, Win32ThreadTraits is used.
  
##  <a name="lpurl"></a>  LPURL  
 A pointer to a [CUrl](../../atl/reference/curl-class.md) object.  
  
```   
typedef CUrl* LPURL;   
```  
  
## See Also  
 [ATL COM Desktop Components](../../atl/atl-com-desktop-components.md)   
 [Functions](../../atl/reference/atl-functions.md)   
 [Global Variables](../../atl/reference/atl-global-variables.md)   
 [Structures](../../atl/reference/atl-structures.md)   
 [Macros](../../atl/reference/atl-macros.md)   
 [Classes](../../atl/reference/atl-classes.md)