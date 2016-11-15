---
title: "Walkthrough: Deploying Your Program (C++) | Microsoft Docs"
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
  - "deploying applications [C++], walkthroughs"
  - "setup projects [C++]"
  - "program deployments [C++]"
  - "projects [C++], setup"
  - "projects [C++], deploying programs"
  - "application deployment [C++], walkthroughs"
ms.assetid: 79e6cc4e-dced-419d-aaf7-d62d1367603f
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
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
# Walkthrough: Deploying Your Program (C++)
Now that you've created your application by completing the earlier related walkthroughs, which are listed in [Using the Visual Studio IDE for C++ Desktop Development](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md), the last step is to create an installer so that other users can install the program on their computers. To do this, you'll add a new project to your existing solution. The output of this new project is a setup.exe file that will install your app on another computer.  
  
 This walkthrough shows how to use Windows Installer to deploy your application. You can also use ClickOnce to deploy an application. For more information, see [ClickOnce Deployment for Visual C++ Applications](../ide/clickonce-deployment-for-visual-cpp-applications.md). For more information about deployment in general, see [Deploying Applications, Services, and Components](/visualstudio/deployment/deploying-applications-services-and-components).  
  
## Prerequisites  
  
-   This walkthrough assumes that you understand the fundamentals of the C++ language.  
  
-   It also assumes that you have completed the earlier related walkthroughs that are listed in [Using the Visual Studio IDE for C++ Desktop Development](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md).  
  
-   This walkthrough cannot be completed in Express editions of Visual Studio.  
  
-   If you haven’t already done so, download InstallShield Limited Edition (ISLE), as described in the steps later in this article. ISLE is free for Visual Studio developers and replaces the functionality of the setup and deployment project templates in earlier editions of Visual Studio.  
  
### To install the ISLE setup and deployment project template  
  
1.  When you are connected to the Internet, on the menu bar, choose **File**, **New**, **Project** to open the **New Project** dialog box.  
  
2.  In the left pane of the dialog box, expand the **Installed**, **Templates**, and **Other Project Types** nodes, and then select **Setup and Deployment**. In the center pane, select **Enable InstallShield Limited Edition** and then choose the **OK** button.  
  
3.  Follow the instructions to install InstallShield Limited Edition for Visual Studio (ISLE).  
  
4.  After you have downloaded, installed, and activated ISLE, close Visual Studio and re-open it.  
  
5.  On the menu bar, choose **File**, **Recent Projects and Solutions**, and then choose the **Game** solution to reopen it.  
  
### To create a setup project and install your program  
  
1.  Change the active solution configuration to Release. On the menu bar, choose **Build**, **Configuration Manager**. In the **Configuration Manager** dialog box, on the **Active solution configuration** drop-down list, select **Release**. Choose the **Close** button to save the configuration.  
  
2.  On the menu bar, choose **File**, **New**, **Project** to open the **New Project** dialog box.  
  
3.  In the left pane of the dialog box, expand the **Installed**, **Templates**, and **Other Project Types** nodes, and then select **Setup and Deployment**. In the center pane, select **InstallShield Limited Edition Project**.  
  
4.  Enter a name for the setup project in the **Name** box. For this example, enter **Game Installer**. In the **Solution** drop-down list, select **Add to solution**. Choose the **OK** button to create the setup project. A **Project Assistant (Game Installer)** tab opens in the editor window.  
  
5.  At the bottom of the **Project Assistant (Game Installer)** tab, choose the **Application Information** link.  
  
6.  On the **Application Information** page, specify your company name as you want it to appear in the installer. You can use your own company name, or for this example, use **Contoso**. Specify your application name; in this example, specify **Game**. Specify your company web address, or for this example, use **http://www.contoso.com**.  
  
7.  At the bottom of the **Project Assistant (Game Installer)** tab, choose the **Installation Interview** link.  
  
8.  On the **Installation Interview** page, under **Do you want to display a License Agreement Dialog**, select the **No** option button. Under **Do you want to prompt users to enter their Company Name and User Name**, select the **No** option button.  
  
9. In **Solution Explorer**, expand the **Game Installer** project, expand the **Organize Your Setup** node, and then open the **General Information** page.  
  
10. On the **General Information (Game Installer)** tab in the editor window, specify a **Tag Creator ID**, for example, **regid.2012-12.com.Contoso**.  
  
11. In **Solution Explorer**, under the **Game Installer** project, expand the **Specify Application Data** node, and then open the **Files** page.  
  
12. On the **Files (Game Installer)** tab in the editor window, under **Source computer’s files**, open the shortcut menu for **Primary Output From Game** and choose **Copy**.  
  
13. Open a shortcut menu in the space under the **Name** column in **Destination computer’s files**, and choose **Paste**. A new item named **Game.Primary Output** appears.  
  
14. In **Solution Explorer**, under the **Specify Application Data** node, open the **Redistributables** page.  
  
15. On the **Redistributables (Game Installer)** tab in the editor window, select the **Visual C++ 11.0 CRT (x86)** check box.  
  
16. On the menu bar, choose **Build**, **Build Solution** to build the Game project and the Game Installer project.  
  
17. In the solution folder, locate the setup.exe program that was built from the Game Installer project, and then run it to install the Game application on your computer. You can copy this file to install the application and its required library files on another computer.  
  
18. You can set many options in the setup project to suit your requirements. For more information, in **Solution Explorer**, under the **Game Installer** project, open the **Getting Started** page and then choose the F1 key to open the ISLE help library.  
  
## Next Steps  
 **Previous:** [Walkthrough: Debugging a Project (C++)](../ide/walkthrough-debugging-a-project-cpp.md)  
  
## See Also  
 [Visual C++ Guided Tour](http://msdn.microsoft.com/en-us/499cb66f-7df1-45d6-8b6b-33d94fd1f17c)   
 [Deploying Desktop Applications](../ide/deploying-native-desktop-applications-visual-cpp.md)