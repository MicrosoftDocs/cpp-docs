---
title: "IAxWinHostWindowLic Interface"
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
ms.assetid: 750f1520-6bce-428c-aca0-fccbe3f063c7
caps.latest.revision: 13
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
|[CreateControlLic](#iaxwinhostwindowlic__createcontrollic)|Creates a licensed control and attaches it to the host object.|  
|[CreateControlLicEx](#iaxwinhostwindowlic__createcontrollicex)|Creates a licensed control, attaches it to the host object, and optionally sets up an event handler.|  
  
## Remarks  
 `IAxWinHostWindowLic` inherits from                 [IAxWinHostWindow](../VS_visualcpp/IAxWinHostWindow-Interface.md) and adds methods that support the creation of licensed controls.  
  
 See                 [Hosting ActiveX Controls Using ATL AXHost](../VS_visualcpp/Hosting-ActiveX-Controls-Using-ATL-AXHost.md) for a sample that uses the members of this interface.  
  
## Requirements  
 The definition of this interface is available as IDL or C++, as shown below.  
  
|Definition type|File|  
|---------------------|----------|  
|IDL|ATLIFace.idl|  
|C++|ATLIFace.h (also included in ATLBase.h)|  
  
##  <a name="iaxwinhostwindowlic__createcontrollic"></a>  IAxWinHostWindowLic::CreateControlLic  
 Creates a licensed control, initializes it, and hosts it in the window identified by                 `hWnd`.  
  
```  
STDMETHOD( CreateControlLic )(  
           LPCOLESTR lpTricsData,  
    HWND hWnd,  
    IStream* pStream,  
           BSTR bstrLic );  
```  
  
### Parameters  
 `bstrLic`  
 [in] The BSTR that contains the license key for the control.  
  
### Remarks  
 See                         [IAxWinHostWindow::CreateControl](../VS_visualcpp/IAxWinHostWindow-Interface.md#iaxwinhostwindow__createcontrol) for a description of the remaining parameters and return value.  
  
 Calling this method is equivalent to calling                         [IAxWinHostWindowLic::CreateControlLicEx](#iaxwinhostwindowlic__createcontrollicex)  
  
### Example  
 See                                 [Hosting ActiveX Controls Using ATL AXHost](../VS_visualcpp/Hosting-ActiveX-Controls-Using-ATL-AXHost.md) for a sample that uses                                 `IAxWinHostWindowLic::CreateControlLic`.  
  
##  <a name="iaxwinhostwindowlic__createcontrollicex"></a>  IAxWinHostWindowLic::CreateControlLicEx  
 Creates a licensed ActiveX control, initializes it, and hosts it in the specified window, similar to                 [IAxWinHostWindow::CreateControl](../VS_visualcpp/IAxWinHostWindow-Interface.md#iaxwinhostwindow__createcontrol).  
  
```  
STDMETHOD( CreateControlLicEx )(  
           LPCOLESTR lpszTricsData,  
    HWND hWnd,  
    IStream* pStream,  
    IUnknown** ppUnk,  
    REFIID riidAdvise,  
    IUnknown* punkAdvise,   
           BSTR bstrLic );  
```  
  
### Parameters  
 `bstrLic`  
 [in] The BSTR that contains the license key for the control.  
  
### Remarks  
 See                         [IAxWinHostWindow::CreateControlEx](../VS_visualcpp/IAxWinHostWindow-Interface.md#iaxwinhostwindow__createcontrolex) for a description of the remaining parameters and return value.  
  
### Example  
 See                                 [Hosting ActiveX Controls Using ATL AXHost](../VS_visualcpp/Hosting-ActiveX-Controls-Using-ATL-AXHost.md) for a sample that uses                                 `IAxWinHostWindowLic::CreateControlLicEx`.