---
title: "CComClassFactoryAutoThread Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["CComClassFactoryAutoThread", "ATLCOM/ATL::CComClassFactoryAutoThread", "ATLCOM/ATL::CComClassFactoryAutoThread::CreateInstance", "ATLCOM/ATL::CComClassFactoryAutoThread::LockServer"]
dev_langs: ["C++"]
helpviewer_keywords: ["CComClassFactoryAutoThread class"]
ms.assetid: 22008042-533f-4dd9-bf7e-191ee571f9a1
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CComClassFactoryAutoThread Class
This class implements the [IClassFactory](http://msdn.microsoft.com/library/windows/desktop/ms694364) interface, and allows objects to be created in multiple apartments.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
class CComClassFactoryAutoThread 
   : public IClassFactory, 
     public CComObjectRootEx<CComGlobalsThreadModel>
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CComClassFactoryAutoThread::CreateInstance](#createinstance)|Creates an object of the specified CLSID.|  
|[CComClassFactoryAutoThread::LockServer](#lockserver)|Locks the class factory in memory.|  
  
## Remarks  
 `CComClassFactoryAutoThread` is similar to [CComClassFactory](../../atl/reference/ccomclassfactory-class.md), but allows objects to be created in multiple apartments. To take advantage of this support, derive your EXE module from [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md).  
  
 ATL objects normally acquire a class factory by deriving from [CComCoClass](../../atl/reference/ccomcoclass-class.md). This class includes the macro [DECLARE_CLASSFACTORY](aggregation-and-class-factory-macros.md#declare_classfactory), which declares [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) as the default class factory. To use `CComClassFactoryAutoThread`, specify the [DECLARE_CLASSFACTORY_AUTO_THREAD](aggregation-and-class-factory-macros.md#declare_classfactory_auto_thread) macro in your object's class definition. For example:  
  
 [!code-cpp[NVC_ATL_COM#9](../../atl/codesnippet/cpp/ccomclassfactoryautothread-class_1.h)]  
  
## Inheritance Hierarchy  
 `CComObjectRootBase`  
  
 [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)  
  
 `IClassFactory`  
  
 `CComClassFactoryAutoThread`  
  
## Requirements  
 **Header:** atlcom.h  
  
##  <a name="createinstance"></a>  CComClassFactoryAutoThread::CreateInstance  
 Creates an object of the specified CLSID and retrieves an interface pointer to this object.  
  
```
STDMETHODIMP CreateInstance(
    LPUNKNOWN pUnkOuter,
    REFIID riid,
    void** ppvObj);
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
  
### Remarks  
 If your module derives from [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md), `CreateInstance` first selects a thread to create the object in the associated apartment.  
  
##  <a name="lockserver"></a>  CComClassFactoryAutoThread::LockServer  
 Increments and decrements the module lock count by calling **_Module::Lock** and **_Module::Unlock**, respectively.  
  
```
STDMETHODIMP LockServer(BOOL fLock);
```  
  
### Parameters  
 `fLock`  
 [in] If **TRUE**, the lock count is incremented; otherwise, the lock count is decremented.  
  
### Return Value  
 A standard `HRESULT` value.  
  
### Remarks  
 When using `CComClassFactoryAutoThread`, **_Module** typically refers to the global instance of [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md).  
  
 Calling `LockServer` allows a client to hold onto a class factory so that multiple objects can be quickly created.  
  
## See Also  
 [IClassFactory](http://msdn.microsoft.com/library/windows/desktop/ms694364)   
 [CComClassFactory2 Class](../../atl/reference/ccomclassfactory2-class.md)   
 [CComClassFactorySingleton Class](../../atl/reference/ccomclassfactorysingleton-class.md)   
 [CComObjectRootEx Class](../../atl/reference/ccomobjectrootex-class.md)   
 [CComGlobalsThreadModel](atl-typedefs.md#ccomglobalsthreadmodel)   
 [Class Overview](../../atl/atl-class-overview.md)
