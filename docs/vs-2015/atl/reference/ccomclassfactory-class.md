---
title: "CComClassFactory Class | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CComClassFactory"
  - "CComClassFactory"
  - "ATL::CComClassFactory"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComClassFactory class"
ms.assetid: e56dacf7-d5c4-4c42-aef4-a86d91981a1b
caps.latest.revision: 26
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CComClassFactory Class
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CComClassFactory Class](https://docs.microsoft.com/cpp/atl/reference/ccomclassfactory-class).  
  
  
This class implements the [IClassFactory](http://msdn.microsoft.com/library/windows/desktop/ms694364) interface.  
  
## Syntax  
  
```
class CComClassFactory : 
    public IClassFactory, 
    public CComObjectRootEx<CComGlobalsThreadModel>
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CComClassFactory::CreateInstance](#ccomclassfactory__createinstance)|Creates an object of the specified CLSID.|  
|[CComClassFactory::LockServer](#ccomclassfactory__lockserver)|Locks the class factory in memory.|  
  
## Remarks  
 `CComClassFactory` implements the [IClassFactory](http://msdn.microsoft.com/library/windows/desktop/ms694364) interface, which contains methods for creating an object of a particular CLSID, as well as locking the class factory in memory to allow new objects to be created more quickly. **IClassFactory** must be implemented for every class that you register in the system registry and to which you assign a CLSID.  
  
 ATL objects normally acquire a class factory by deriving from [CComCoClass](../../atl/reference/ccomcoclass-class.md). This class includes the macro [DECLARE_CLASSFACTORY](http://msdn.microsoft.com/library/51a6b925-07c0-4d3a-9174-0b8c808975e4), which declares `CComClassFactory` as the default class factory. To override this default, specify one of the `DECLARE_CLASSFACTORY`*XXX* macros in your class definition. For example, the [DECLARE_CLASSFACTORY_EX](http://msdn.microsoft.com/library/4181ef00-0f30-4e19-b0ee-e7648062e926) macro uses the specified class for the class factory:  
  
 [!code-cpp[NVC_ATL_COM#8](../../snippets/cpp/VS_Snippets_Cpp/NVC_ATL_COM/Cpp/MyCustomClass.h#8)]  
  
 The above class definition specifies that **CMyClassFactory** will be used as the object's default class factory. **CMyClassFactory** must derive from `CComClassFactory` and override `CreateInstance`.  
  
 ATL provides three other macros that declare a class factory:  
  
- [DECLARE_CLASSFACTORY2](http://msdn.microsoft.com/library/38a6c969-7297-4bb1-9ba6-1fe2d355b285) Uses [CComClassFactory2](../../atl/reference/ccomclassfactory2-class.md), which controls creation through a license.  
  
- [DECLARE_CLASSFACTORY_AUTO_THREAD](http://msdn.microsoft.com/library/19d7105e-03e8-4412-9f5e-5384c8a5e18f) Uses [CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md), which creates objects in multiple apartments.  
  
- [DECLARE_CLASSFACTORY_SINGLETON](http://msdn.microsoft.com/library/0e4a3964-c03d-463e-884c-fe3b416db478) Uses [CComClassFactorySingleton](../../atl/reference/ccomclassfactorysingleton-class.md), which constructs a single [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) object.  
  
## Requirements  
 **Header:** atlcom.h  
  
##  <a name="ccomclassfactory__createinstance"></a>  CComClassFactory::CreateInstance  
 Creates an object of the specified CLSID and retrieves an interface pointer to this object.  
  
```
STDMETHOD(CreateInstance)(LPUNKNOWN pUnkOuter, REFIID riid, void** ppvObj);
```  
  
### Parameters  
 `pUnkOuter`  
 [in] If the object is being created as part of an aggregate, then `pUnkOuter` must be the outer unknown. Otherwise, `pUnkOuter` must be **NULL**.  
  
 `riid`  
 [in] The IID of the requested interface. If `pUnkOuter` is non- **NULL**, `riid` must be **IID_IUnknown**.  
  
 `ppvObj`  
 [out] A pointer to the interface pointer identified by `riid`. If the object does not support this interface, `ppvObj` is set to **NULL**.  
  
### Return Value  
 A standard `HRESULT` value.  
  
##  <a name="ccomclassfactory__lockserver"></a>  CComClassFactory::LockServer  
 Increments and decrements the module lock count by calling **_Module::Lock** and **_Module::Unlock**, respectively.  
  
```
STDMETHOD(LockServer)(BOOL fLock);
```  
  
### Parameters  
 `fLock`  
 [in] If **TRUE**, the lock count is incremented; otherwise, the lock count is decremented.  
  
### Return Value  
 A standard `HRESULT` value.  
  
### Remarks  
 **_Module** refers to the global instance of [CComModule](../../atl/reference/ccommodule-class.md) or a class derived from it.  
  
 Calling `LockServer` allows a client to hold onto a class factory so that multiple objects can be created quickly.  
  
## See Also  
 [CComObjectRootEx Class](../../atl/reference/ccomobjectrootex-class.md)   
 [CComGlobalsThreadModel](http://msdn.microsoft.com/library/f112382f-da0a-4bfe-bb49-80f9fd908d47)   
 [Class Overview](../../atl/atl-class-overview.md)








