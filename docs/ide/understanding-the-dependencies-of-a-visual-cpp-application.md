---
title: "Understanding the Dependencies of a Visual C++ Application | Microsoft Docs"
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
  - "application deployment [C++], dependencies"
  - "Dependency Walker"
  - "dependencies [C++], application deployment and"
  - "deploying applications [C++], dependencies"
  - "DUMPBIN utility"
  - "DLLs [C++], dependencies"
  - "depends.exe"
  - "libraries [C++], application deployment issues"
ms.assetid: 62a44c95-c389-4c5f-82fd-07d7ef09dbf9
caps.latest.revision: 20
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
# Understanding the Dependencies of a Visual C++ Application
To determine which [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] libraries an application depends on, you can view the project properties. (In Solution Explorer, right-click on the project and choose **Properties** to open the **Property Pages** dialog box.) You can also use the Dependency Walker (depends.exe), which gives a more comprehensive picture of the dependencies.  
  
 In the **Property Pages** dialog box, you can examine various pages under **Configuration Properties** to understand the dependencies. For example, if your project uses the MFC libraries and you choose **Use of MFC**, **Use MFC in a Shared DLL** on the **Configuration Properties**, **General** page, your application at run time depends on MFC DLLs such as mfc\<version>.dll. If your application doesn't use MFC, it might depend on the CRT library if you choose a **Runtime Library** value of **Multi-threaded Debug DLL (/MDd)** or **Multi-threaded DLL (/MD)** on the **Configuration Properties**, **C/C++**, **Code Generation** page.  
  
 A more comprehensive way to determine which DLLs your application depends on is to use Dependency Walker (depends.exe) to open the application. You can download the tool from the [Dependency Walker](http://go.microsoft.com/fwlink/p/?LinkId=132640) web site.  
  
 By using depends.exe, you can examine a list of DLLs that are linked to the application at load time, and a list of its delay-loaded DLLs. If you want to get a complete list of DLLs that are dynamically loaded at run time, you can use the profiling feature in depends.exe to test the application until you're sure that all code paths have been exercised. When you end the profiling session, depends.exe shows which DLLs were dynamically loaded during run time.  
  
 When you use depends.exe, be aware that a DLL might have a dependency on another DLL or on a specific version of a DLL. You can use depends.exe on either the development computer or on a target computer. On the development computer, depends.exe reports the DLLs that are required to support an application. If you have trouble getting an application to run on a target computer, you can copy depends.exe to it and then open the application in the tool so that you can determine whether any required DLLs are missing or incorrect.  
  
 When you know which DLLs your application depends on, you can determine the ones that you have to redistribute with your application when you deploy it to another computer. In most cases, you don't have to redistribute system DLLs, but you may have to redistribute DLLs for [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] libraries. For more information, see [Determining Which DLLs to Redistribute](../ide/determining-which-dlls-to-redistribute.md).  
  
## See Also  
 [Deploying Desktop Applications](../ide/deploying-native-desktop-applications-visual-cpp.md)