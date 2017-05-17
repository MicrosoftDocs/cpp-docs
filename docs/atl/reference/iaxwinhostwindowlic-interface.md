---
title: "IAxWinHostWindowLic Interface | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology:  
  - "cpp-windows"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ['IAxWinHostWindowLic', 'No header/ATL::IAxWinHostWindowLic', 'No header/ATL::CreateControlLic', 'No header/ATL::CreateControlLicEx']
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IAxWinHostWindowLic interface"
ms.assetid: 750f1520-6bce-428c-aca0-fccbe3f063c7
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
# IAxWinHostWindowLic Interface
This interface provides methods for manipulating a licensed control and its host object.  
  
## Syntax  
  
```
interface IAxWinHostWindowLic : IAxWinHostWindow
```  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[CreateControlLic](#createcontrollic)|Creates a licensed control and attaches it to the host object.|  
|[CreateControlLicEx](#createcontrollicex)|Creates a licensed control, attaches it to the host object, and optionally sets up an event handler.|  
  
## Remarks  
 `IAxWinHostWindowLic` inherits from [IAxWinHostWindow](../../atl/reference/iaxwinhostwindow-interface.md) and adds methods that support the creation of licensed controls.  
  
 See [Hosting ActiveX Controls Using ATL AXHost](../../atl/hosting-activex-controls-using-atl-axhost.md) for a sample that uses the members of this interface.  
  
## Requirements  
 The definition of this interface is available as IDL or C++, as shown below.  
  
|Definition type|File|  
|---------------------|----------|  
|IDL|ATLIFace.idl|  
|C++|ATLIFace.h (also included in ATLBase.h)|  
  
##  <a name="createcontrollic"></a>  IAxWinHostWindowLic::CreateControlLic  
 Creates a licensed control, initializes it, and hosts it in the window identified by `hWnd`.  
  
```
STDMETHOD(CreateControlLic)(
    LPCOLESTR lpTricsData,
    HWND hWnd,
    IStream* pStream,
    BSTR bstrLic);
```  
  
### Parameters  
 `bstrLic`  
 [in] The BSTR that contains the license key for the control.  
  
### Remarks  
 See [IAxWinHostWindow::CreateControl](../../atl/reference/iaxwinhostwindow-interface.md#createcontrol) for a description of the remaining parameters and return value.  
  
 Calling this method is equivalent to calling [IAxWinHostWindowLic::CreateControlLicEx](#createcontrollicex)  
  
### Example  
 See [Hosting ActiveX Controls Using ATL AXHost](../../atl/hosting-activex-controls-using-atl-axhost.md) for a sample that uses `IAxWinHostWindowLic::CreateControlLic`.  
  
##  <a name="createcontrollicex"></a>  IAxWinHostWindowLic::CreateControlLicEx  
 Creates a licensed ActiveX control, initializes it, and hosts it in the specified window, similar to [IAxWinHostWindow::CreateControl](../../atl/reference/iaxwinhostwindow-interface.md#createcontrol).  
  
```
STDMETHOD(CreateControlLicEx)(
    LPCOLESTR lpszTricsData,
    HWND hWnd,
    IStream* pStream,
    IUnknown** ppUnk,
    REFIID riidAdvise,
    IUnknown* punkAdvise,
    BSTR bstrLic);
```  
  
### Parameters  
 `bstrLic`  
 [in] The BSTR that contains the license key for the control.  
  
### Remarks  
 See [IAxWinHostWindow::CreateControlEx](../../atl/reference/iaxwinhostwindow-interface.md#createcontrolex) for a description of the remaining parameters and return value.  
  
### Example  
 See [Hosting ActiveX Controls Using ATL AXHost](../../atl/hosting-activex-controls-using-atl-axhost.md) for a sample that uses `IAxWinHostWindowLic::CreateControlLicEx`.









