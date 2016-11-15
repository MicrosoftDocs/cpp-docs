---
title: "DLLs in Visual C++ | Microsoft Docs"
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
  - "executable files [C++]"
  - "dynamic linking [C++]"
  - "linking [C++], dynamic vs. static"
  - "DLLs [C++]"
  - "DLLs [C++], about DLLs"
ms.assetid: 5216bca4-51e2-466b-b221-0e3e776056f0
caps.latest.revision: 16
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
# DLLs in Visual C++
A dynamic-link library (DLL) is an executable file that acts as a shared library of functions and resources. Dynamic linking enables an executable to call functions or use resources stored in a separate file. These functions and resources can be compiled and deployed separately from the executables that use them. The operating system can load the DLL into the executable's memory space when the executable is loaded, or on demand at runtime. DLLs also make it easy to share functions and resources across executables. Multiple applications can access the contents of a single copy of a DLL in memory at the same time.  
  
 Static linking copies all the object code in a .lib file into an executable. Dynamic linking includes only the information needed at run time to locate and load the DLL that contains a data item or function. When you create a DLL, you also create a .lib file that contains this information. When you build an executable that calls the DLL, the linker uses the exported symbols in the .lib file to store this information for the loader. When the loader loads a DLL, the DLL is mapped into the memory space of your executable. A special function in the DLL, `DllMain`, is called to perform any initialization the DLL requires.  
  
 Using dynamic linking instead of static linking offers several advantages. When you use DLLs, you can save memory space and reduce swapping. When multiple applications can use a single copy of a DLL, you can save disk space and download bandwidth. DLLs can be deployed and updated separately, which lets you provide after-market support and software updates without having to rebuild and ship all your code. DLLs are a convenient way to supply locale-specific resources, which can support multi-language programs, and ease creating international versions of your applications.  
  
 The following topics provide detailed information about how to program DLLs.  
  
## In This Section  
 [Walkthrough: Creating and Using a Dynamic Link Library (C++)](../build/walkthrough-creating-and-using-a-dynamic-link-library-cpp.md)  
 Describes how to create and use a DLL using Visual Studio.  
  
 [Differences Between Applications and DLLs](../build/differences-between-applications-and-dlls.md)  
 Describes the fundamental differences between applications and DLLs.  
  
 [Advantages of Using DLLs](../build/advantages-of-using-dlls.md)  
 Describes the advantages of dynamic linking.  
  
 [Kinds of DLLs](../build/kinds-of-dlls.md)  
 Provides information about the different kinds of DLLs that can be built.  
  
 [DLL Frequently Asked Questions](../build/dll-frequently-asked-questions.md)  
 Provides answers to frequently asked questions about DLLs.  
  
 [Linking an Executable to a DLL](../build/linking-an-executable-to-a-dll.md)  
 Describes explicit and implicit linking to a DLL.  
  
 [Initializing a DLL](../build/initializing-a-dll.md)  
 Discusses DLL initialization code (such as allocating memory) that must execute when your DLL loads.  
  
 [Run-Time Library Behavior](../build/run-time-library-behavior.md)  
 Describes how the run-time library performs the DLL startup sequence.  
  
 [LoadLibrary and AfxLoadLibrary](../build/loadlibrary-and-afxloadlibrary.md)  
 Discusses using **LoadLibrary** and `AfxLoadLibrary` to explicitly link to a DLL at runtime.  
  
 [GetProcAddress](../build/getprocaddress.md)  
 Discusses using **GetProcAddress** to obtain the address of an exported function in the DLL.  
  
 [FreeLibrary and AfxFreeLibrary](../build/freelibrary-and-afxfreelibrary.md)  
 Discusses using **FreeLibrary** and `AfxFreeLibrary` when the DLL module is no longer needed.  
  
 [Search Path Used by Windows to Locate a DLL](../build/search-path-used-by-windows-to-locate-a-dll.md)  
 Describes the search path that the Windows operating system uses to locate a DLL on the system.  
  
 [Module States of a Regular DLL Dynamically Linked to MFC](../build/module-states-of-a-regular-dll-dynamically-linked-to-mfc.md)  
 Describes the module states of a regular DLL dynamically linked to MFC.  
  
 [Extension DLLs](../build/extension-dlls-overview.md)  
 Explains DLLs that typically implements reusable classes derived from the existing Microsoft Foundation Class Library classes.  
  
 [Creating a Resource-Only DLL](../build/creating-a-resource-only-dll.md)  
 Discusses a resource-only DLL, which contains nothing but resources, such as icons, bitmaps, strings, and dialog boxes.  
  
 [Localized Resources in MFC Applications: Satellite DLLs](../build/localized-resources-in-mfc-applications-satellite-dlls.md)  
 Provides enhanced support for satellite DLLs, a feature that helps in creating applications localized for multiple languages.  
  
 [Importing and Exporting](../build/importing-and-exporting.md)  
 Describes importing public symbols into an application or exporting functions from a DLL  
  
 [Active Technology and DLLs](../build/active-technology-and-dlls.md)  
 Allows object servers to be implemented inside a DLL.  
  
 [Automation in a DLL](../build/automation-in-a-dll.md)  
 Describes what the Automation option in the MFC DLL Wizard supplies.  
  
 [Naming Conventions for MFC DLLs](../build/naming-conventions-for-mfc-dlls.md)  
 Discusses how the DLLs and libraries included in MFC follow a structured naming convention.  
  
 [Calling DLL functions from Visual Basic Applications](../build/calling-dll-functions-from-visual-basic-applications.md)  
 Describes how to call DLL functions from Visual Basic applications.  
  
## Related Sections  
 [Using MFC as Part of a DLL](../mfc/tn011-using-mfc-as-part-of-a-dll.md)  
 Describes regular DLLs, which let you use the MFC library as part of a Windows dynamic-link library.  
  
 [DLL Version of MFC](../mfc/tn033-dll-version-of-mfc.md)  
 Describes how you can use the MFCxx.dll and MFCxxD.dll (where x is the MFC version number) shared dynamic-link libraries with MFC applications and extension DLLs.  
  
 [(NOTINBUILD)Visual C++ Programming Methodologies](http://msdn.microsoft.com/en-us/0822f806-fa81-4b65-bf0f-1e2921f30c95)  
 Provides links to topics that describe conceptual information about the Visual C++ libraries and topics that discuss various coding technologies and techniques.