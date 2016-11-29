---
title: "How User Account Control (UAC) Affects Your Application | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "UAC [C++]"
  - "security [C++], User Account Control"
  - "user accounts [C++]"
  - "User Account Control [C++]"
ms.assetid: 0d001870-253e-4989-b689-f78035953799
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
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
# How User Account Control (UAC) Affects Your Application
User Account Control (UAC) is a feature of Windows Vista in which user accounts have limited privileges. You can find detailed information about UAC at these sites:  
  
-   [Windows Vista User Account Control Step by Step Guide](http://go.microsoft.com/fwlink/?linkid=53781)  
  
-   [Developer Best Practices and Guidelines for Applications in a Least Privileged Environment](http://go.microsoft.com/fwlink/?linkid=82444)  
  
-   [Understanding and Configuring User Account Control in Windows Vista](http://go.microsoft.com/fwlink/?LinkId=82445)  
  
## Building Projects after Enabling UAC  
 If you build a Visual C++ project on Windows Vista with UAC disabled, and you later enable UAC, you must clean and rebuild the project for it to work correctly.  
  
## Applications that Require Administrative Privileges  
 Be default, the Visual C++ linker embeds a UAC fragment into the manifest of an application with an execution level of `asInvoker`. If your application requires administrative privileges to run correctly (for example, if it modifies the HKLM node of the registry or if it writes to protected areas of the disk, such as the Windows directory), you must modify your application.  
  
 The first option is to modify the UAC fragment of the manifest to change the execution level to *requireAdministrator*. The application will then prompt the user for administrative credentials before it runs. For information about how to do this, see [/MANIFESTUAC (Embeds UAC information in manifest)](../build/reference/manifestuac-embeds-uac-information-in-manifest.md).  
  
 The second option is to not embed a UAC fragment into the manifest by specifying the **/MANIFESTUAC:NO** linker option. In this case, your application will run virtualized. Any changes you make to the registry or to the file system will not persist after your application has ended.  
  
 The following flowchart describes how your application will run depending on whether UAC is enabled and whether the application has a UAC manifest:  
  
 ![Windows Vista Loader behavior](media/uacflowchart.png "UACflowchart")  
  
## See Also  
 [Security Best Practices](security-best-practices-for-cpp.md)