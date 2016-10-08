---
title: "CComClassFactory Class"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: e56dacf7-d5c4-4c42-aef4-a86d91981a1b
caps.latest.revision: 14
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# CComClassFactory Class
This class implements the [IClassFactory](http://msdn.microsoft.com/library/windows/desktop/ms694364) interface.  
  
## Syntax  
  
```  
class CComClassFactory : public IClassFactory,   
    public CComObjectRootEx< CComGlobalsThreadModel >  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CComClassFactory::CreateInstance](../Topic/CComClassFactory::CreateInstance.md)|Creates an object of the specified CLSID.|  
|[CComClassFactory::LockServer](../Topic/CComClassFactory::LockServer.md)|Locks the class factory in memory.|  
  
## Remarks  
 `CComClassFactory` implements the [IClassFactory](http://msdn.microsoft.com/library/windows/desktop/ms694364) interface, which contains methods for creating an object of a particular CLSID, as well as locking the class factory in memory to allow new objects to be created more quickly. **IClassFactory** must be implemented for every class that you register in the system registry and to which you assign a CLSID.  
  
 ATL objects normally acquire a class factory by deriving from [CComCoClass](../VS_visualcpp/CComCoClass-Class.md). This class includes the macro [DECLARE_CLASSFACTORY](../Topic/DECLARE_CLASSFACTORY.md), which declares `CComClassFactory` as the default class factory. To override this default, specify one of the `DECLARE_CLASSFACTORY`*XXX* macros in your class definition. For example, the [DECLARE_CLASSFACTORY_EX](../Topic/DECLARE_CLASSFACTORY_EX.md) macro uses the specified class for the class factory:  
  
 [!CODE [NVC_ATL_COM#8](../CodeSnippet/VS_Snippets_Cpp/NVC_ATL_COM#8)]  
  
 The above class definition specifies that **CMyClassFactory** will be used as the object's default class factory. **CMyClassFactory** must derive from `CComClassFactory` and override `CreateInstance`.  
  
 ATL provides three other macros that declare a class factory:  
  
-   [DECLARE_CLASSFACTORY2](../Topic/DECLARE_CLASSFACTORY2.md) Uses [CComClassFactory2](../VS_visualcpp/CComClassFactory2-Class.md), which controls creation through a license.  
  
-   [DECLARE_CLASSFACTORY_AUTO_THREAD](../Topic/DECLARE_CLASSFACTORY_AUTO_THREAD.md) Uses [CComClassFactoryAutoThread](../VS_visualcpp/CComClassFactoryAutoThread-Class.md), which creates objects in multiple apartments.  
  
-   [DECLARE_CLASSFACTORY_SINGLETON](../Topic/DECLARE_CLASSFACTORY_SINGLETON.md) Uses [CComClassFactorySingleton](../VS_visualcpp/CComClassFactorySingleton-Class.md), which constructs a single [CComObjectGlobal](../VS_visualcpp/CComObjectGlobal-Class.md) object.  
  
## Requirements  
 **Header:** atlcom.h  
  
##  <a name="ccomclassfactory__createinstance"></a>  CComClassFactory::CreateInstance  
 Creates an object of the specified CLSID and retrieves an interface pointer to this object.  
  
```  
STDMETHOD(CreateInstance)(  
    LPUNKNOWN pUnkOuter,  
    REFIID riid,  
    void** ppvObj );  
```  
  
### Parameters  
 `pUnkOuter`  
 [in] If the object is being created as part of an aggregate, then `pUnkOuter` must be the outer unknown. Otherwise, `pUnkOuter` must be **NULL**.  
  
 `riid`  
 [in] The IID of the requested interface. If `pUnkOuter` is non-                                **NULL**, `riid` must be **IID_IUnknown**.  
  
 `ppvObj`  
 [out] A pointer to the interface pointer identified by `riid`. If the object does not support this interface, `ppvObj` is set to **NULL**.  
  
### Return Value  
 A standard `HRESULT` value.  
  
##  <a name="ccomclassfactory__lockserver"></a>  CComClassFactory::LockServer  
 Increments and decrements the module lock count by calling **_Module::Lock** and **_Module::Unlock**, respectively.  
  
```  
STDMETHOD(LockServer)(    BOOL fLock );  
```  
  
### Parameters  
 `fLock`  
 [in] If **TRUE**, the lock count is incremented; otherwise, the lock count is decremented.  
  
### Return Value  
 A standard `HRESULT` value.  
  
### Remarks  
 **_Module** refers to the global instance of [CComModule](../VS_visualcpp/CComModule-Class.md) or a class derived from it.  
  
 Calling `LockServer` allows a client to hold onto a class factory so that multiple objects can be created quickly.  
  
## See Also  
 [CComObjectRootEx Class](../VS_visualcpp/CComObjectRootEx-Class.md)   
 [CComGlobalsThreadModel](../Topic/CComGlobalsThreadModel.md)   
 [Class Overview](../VS_visualcpp/ATL-Class-Overview.md)