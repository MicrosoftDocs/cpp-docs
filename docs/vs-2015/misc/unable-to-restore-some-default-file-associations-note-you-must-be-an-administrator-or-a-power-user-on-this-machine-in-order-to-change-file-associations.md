---
title: "Unable to restore some default file associations. Note: you must be an administrator or a power user on this machine in order to change file associations. | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VS.Message.0x00006A85"
  - "VS_E_RESTOREFILEASSOCS"
ms.assetid: 449c5608-83e3-4ddd-91f1-1061916995b3
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Unable to restore some default file associations. Note: you must be an administrator or a power user on this machine in order to change file associations.
This error occurs when the devenv command-line switch /AssociateFiles is used, but the current user rights do not allow access to the HKEY_CLASSES_ROOT section of the registry. When you run [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] on [!INCLUDE[wiprlhext](../includes/wiprlhext-md.md)], you must run devenv as an administrator to use the /AssociateFiles (devenv.exe) switch.  
  
### To correct this error  
  
-   Change to administrative credentials and try again.  
  
## See Also  
 [User Rights and Visual Studio](http://msdn.microsoft.com/en-us/d5c55084-1e7b-4b61-b478-137db01c0fc0)   
 [Devenv Command Line Switches](http://msdn.microsoft.com/library/e12bc6ed-74fd-4bea-8d7c-89b99c20bad8)