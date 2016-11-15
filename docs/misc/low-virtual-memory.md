---
title: "Low Virtual Memory | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: aec803b1-9d76-46bb-8f14-8c63d80112a5
caps.latest.revision: 13
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
# Low Virtual Memory
This message appears when virtual memory is low and [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] stops responding. However, this error doesn't occur when the virtual memory on your machine is low but rather when [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] is running out of address space. Most commonly, this error occurs on machines that are running 32-bit operating systems, which limit [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] to 2 GB of address space. When you work with 32-bit processes, the app can address only 4 GB of memory (2^32 bits). However, 32-bit versions of Windows reserve 2 GB of a process's virtual address space for internal purposes (for example, for working with the machine’s graphics card or other system drivers). Therefore, the 32-bit process can use only 2 GB for its internal purposes. Users can set the /3GB switch to ensure that Windows reserves only 1 GB for itself and gives 3 GB to the process. In most cases, performance doesn't decrease with a limit of only 1 GB for Windows.  
  
 On systems that run 64-bit versions of Windows, this error rarely occurs because the process can use all 4 GB of addressable space, and Windows can use 64-bit memory addresses for working with the hardware and system drivers. However, memory utilization can exceed 3 GB or even 4 GB when [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] processes some data sets. For more information, see [Visual Studio: Why is there no 64 bit version? (yet)](http://go.microsoft.com/fwlink/?LinkId=246307).  
  
 This error typically occurs when [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] is caching large amounts of data or running multiple memory-intensive processes.  
  
 The following scenarios involve caching large amounts of data, and you can usually fix them by restarting [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
-   Running [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] for the first time after installation.  
  
-   Installing or uninstalling an extension.  
  
-   Choosing or customizing items in the **Toolbox**.  
  
-   Changing your [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] settings.  
  
-   Allowing the system to go into sleep (hibernate) mode while [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] is open.  
  
 The following scenarios require large amounts of active memory. In these cases, we recommend running [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] with only essential components open or running additional processes in a second instance of [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
-   Building large solutions.  
  
-   Working with large XML documents.  
  
-   Upgrading solutions from a previous version of [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
-   Retargeting solutions.  
  
-   Running [!INCLUDE[esprtfc](../misc/includes/esprtfc_md.md)] while editing code.  
  
-   Running IntelliTrace on multiple projects.  
  
 If these measures don't prevent the error, you can increase your available address space on a system that's running [!INCLUDE[win7](../build/includes/win7_md.md)] if you run bcedit.exe with the following syntax:  
  
 **bcdedit /set IncreaseUserVa 3072**  
  
 This command increases your user-mode virtual memory allocation from 2 GB to 3 GB on an x86-based system. If you add the /3GB switch, the entire system can address more memory and give each application a greater percentage of the available memory.  
  
> [!NOTE]
>  You must run bcdedit.exe with administrative permissions. If BitLocker encryption is enabled, you must suspend it, make the change, reboot the system, and then re-enable Bitlocker.  
  
 Even after you increase your virtual memory allocation to 3 GB, this error might recur because any single application can still use only 2 GB of virtual memory. If this error continues to appear, reduce the size of your solution, and then restart [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)]. You can reduce your solution either by refactoring it to remove projects that are infrequently used or by unloading projects that aren’t needed. If the error occurs when you build your solution, try building it at a command prompt.  
  
## See Also  
 [Resources for Troubleshooting IDE Errors](/visualstudio/ide/reference/resources-for-troubleshooting-integrated-development-environment-errors)