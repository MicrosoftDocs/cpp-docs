---
title: "CComObject Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["CComObject", "ATLCOM/ATL::CComObject", "ATLCOM/ATL::CComObject::CComObject", "ATLCOM/ATL::CComObject::AddRef", "ATLCOM/ATL::CComObject::CreateInstance", "ATLCOM/ATL::CComObject::QueryInterface", "ATLCOM/ATL::CComObject::Release"]
dev_langs: ["C++"]
helpviewer_keywords: ["CComObject class"]
ms.assetid: e2b6433b-6349-4749-b4bc-acbd7a22c8b0
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CComObject Class
This class implements `IUnknown` for a nonaggregated object.  
  
## Syntax  
  
```
template<class Base>  
class CComObject : public Base
```  
  
#### Parameters  
 *Base*  
 Your class, derived from [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) or [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), as well as from any other interfaces you want to support on the object.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CComObject::CComObject](#ccomobject)|The constructor.|  
|[CComObject::~CComObject](#dtor)|The destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CComObject::AddRef](#addref)|Increments the reference count on the object.|  
|[CComObject::CreateInstance](#createinstance)|(Static) Creates a new `CComObject` object.|  
|[CComObject::QueryInterface](#queryinterface)|Retrieves a pointer to the requested interface.|  
|[CComObject::Release](#release)|Decrements the reference count on the object.|  
  
## Remarks  
 `CComObject` implements [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) for a nonaggregated object. However, calls to `QueryInterface`, `AddRef`, and `Release` are delegated to `CComObjectRootEx`.  
  
 For more information about using `CComObject`, see the article [Fundamentals of ATL COM Objects](../../atl/fundamentals-of-atl-com-objects.md).  
  
## Inheritance Hierarchy  
 `Base`  
  
 `CComObject`  
  
## Requirements  
 **Header:** atlcom.h  
  
##  <a name="addref"></a>  CComObject::AddRef  
 Increments the reference count on the object.  
  
```
STDMETHOD_(ULONG, AddRef)();
```  
  
### Return Value  
 This function returns the new incremented reference count on the object. This value may be useful for diagnostics or testing.  
  
##  <a name="ccomobject"></a>  CComObject::CComObject  
 The constructor increments the module lock count.  
  
```
CComObject(void* = NULL);
```  
  
### Parameters  
 **void\***  
 [in] This unnamed parameter is not used. It exists for symmetry with other **CCom***XXX*`Object`*XXX* constructors.  
  
### Remarks  
 The destructor decrements it.  
  
 If a `CComObject`-derived object is successfully constructed using the **new** operator, the initial reference count is 0. To set the reference count to the proper value (1), make a call to the [AddRef](#addref) function.  
  
##  <a name="dtor"></a>  CComObject::~CComObject  
 The destructor.  
  
```
CComObject();
```  
  
### Remarks  
 Frees all allocated resources, calls [FinalRelease](ccomobjectrootex-class.md#finalrelease), and decrements the module lock count.  

  
##  <a name="createinstance"></a>  CComObject::CreateInstance  
 This static function allows you to create a new **CComObject<**`Base`**>** object, without the overhead of [CoCreateInstance](/windows/desktop/api/combaseapi/nf-combaseapi-cocreateinstance).  
  
```
static HRESULT WINAPI CreateInstance(CComObject<Base>** pp);
```  
  
### Parameters  
 *pp*  
 [out] A pointer to a **CComObject<**`Base`**>** pointer. If `CreateInstance` is unsuccessful, *pp* is set to NULL.  
  
### Return Value  
 A standard HRESULT value.  
  
### Remarks  
 The object returned has a reference count of zero, so call `AddRef` immediately, then use `Release` to free the reference on the object pointer when you're done.  
  
 If you do not need direct access to the object, but still want to create a new object without the overhead of `CoCreateInstance`, use [CComCoClass::CreateInstance](../../atl/reference/ccomcoclass-class.md#createinstance) instead.  
  
### Example  
 [!code-cpp[NVC_ATL_COM#38](../../atl/codesnippet/cpp/ccomobject-class_1.h)]  
  
 [!code-cpp[NVC_ATL_COM#39](../../atl/codesnippet/cpp/ccomobject-class_2.cpp)]  
  
##  <a name="queryinterface"></a>  CComObject::QueryInterface  
 Retrieves a pointer to the requested interface.  
  
```
STDMETHOD(QueryInterface)(REFIID iid, void** ppvObject);
template <class Q>  
HRESULT STDMETHODCALLTYPE QueryInterface(Q** pp);
```  
  
### Parameters  
 *iid*  
 [in] The identifier of the interface being requested.  
  
 *ppvObject*  
 [out] A pointer to the interface pointer identified by *iid*. If the object does not support this interface, *ppvObject* is set to NULL.  
  
 *pp*  
 [out] A pointer to the interface pointer identified by type `Q`. If the object does not support this interface, *pp* is set to NULL.  
  
### Return Value  
 A standard HRESULT value.  
  
##  <a name="release"></a>  CComObject::Release  
 Decrements the reference count on the object.  
  
```
STDMETHOD_(ULONG, Release)();
```  
  
### Return Value  
 This function returns the new decremented reference count on the object. In debug builds, the return value may be useful for diagnostics or testing. In non-debug builds, `Release` always returns 0.  
  
## See Also  
 [CComAggObject Class](../../atl/reference/ccomaggobject-class.md)   
 [CComPolyObject Class](../../atl/reference/ccompolyobject-class.md)   
 [DECLARE_AGGREGATABLE](aggregation-and-class-factory-macros.md#declare_aggregatable)   
 [DECLARE_NOT_AGGREGATABLE](aggregation-and-class-factory-macros.md#declare_not_aggregatable)   
 [Class Overview](../../atl/atl-class-overview.md)
