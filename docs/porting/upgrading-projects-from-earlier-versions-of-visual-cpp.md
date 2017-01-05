---
title: "Upgrading Projects from Earlier Versions of Visual C++ | Microsoft Docs"
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
  - "32-bit code porting"
  - "upgrading Visual C++ applications, 32-bit code"
ms.assetid: 18cdacaa-4742-43db-9e4c-2d9e73d8cc84
caps.latest.revision: 36
author: "mikeblome"
ms.author: "mblome"
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
# Upgrading Projects from Earlier Versions of Visual C++
In most cases, you can open a project that was created in an earlier version of Visual Studio. However, to accomplish this, Visual Studio upgrades the project. If you save this upgraded project, it cannot be opened in the earlier version.  
  
> [!IMPORTANT]
>  If you try to convert a project that was already converted, Visual Studio asks for confirmation because reconversion deletes existing files.  
  
 Many upgraded projects and solutions can be built successfully without modification. However, some projects might require changes to settings, source code, or both. We recommend that you use the following guidelines to address the settings issues first, and then if the project still doesn't build, you can address the code issues. For more information, see [Overview of potential upgrade issues](../porting/overview-of-potential-upgrade-issues-visual-cpp.md).  
  
1.  Make a copy of the existing project and solution files. Install the current version of Visual Studio and the earlier version side by side so that you can compare versions of the files if you want to.  
  
2.  In the current version of Visual Studio, open—and thereby upgrade—the copy of the project or solution and save it.  
  
3.  For each converted project, open the shortcut menu and choose **Properties**. Under **Configuration Properties**, select **General** and then for **Platform Toolset**, select the current version. (For example, for Visual Studio 2013, select v120.)  
  
4.  Build the solution. If the build fails, modify the settings and rebuild.  
  
 Data sources are contained in a separate database project so that you can more easily modify and debug the stored procedures in those sources. If you upgrade a C++ project that contains data sources, a separate database project is automatically created.  
  
 For information about how to update the targeted Windows versions, see [Modifying WINVER and _WIN32_WINNT](../porting/modifying-winver-and-win32-winnt.md).  
  
## See Also  
 [Build System Changes](../build/build-system-changes.md)   
 [Visual C++ change history 2003 - 2015](../porting/visual-cpp-change-history-2003-2015.md)   
 [Nonstandard Behavior](../cpp/nonstandard-behavior.md)