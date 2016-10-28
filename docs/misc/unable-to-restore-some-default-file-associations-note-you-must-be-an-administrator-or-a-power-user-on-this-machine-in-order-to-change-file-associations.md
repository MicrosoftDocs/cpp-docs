---
title: "Unable to restore some default file associations. Note: you must be an administrator or a power user on this machine in order to change file associations."
ms.custom: ""
ms.date: "10/20/2016"
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
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Unable to restore some default file associations. Note: you must be an administrator or a power user on this machine in order to change file associations.
This error occurs when the devenv command-line switch /AssociateFiles is used, but the current user rights do not allow access to the HKEY_CLASSES_ROOT section of the registry. When you run [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] on [!INCLUDE[wiprlhext](../c-runtime-library/reference/includes/wiprlhext_md.md)], you must run devenv as an administrator to use the /AssociateFiles (devenv.exe) switch.  
  
### To correct this error  
  
-   Change to administrative credentials and try again.  
  
## See Also  
 [User Rights and Visual Studio](http://msdn.microsoft.com/en-us/d5c55084-1e7b-4b61-b478-137db01c0fc0)   
 [Devenv Command Line Switches](../Topic/Devenv%20Command%20Line%20Switches.md)