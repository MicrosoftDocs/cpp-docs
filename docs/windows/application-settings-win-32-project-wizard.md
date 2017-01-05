---
title: "Application Settings, Win 32 Project Wizard | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.appwiz.win32.appset"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "application settings [C++]"
  - "Win32 Project Wizard, application settings"
ms.assetid: d6b818f0-9b23-4793-a6c5-df1c8c594bad
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
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
# Application Settings, Win 32 Project Wizard
Use this page of the wizard to set options for the Win32 project.  
  
 **Application type**  
 Creates the specified application type.  
  
|Option|Description|  
|------------|-----------------|  
|**Console application**|Creates a console application. Console programs are developed with [Console Functions](https://msdn.microsoft.com/en-us/library/ms813137.aspx), which provide character-mode support in console windows. The Visual C++ [run-time libraries](../c-runtime-library/c-run-time-library-reference.md) also provide output and input from console windows with standard I/O functions, such as **printf_s()** and **scanf_s()**. A console application has no graphical user interface. It compiles into an .exe file and can be run as a stand-alone application from the command line.<br /><br /> You can add MFC and ATL support to a console application.|  
|**Windows application**|Creates a Win32 program. A Win32 program is an executable application (EXE) written in C or C++, using calls to the Win32 API to create a graphical user interface.<br /><br /> You cannot add MFC or ATL support to a Windows application.|  
|**DLL**|Creates a Win32 dynamic-link library (DLL). A Win32 DLL is a binary file, written in C or C++, that uses calls to the Win32 API rather than to MFC classes, and that acts as a shared library of functions that can be used simultaneously by multiple applications.<br /><br /> You cannot add MFC or ATL support to a DLL application. You can indicate that the DLL exports symbols.|  
|**Static library**|Creates a static library. A static library is a file containing objects and their functions and data that links into your program when the executable file is built. This topic explains how to create the starter files and [project properties](../ide/property-pages-visual-cpp.md) for a static library. A static library file provides the following benefits:<br /><br /> -   A Win32 static library is useful if the application you are working on makes calls to the Win32 API rather than to MFC classes.<br />-   The linking process is the same whether the rest of your Windows application is written in C or in C++.<br />-   You can link a static library to an MFC-based program or to a non-MFC program.|  
  
 **Additional options**  
 Defines the support and options for the application, depending on its type.  
  
|Option|Description|  
|------------|-----------------|  
|**Empty project**|Specifies that the project files are blank. If you have a set of source code files (such as .cpp files, header files, icons, toolbars, dialog boxes, and so on) and want to create a project in the Visual C++ development environment, you must first create a blank project, then add the files to the project.<br /><br /> This selection is unavailable for static library projects.|  
|**Export symbols**|Specifies that the DLL project exports symbols.|  
|**Precompiled header**|Specifies that the static library project uses a pre-compiled header.|  
|Security Development Lifecycle (SDL) checks|For more information about SDL, see [Microsoft Security Development Lifecycle (SDL)  Process Guidance](../build/reference/sdl-enable-additional-security-checks.md)|  
  
 **Add support for**  
 Add support for one of the libraries supplied in Visual C++.  
  
|Option|Description|  
|------------|-----------------|  
|**ATL**|Builds into the project support for classes in the Active Template Library (ATL). For Win32 console applications only.<br /><br /> **Note** This option does not indicate support for adding ATL objects using the ATL code wizards. You can add ATL objects only to ATL projects or MFC projects with ATL support.|  
|**MFC**|Builds into the project support for the Microsoft Foundation Class (MFC) Library. For Win32 console applications and static libraries only.|  
  
## See Also  
 [Win32 Application Wizard](../windows/win32-application-wizard.md)   
