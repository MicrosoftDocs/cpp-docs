---
title: "CComClassFactorySingleton Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["CComClassFactorySingleton", "ATLCOM/ATL::CComClassFactorySingleton", "ATLCOM/ATL::CComClassFactorySingleton::CreateInstance", "ATLCOM/ATL::CComClassFactorySingleton::m_spObj"]
dev_langs: ["C++"]
helpviewer_keywords: ["CComClassFactorySingleton class"]
ms.assetid: debb983c-382b-487b-8d42-7ea26dc158b8
author: "mikeblome"
ms.author: "mblome"
---
# CComClassFactorySingleton Class

This class derives from [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) and uses [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) to construct a single object.

> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
template<class T>  
class CComClassFactorySingleton : public CComClassFactory
```

#### Parameters

*T*  
Your class.

`CComClassFactorySingleton` derives from [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) and uses [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) to construct a single object. Each call to the `CreateInstance` method simply queries this object for an interface pointer.

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CComClassFactorySingleton::CreateInstance](#createinstance)|Queries `m_spObj` for an interface pointer.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CComClassFactorySingleton::m_spObj](#m_spobj)|The [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) object constructed by `CComClassFactorySingleton`.|

## Remarks

ATL objects normally acquire a class factory by deriving from [CComCoClass](../../atl/reference/ccomcoclass-class.md). This class includes the macro [DECLARE_CLASSFACTORY](aggregation-and-class-factory-macros.md#declare_classfactory), which declares `CComClassFactory` as the default class factory. To use `CComClassFactorySingleton`, specify the [DECLARE_CLASSFACTORY_SINGLETON](aggregation-and-class-factory-macros.md#declare_classfactory_singleton) macro in your object's class definition. For example:

[!code-cpp[NVC_ATL_COM#10](../../atl/codesnippet/cpp/ccomclassfactorysingleton-class_1.h)]

## Inheritance Hierarchy

`CComObjectRootBase`

[CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)

`IClassFactory`

[CComClassFactory](../../atl/reference/ccomclassfactory-class.md)

`CComClassFactorySingleton`

## Requirements

**Header:** atlcom.h

##  <a name="createinstance"></a>  CComClassFactorySingleton::CreateInstance

Calls `QueryInterface` through [m_spObj](#m_spobj) to retrieve an interface pointer.

```
STDMETHOD(CreateInstance)(LPUNKNOWN pUnkOuter, REFIID riid, void** ppvObj);
```

### Parameters

*pUnkOuter*  
[in] If the object is being created as part of an aggregate, then *pUnkOuter* must be the outer unknown. Otherwise, *pUnkOuter* must be NULL.

*riid*  
[in] The IID of the requested interface. If *pUnkOuter* is non- NULL, *riid* must be `IID_IUnknown`.

*ppvObj*  
[out] A pointer to the interface pointer identified by *riid*. If the object does not support this interface, *ppvObj* is set to NULL.

### Return Value

A standard HRESULT value.

##  <a name="m_spobj"></a>  CComClassFactorySingleton::m_spObj

The [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) object constructed by `CComClassFactorySingleton`.

```
CComPtr<IUnknown> m_spObj;
```

### Remarks

Each call to the [CreateInstance](#createinstance) method simply queries this object for an interface pointer.

Note that the current form of `m_spObj` presents a breaking change from the way that `CComClassFactorySingleton` worked in previous versions of ATL. In previous versions the `CComClassFactorySingleton` object was created at the same time as the class factory, during server initialization. In Visual C++.NET 2003, the object is created lazily, on the first request. This change could cause errors in programs that rely on early initialization.

## See Also

[IClassFactory](/windows/desktop/api/unknwnbase/nn-unknwnbase-iclassfactory)   
[CComClassFactory2 Class](../../atl/reference/ccomclassfactory2-class.md)   
[CComClassFactoryAutoThread Class](../../atl/reference/ccomclassfactoryautothread-class.md)   
[CComObjectRootEx Class](../../atl/reference/ccomobjectrootex-class.md)   
[CComGlobalsThreadModel](atl-typedefs.md#ccomglobalsthreadmodel)   
[Class Overview](../../atl/atl-class-overview.md)
