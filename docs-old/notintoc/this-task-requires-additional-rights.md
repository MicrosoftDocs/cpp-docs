---
title: "This task requires additional rights"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "vs.UACDialog"
ms.assetid: a03d3509-5e6e-411a-9aec-0766d7ee3a0e
caps.latest.revision: 7
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
# This task requires additional rights
This error is displayed if a Visual Studio command is invoked by a user whose account has insufficient permissions to complete the operation.  
  
 Some Visual Studio commands must be run with an account that has user access rights sufficient to enable the command to read or write all of the necessary files and registry keys. To gain these rights, you must close and then re-open Visual Studio with an account that has elevated access, such as an Administrator.  
  
 For more information about permissions when running Visual Studio, see [User Permissions](../Topic/User%20Permissions%20and%20Visual%20Studio.md).  
  
### To correct this error  
  
1.  In the dialog box, click **Restart using another account**.  
  
     This prompts you to save the currently loaded solution, and then closes Visual Studio and restarts it, prompting you to switch to a different account.  
  
2.  At the login prompt, log in with an account that has higher rights than the prior account, such as Administrator.  
  
     When Visual Studio starts, it reloads the last solution and the command line.  
  
> [!NOTE]
>  Logging in with an account that has higher rights does not necessarily guarantee that the Visual Studio command works. Some commands may run unsuccessfully even if you are using an Administrator account.