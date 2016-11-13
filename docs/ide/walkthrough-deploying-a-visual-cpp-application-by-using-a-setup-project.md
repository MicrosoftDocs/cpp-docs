---
title: "Walkthrough: Deploying a Visual C++ Application By Using a Setup Project | Microsoft Docs"
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
  - "deployment for Visual C++"
ms.assetid: 66735cda-8fe3-4211-a19a-2cf717a12a3f
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
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
# Walkthrough: Deploying a Visual C++ Application By Using a Setup Project
Describes how to use a setup project to deploy a Visual C++ application.  
  
## Prerequisites  
 You need the following components to complete this walkthrough:  
  
-   A computer with [!INCLUDE[vs_dev11_long](../build/includes/vs_dev11_long_md.md)] installed.  
  
-   An additional computer that does not have the Visual C++ libraries.  
  
### To deploy an application by using a setup project  
  
1.  Use the **MFC ApplicationWizard** to create a new Visual Studio solution. To find the wizard, from the **New Project** dialog box, expand the **Visual C++** node, select **MFC**, select **MFC Application**, enter a name for the project, and then click **OK**.  
  
2.  Change the active solution configuration to **Release**. From the **Build** menu, select **Configuration Manger**. From the **Configuration Manager** dialog box, select **Release** from the **Active solution configuration** drop-down box.  
  
3.  Press F7 to build the application. Or, on the **Build** menu, click **Build Solution**. This enables the setup project to use the output of this MFC application project.  
  
4.  If you haven’t already done so, download InstallShield Limited Edition (ISLE), which is free for Visual Studio developers and replaces the functionality of the project templates in Visual Studio for setup and deployment. When you are connected to the Internet, open the **New Project** dialog box by choosing **File**, **New**, **Project** on the menu bar, or by right-clicking your solution in **Solution Explorer** and choosing **Add**, **New Project…**. Expand the **Other Project Types** node, choose **Enable InstallShield Limited Edition** in the **Setup and Deployment** node, and follow the instructions that appear. Once you have downloaded, installed and activated InstallShield Limited Edition, close Visual Studio and re-open it.  
  
5.  Open the **New Project** dialog box again, expand the **Other Project Types** node, and choose **InstallShield Limited Edition Project** in the **InstallShield Limited Edition** node.  
  
6.  Follow instructions in the **Getting Started** node of the setup project created by the InstallShield Limited Edition template to add an output reference to your Visual Studio MFC project.  
  
7.  Build the setup project to create the installer file (setup.exe). To do so, right click the setup project node in **Solution Explorer** and select **Build**.  
  
     InstallShield Limited Edition creates the setup file in the setup project tree (by default, it may be located in the Express\SingleImage\DiskImages\DISK1 subfolder of the setup project).  
  
8.  Run the setup program on a second computer that does not have the Visual C++ libraries.  
  
## See Also  
 [Deployment Examples](../ide/deployment-examples.md)