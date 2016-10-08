---
title: "CAtlServiceModuleT::Run Function"
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
ms.topic: article
ms.assetid: 42c010f0-e60e-459c-a63b-a53a24cda93b
caps.latest.revision: 10
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
# CAtlServiceModuleT::Run Function
**Run** contains calls to `PreMessageLoop`, `RunMessageLoop`, and `PostMessageLoop`. After being called, `PreMessageLoop` first stores the service's thread ID. The service will use this ID to close itself by sending a **WM_QUIT** message using the Win32 API function, [PostThreadMessage](http://msdn.microsoft.com/library/windows/desktop/ms644946).  
  
 `PreMessageLoop` then calls `InitializeSecurity`. By default, `InitializeSecurity` calls [CoInitializeSecurity](http://msdn.microsoft.com/library/windows/desktop/ms693736) with the security descriptor set to NULL, which means that any user has access to your object.  
  
 If you do not want the service to specify its own security, override `PreMessageLoop` and don't call `InitializeSecurity`, and COM will then determine the security settings from the registry. A convenient way to configure registry settings is with the [DCOMCNFG](../VS_visualcpp/DCOMCNFG.md) utility discussed later in this section.  
  
 Once security is specified, the object is registered with COM so that new clients can connect to the program. Finally, the program tells the service control manager (SCM) that it is running and the program enters a message loop. The program remains running until it posts a quit message upon service shutdown.  
  
## See Also  
 [Services](../VS_visualcpp/ATL-Services.md)   
 [CSecurityDesc Class](../VS_visualcpp/CSecurityDesc-Class.md)   
 [CSid Class](../VS_visualcpp/CSid-Class.md)   
 [CDacl Class](../VS_visualcpp/CDacl-Class.md)   
 [CAtlServiceModuleT::Run](../Topic/CAtlServiceModuleT::Run.md)