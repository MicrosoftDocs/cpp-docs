---
title: "CAtlServiceModuleT::ServiceMain Function | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ServiceMain"
  - "CServiceModule::ServiceMain"
  - "CServiceModule.ServiceMain"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ServiceMain method"
ms.assetid: f21408c1-1919-4dec-88d8-bf5b39ac9808
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
# CAtlServiceModuleT::ServiceMain Function
The service control manager (SCM) calls `ServiceMain` when you open the Services Control Panel application, select the service, and click **Start**.  
  
 After the SCM calls `ServiceMain`, a service must give the SCM a handler function. This function lets the SCM obtain the service's status and pass specific instructions (such as pausing or stopping). The SCM gets this function when the service passes **_Handler** to the Win32 API function, [RegisterServiceCtrlHandler](http://msdn.microsoft.com/library/windows/desktop/ms685054). (**_Handler** is a static member function that calls the non-static member function [Handler](../atl/reference/catlservicemodulet-class.md#catlservicemodulet__handler).)  
  
 At startup, a service should also inform the SCM of its current status. It does this by passing **SERVICE_START_PENDING** to the Win32 API function, [SetServiceStatus](http://msdn.microsoft.com/library/windows/desktop/ms686241).  
  
 `ServiceMain` then calls `CAtlExeModuleT::InitializeCom`, which calls the Win32 API function [CoInitializeEx](http://msdn.microsoft.com/library/windows/desktop/ms695279). By default, `InitializeCom` passes the **COINIT_MULTITHREADED** flag to the function. This flag indicates that the program is to be a free-threaded server.  
  
 Now, `CAtlServiceModuleT::Run` is called to perform the main work of the service. **Run** continues to execute until the service is stopped.  
  
## See Also  
 [Services](../atl/atl-services.md)   
 [CAtlServiceModuleT::ServiceMain](../atl/reference/catlservicemodulet-class.md#catlservicemodulet__servicemain)

