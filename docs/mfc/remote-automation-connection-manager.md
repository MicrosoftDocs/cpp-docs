---
title: "Remote Automation Connection Manager | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: ["C++"]
helpviewer_keywords: ["Automation clients [MFC], configuring for Remote Automation", "registry [MFC], remote Automation", "Automation servers [MFC], configuring for Remote Automation", "Remote Automation Connection Manager [MFC]", "Remote Automation [MFC], configuring client and server machines", "RAC Manager tool [MFC]"]
ms.assetid: 562eb7bc-f95c-46ad-ac97-f0dfa98362af
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Remote Automation Connection Manager
To configure both client and server machines, you need to make registry changes. Rather than doing this by hand, it is far easier to use the Remote Automation Connection (RAC) Manager tool. This tool, RACMGR32.EXE, along with RACREG32.DLL, needs to be copied to any directory you choose. By putting it in the PATH, it can be executed from the taskbar using Run. Alternatively, you can create a shortcut to it or place a reference to it on the Start menu.  
  
 RACMGR32 is written in Visual Basic and therefore needs some Visual Basic support DLLs. These files are placed in the same directory as RACMGR32.EXE on the CD-ROM. The versions of these files that are installed by the Setup for Visual C++ Enterprise Edition are equivalent or more recent than those that shipped with Visual Basic Enterprise Edition 5.0. The Visual C++ Setup copies the new versions of the Visual Basic files to your system directory, which is typically C:\Windows\System32. Setup also registers these files with the operating system. You may remove them from your Visual Basic installation.  
  
## See Also  
 [Automation Manager (MFC)](../mfc/automation-manager-mfc.md)   
 [Remote Automation User Components](../mfc/remote-automation-user-components.md)   
 [Remote Automation Installation](../mfc/remote-automation-installation.md)

