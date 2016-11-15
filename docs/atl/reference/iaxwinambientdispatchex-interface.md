---
title: "IAxWinAmbientDispatchEx Interface | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.IAxWinAmbientDispatchEx"
  - "IAxWinAmbientDispatchEx"
  - "ATL::IAxWinAmbientDispatchEx"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IAxWinAmbientDispatchEx interface"
ms.assetid: 2c25e079-6128-4278-bc72-b2c6195ba7ef
caps.latest.revision: 25
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
# IAxWinAmbientDispatchEx Interface
This interface implements supplemental ambient properties for a hosted control.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## Syntax  
  
```
MIDL_INTERFACE("B2D0778B - AC99 - 4c58 - A5C8 - E7724E5316B5") IAxWinAmbientDispatchEx : public IAxWinAmbientDispatch
```  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[SetAmbientDispatch](#iaxwinambientdispatchex__setambientdispatch)|This method is called to supplement the default ambient property interface with a user-defined interface.|  
  
## Remarks  
 Include this interface in ATL applications that are statically linked to ATL and host ActiveX Controls, especially ActiveX Controls that have Ambient Properties. Not including this interface will generate this assertion: "Did you forget to pass the LIBID to CComModule::Init"  
  
 This interface is exposed by ATL's ActiveX control hosting objects. Derived from [IAxWinAmbientDispatch](../../atl/reference/iaxwinambientdispatch-interface.md), `IAxWinAmbientDispatchEx` adds a method that allows you to supplement the ambient property interface provided by ATL with one of your own.  
  
 [AXHost](https://msdn.microsoft.com/library/system.windows.forms.axhost.aspx) will try to load type information about `IAxWinAmbientDispatch` and `IAxWinAmbientDispatchEx` from the type library that contains the code.  
  
 If you are linking to ATL90.dll, **AXHost** will load the type information from the type library in the DLL.  
  
 See [Hosting ActiveX Controls Using ATL AXHost](../../atl/hosting-activex-controls-using-atl-axhost.md) for more details.  
  
## Requirements  
 The definition of this interface is available in a number of forms, as shown in the following table.  
  
|Definition Type|File|  
|---------------------|----------|  
|IDL|atliface.idl|  
|Type Library|ATL.dll|  
|C++|atliface.h (also included in ATLBase.h)|  
  
##  <a name="iaxwinambientdispatchex__setambientdispatch"></a>  IAxWinAmbientDispatchEx::SetAmbientDispatch  
 This method is called to supplement the default ambient property interface with a user-defined interface.  
  
```
virtual HRESULT STDMETHODCALLTYPE SetAmbientDispatch(IDispatch* pDispatch) = 0;
```  
  
### Parameters  
 *pDispatch*  
 Pointer to the new interface.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 When `SetAmbientDispatch` is called with a pointer to a new interface, this new interface will be used to invoke any properties or methods asked for by the hosted control â€” if those properties are not already provided by [IAxWinAmbientDispatch](../../atl/reference/iaxwinambientdispatch-interface.md).  
  
## See Also  
 [IAxWinAmbientDispatch Interface](../../atl/reference/iaxwinambientdispatch-interface.md)
