---
title: "CComObject Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CComObject<Base>"
  - "ATL::CComObject"
  - "ATL::CComObject<Base>"
  - "ATL.CComObject"
  - "CComObject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComObject class"
ms.assetid: e2b6433b-6349-4749-b4bc-acbd7a22c8b0
caps.latest.revision: 19
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
# CComObject Class
This class implements **IUnknown** for a nonaggregated object.  
  
## Syntax  
  
```
template<class Base>  class CComObject :  public Base
```  
  
#### Parameters  
 `Base`  
 Your class, derived from [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) or [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), as well as from any other interfaces you want to support on the object.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CComObject::CComObject](#ccomobject__ccomobject)|The constructor.|  
|[CComObject::~CComObject](#ccomobject___dtorccomobject)|The destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CComObject::AddRef](#ccomobject__addref)|Increments the reference count on the object.|  
|[CComObject::CreateInstance](#ccomobject__createinstance)|(Static) Creates a new `CComObject` object.|  
|[CComObject::QueryInterface](#ccomobject__queryinterface)|Retrieves a pointer to the requested interface.|  
|[CComObject::Release](#ccomobject__release)|Decrements the reference count on the object.|  
  
## Remarks  
 `CComObject` implements [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) for a nonaggregated object. However, calls to `QueryInterface`, `AddRef`, and **Release** are delegated to `CComObjectRootEx`.  
  
 For more information about using `CComObject`, see the article [Fundamentals of ATL COM Objects](../../atl/fundamentals-of-atl-com-objects.md).  
  
## Inheritance Hierarchy  
 `Base`  
  
 `CComObject`  
  
## Requirements  
 **Header:** atlcom.h  
  
##  <a name="ccomobject__addref"></a>  CComObject::AddRef  
 Increments the reference count on the object.  
  
```
STDMETHOD_(ULONG, AddRef)();
```  
  
### Return Value  
 This function returns the new incremented reference count on the object. This value may be useful for diagnostics or testing.  
  
##  <a name="ccomobject__ccomobject"></a>  CComObject::CComObject  
 The constructor increments the module lock count.  
  
```
CComObject(void* = NULL);
```  
  
### Parameters  
 **void\***  
 [in] This unnamed parameter is not used. It exists for symmetry with other **CCom***XXX*`Object`*XXX* constructors.  
  
### Remarks  
 The destructor decrements it.  
  
 If a `CComObject`-derived object is successfully constructed using the **new** operator, the initial reference count is 0. To set the reference count to the proper value (1), make a call to the [AddRef](#ccomobject__addref) function.  
  
##  <a name="ccomobject___dtorccomobject"></a>  CComObject::~CComObject  
 The destructor.  
  
```
CComObject();
```  
  
### Remarks  
 Frees all allocated resources, calls [FinalRelease](ccomobjectrootex-class.md#ccomobjectrootex__finalrelease), and decrements the module lock count.  

  
##  <a name="ccomobject__createinstance"></a>  CComObject::CreateInstance  
 This static function allows you to create a new **CComObject<**`Base`**>** object, without the overhead of [CoCreateInstance](http://msdn.microsoft.com/library/windows/desktop/ms686615).  
  
```
static HRESULT WINAPI CreateInstance(CComObject<Base>** pp);
```  
  
### Parameters  
 `pp`  
 [out] A pointer to a **CComObject<**`Base`**>** pointer. If `CreateInstance` is unsuccessful, `pp` is set to **NULL**.  
  
### Return Value  
 A standard `HRESULT` value.  
  
### Remarks  
 The object returned has a reference count of zero, so call `AddRef` immediately, then use **Release** to free the reference on the object pointer when you're done.  
  
 If you do not need direct access to the object, but still want to create a new object without the overhead of `CoCreateInstance`, use [CComCoClass::CreateInstance](../../atl/reference/ccomcoclass-class.md#ccomcoclass__createinstance) instead.  
  
### Example  
 [!code-cpp[NVC_ATL_COM#38](../../atl/codesnippet/cpp/ccomobject-class_1.h)]  
  
 [!code-cpp[NVC_ATL_COM#39](../../atl/codesnippet/cpp/ccomobject-class_2.cpp)]  
  
##  <a name="ccomobject__queryinterface"></a>  CComObject::QueryInterface  
 Retrieves a pointer to the requested interface.  
  
```
STDMETHOD(QueryInterface)(REFIID iid,
    void** ppvObject);

    template <class Q>  HRESULT STDMETHODCALLTYPE QueryInterface(
    Q** pp);
```  
  
### Parameters  
 `iid`  
 [in] The identifier of the interface being requested.  
  
 `ppvObject`  
 [out] A pointer to the interface pointer identified by `iid`. If the object does not support this interface, `ppvObject` is set to **NULL**.  
  
 `pp`  
 [out] A pointer to the interface pointer identified by type `Q`. If the object does not support this interface, `pp` is set to **NULL**.  
  
### Return Value  
 A standard `HRESULT` value.  
  
##  <a name="ccomobject__release"></a>  CComObject::Release  
 Decrements the reference count on the object.  
  
```
STDMETHOD_(ULONG, Release)();
```  
  
### Return Value  
 This function returns the new decremented reference count on the object. In debug builds, the return value may be useful for diagnostics or testing. In non-debug builds, **Release** always returns 0.  
  
## See Also  
 [CComAggObject Class](../../atl/reference/ccomaggobject-class.md)   
 [CComPolyObject Class](../../atl/reference/ccompolyobject-class.md)   
 [DECLARE_AGGREGATABLE](http://msdn.microsoft.com/library/e7e568d7-04e0-4226-b5dc-224deed229ab)   
 [DECLARE_NOT_AGGREGATABLE](http://msdn.microsoft.com/library/2a116c7c-bab8-4f2a-a9ad-03d7aba0f762)   
 [Class Overview](../../atl/atl-class-overview.md)
