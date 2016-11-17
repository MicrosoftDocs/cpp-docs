---
title: "CAtlServiceModuleT::Start Function | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CServiceModule.Start"
  - "CServiceModule::Start"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Start method"
ms.assetid: b5193a23-41bc-42d2-8d55-3eb43dc62238
caps.latest.revision: 10
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
# CAtlServiceModuleT::Start Function
When the service is run, **_tWinMain** calls **CAtlServiceModuleT::WinMain**, which in turn calls `CAtlServiceModuleT::Start`.  
  
 `CAtlServiceModuleT::Start` sets up an array of **SERVICE_TABLE_ENTRY** structures that map each service to its startup function. This array is then passed to the Win32 API function, [StartServiceCtrlDispatcher](http://msdn.microsoft.com/library/windows/desktop/ms686324). In theory, one EXE could handle multiple services and the array could have multiple **SERVICE_TABLE_ENTRY** structures. Currently, however, an ATL-generated service supports only one service per EXE. Therefore, the array has a single entry that contains the service name and **_ServiceMain** as the startup function. **_ServiceMain** is a static member function of `CAtlServiceModuleT` that calls the non-static member function, `ServiceMain`.  
  
> [!NOTE]
>  Failure of **StartServiceCtrlDispatcher** to connect to the service control manager (SCM) probably means that the program is not running as a service. In this case, the program calls `CAtlServiceModuleT::Run` directly so that the program can run as a local server. For more information about running the program as a local server, see [Debugging Tips](../atl/debugging-tips.md).  
  
## See Also  
 [Services](../atl/atl-services.md)   
 [CAtlServiceModuleT::Start](../atl/reference/catlservicemodulet-class.md#catlservicemodulet__start)

