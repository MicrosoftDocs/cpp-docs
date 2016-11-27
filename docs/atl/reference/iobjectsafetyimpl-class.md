---
title: "IObjectSafetyImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "IObjectSafetyImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "controls [ATL], safe"
  - "safe for scripting and initialization (controls)"
  - "IObjectSafety, ATL implementation"
  - "IObjectSafetyImpl class"
ms.assetid: 64e32082-d910-4a8a-a5bf-ebed9145359d
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
# IObjectSafetyImpl Class
This class provides a default implementation of the `IObjectSafety` interface to allow a client to retrieve and set an object's safety levels.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## Syntax  
  
```
template <class T,DWORD dwSupportedSafety>  class IObjectSafetyImpl
```  
  
#### Parameters  
 `T`  
 Your class, derived from `IObjectSafetyImpl`.  
  
 *dwSupportedSafety*  
 Specifies the supported safety options for the control. Can be one of the following values:  
  
- **INTERFACESAFE_FOR_UNTRUSTED_CALLER** The interface identified by the [SetInterfaceSafetyOptions](#iobjectsafetyimpl__setinterfacesafetyoptions) parameter `riid` should be made safe for scripting.  
  
- **INTERFACESAFE_FOR_UNTRUSTED_DATA** The interface identified by the `SetInterfaceSafetyOptions` parameter `riid` should be made safe for untrusted data during initialization.  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[IObjectSafetyImpl::GetInterfaceSafetyOptions](#iobjectsafetyimpl__getinterfacesafetyoptions)|Retrieves the safety options supported by the object, as well as the safety options currently set for the object.|  
|[IObjectSafetyImpl::SetInterfaceSafetyOptions](#iobjectsafetyimpl__setinterfacesafetyoptions)|Makes the object safe for initialization or scripting.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[IObjectSafetyImpl::m_dwCurrentSafety](#iobjectsafetyimpl__m_dwcurrentsafety)|Stores the object's current safety level.|  
  
## Remarks  
 Class `IObjectSafetyImpl` provides a default implementation of `IObjectSafety`. The `IObjectSafety` interface allows a client to retrieve and set an object's safety levels. For example, a web browser can call **IObjectSafety::SetInterfaceSafetyOptions** to make a control safe for initialization or safe for scripting.  
  
 Note that using the [IMPLEMENTED_CATEGORY](http://msdn.microsoft.com/library/d898ef34-5684-4709-beb9-7114ddd96674) macro with the **CATID_SafeForScripting** and **CATID_SafeForInitializing** component categories provides an alternative way of specifying that a component is safe.  
  
 **Related Articles** [ATL Tutorial](../../atl/active-template-library-atl-tutorial.md), [Creating an ATL Project](../../atl/reference/creating-an-atl-project.md)  
  
## Inheritance Hierarchy  
 `IObjectSafety`  
  
 `IObjectSafetyImpl`  
  
## Requirements  
 **Header:** atlctl.h  
  
##  <a name="iobjectsafetyimpl__getinterfacesafetyoptions"></a>  IObjectSafetyImpl::GetInterfaceSafetyOptions  
 Retrieves the safety options supported by the object, as well as the safety options currently set for the object.  
  
```
HRESULT GetInterfaceSafetyOptions(REFIID riid,
    DWORD* pdwSupportedOptions,
    DWORD* pdwEnabledOptions);
```  
  
### Remarks  
 The implementation returns the appropriate values for any interface supported by the object's implementation of **IUnknown::QueryInterface**.  
  
> [!IMPORTANT]
>  Any object that supports `IObjectSafety` is responsible for its own security, and that of any object it delegates. The programmer must take into account issues arising from running code in the user's context, cross-site scripting and perform suitable zone checking.  
  
 See [IObjectSafety::GetInterfaceSafetyOptions](https://msdn.microsoft.com/library/aa768223.aspx) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="iobjectsafetyimpl__m_dwcurrentsafety"></a>  IObjectSafetyImpl::m_dwCurrentSafety  
 Stores the object's current safety level.  
  
```
DWORD m_dwCurrentSafety;
```  
  
##  <a name="iobjectsafetyimpl__setinterfacesafetyoptions"></a>  IObjectSafetyImpl::SetInterfaceSafetyOptions  
 Makes the object safe for initialization or scripting by setting the [m_dwCurrentSafety](#iobjectsafetyimpl__m_dwcurrentsafety) member to the appropriate value.  
  
```
HRESULT SetInterfaceSafetyOptions(REFIID riid,
    DWORD dwOptionsSetMask,
    DWORD dwEnabledOptions);
```  
  
### Remarks  
 The implementation returns **E_NOINTERFACE** for any interface not supported by the object's implementation of **IUnknown::QueryInterface**.  
  
> [!IMPORTANT]
>  Any object that supports `IObjectSafety` is responsible for its own security, and that of any object it delegates. The programmer must take into account issues arising from running code in the user's context, cross-site scripting and perform suitable zone checking.  
  
 See [IObjectSafety::SetInterfaceSafetyOptions](https://msdn.microsoft.com/library/aa768225.aspx) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## See Also  
 [IObjectSafety Interface](https://msdn.microsoft.com/library/aa768224.aspx)   
 [Class Overview](../../atl/atl-class-overview.md)
