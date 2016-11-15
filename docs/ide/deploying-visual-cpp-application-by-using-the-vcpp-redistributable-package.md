---
title: "Walkthrough: Deploying a Visual C++ Application By Using the Visual C++ Redistributable Package | Microsoft Docs"
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
  - "walkthrough, deploying a Visual C++ application by using the redistributable package"
ms.assetid: e59becbf-b8c6-4c8e-bab3-b69cc1ed3e5e
caps.latest.revision: 9
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
# Walkthrough: Deploying a Visual C++ Application By Using the Visual C++ Redistributable Package
This step-by-step article describes how to use the Visual C++ Redistributable Package to deploy a Visual C++ application.  
  
## Prerequisites  
 You must have these components to complete this walkthrough:  
  
-   A computer that has Visual Studio installed.  
  
-   An additional computer that does not have the Visual C++ libraries.  
  
### To use the Visual C++ Redistributable Package to deploy an application  
  
1.  Create and build an MFC application by following the first three steps in [Walkthrough: Deploying a Visual C++ Application By Using a Setup Project](../ide/deploying-visual-cpp-application-by-using-the-vcpp-redistributable-package.md).  
  
2.  Create a file, name it setup.bat, and add the following commands to it. Change `MyMFCApplication` to the name of your project.  
  
    ```  
  
              @echo off  
    vcredist_x86.exe  
    mkdir "C:\Program Files\MyMFCApplication"  
    copy MyMFCApplication.exe "C:\Program Files\MyMFCApplication"  
    ```  
  
3.  Create a self-extracting setup file:  
  
    1.  At a command prompt or in the **Run** window, run iexpress.exe.  
  
    2.  Select **Create new Self Extraction Directive file** and then choose the **Next** button.  
  
    3.  Select **Extract files and run an installation command** and then choose **Next**.  
  
    4.  In the text box, enter the name of your MFC application and then choose **Next**.  
  
    5.  On the **Confirmation prompt** page, select **No Prompt** and then choose **Next**.  
  
    6.  On the **License agreement** page, select **Do not display a license** and then choose **Next**.  
  
    7.  On the **Packaged files** page, add the following files and then choose **Next**.  
  
        -   Your MFC application (.exe file).  
  
        -   vcredist_x86.exe. This file is located in \Program Files\Microsoft SDKs\Windows\v7.0A\Bootstrapper\Packages\vcredist_x86\\.  
  
        -   The setup.bat file that you created in the earlier step.  
  
    8.  On the **Install Program to Launch** page, in the **Install Program** text box, enter the following command line and then choose **Next**.  
  
         **cmd.exe /c "setup.bat"**  
  
    9. On the **Show window** page, select **Default** and then choose **Next**.  
  
    10. On the **Finished message** page, select **No message** and then choose **Next**.  
  
    11. On the **Package Name and Options** page, enter a name for your self-extracting setup file, select the **Store files using Long File Name inside Package** option, and then choose **Next**. The end of the file name must be Setup.exe—for example, MyMFCApplicationSetup.exe.  
  
    12. On the **Configure restart** page, select **No restart** and then choose **Next**.  
  
    13. On the **Save Self Extraction Directive** page, select **Save Self Extraction Directive (SED) file** and then choose **Next**.  
  
    14. On the **Create package** page, choose **Next**.  
  
4.  Test the self-extracting setup file on the other computer, which does not have the Visual C++ libraries:  
  
    1.  On the other computer, download a copy of the setup file, and then install it by running it and following the steps that it provides.  
  
    2.  Run the MFC application.  
  
         The self-extracting setup file installs the MFC application that is in the folder that you specified in step 2. The application runs successfully because the Visual C++ Redistributable Package installer is included in the self-extracting setup file.  
  
        > [!IMPORTANT]
        >  To determine which version of the runtime is installed, the installer checks the registry key \HKLM\SOFTWARE\Microsoft\VisualStudio\11.0\VC\Runtimes\\[platform]. If the currently installed version is newer than the version that the installer is attempting to install, the installer returns success without installing the older version and leaves an additional entry on the installed programs page in the Control Panel.  
  
## See Also  
 [Deployment Examples](../ide/deployment-examples.md)