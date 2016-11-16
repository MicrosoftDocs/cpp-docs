---
title: "Deployment in Visual C++ | Microsoft Docs"
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
  - "deploying applications [C++]"
  - "application deployment [C++]"
ms.assetid: d4b4ffc0-d2bd-4e4a-84a6-62f1c26f6a09
caps.latest.revision: 21
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
# Deployment in Visual C++
When you deploy a [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] application to another computer, you must install both the application and any library files it depends on. If a library is updated—for example, when a security vulnerability is corrected—you'll probably want to apply the update wherever your application is deployed.  
  
 Visual Studio enables three ways to deploy the [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] libraries together with your application: central deployment, local deployment, and static linking. Microsoft automatically updates its libraries that are centrally deployed. For [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] libraries that are locally deployed or statically linked, the application writer must provide the updates.  
  
## Central Deployment  
 In central deployment, [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] library files are installed in the %windir%\system32\ directory. To centrally deploy [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] libraries, you can use one of these:  
  
-   *Redistributable package files*, which are stand-alone command-line executables that you can use to install the [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] redistributable libraries.  
  
-   *Redistributable merge modules (.msm files)*, which you can use to deploy specific libraries and which you include in your application’s Windows Installer (.msi) file.  
  
 A redistributable package file installs the [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] libraries for a particular system architecture. You can program your application setup to run it as a prerequisite before you install your application. A merge module enables the inclusion of setup logic for a specific [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] library in a Windows Installer application setup file. You can include as many merge modules as the application requires.  
  
 Because central deployment of [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] libraries by using a redistributable package enables automatic updating by Microsoft, we recommend that you use dynamic linking and redistributable packages for your application.  
  
## Local Deployment  
 In local deployment, library files are installed in the application folder together with the executable file. Different versions of libraries can be installed in the same folder because the file name of each version is made unique by the inclusion of its version number. For example, version 12 of the C runtime is msvcr120.dll.  
  
 Because Microsoft cannot automatically update locally deployed [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] libraries, we caution against local deployment of these libraries. If you decide to use local deployment of redistributable libraries, we recommend that you implement your own method of automatically updating the locally deployed libraries.  
  
## Static Linking  
 You can statically link a [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] library to an application—that is, compile it into the application—so that you don't have to deploy the [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] library files separately. However, we caution against this approach because statically linked libraries cannot be updated in place. If you use static linking and you want to update a linked library, you have to recompile and redeploy your application.  
  
## Troubleshooting  
 The loading order of [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] libraries is system-dependent. To diagnose loader issues, use depends.exe or where.exe. For more information, see [Dynamic-Link Library Search Order (Windows)](http://msdn.microsoft.com/library/windows/desktop/ms682586.aspx).  
  
## See Also  
 [Deploying Desktop Applications](../ide/deploying-native-desktop-applications-visual-cpp.md)