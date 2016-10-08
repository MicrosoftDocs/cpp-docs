---
title: "DLLs in Visual C++"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 5216bca4-51e2-466b-b221-0e3e776056f0
caps.latest.revision: 16
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# DLLs in Visual C++
A dynamic-link library (DLL) is an executable file that acts as a shared library of functions and resources. Dynamic linking enables an executable to call functions or use resources stored in a separate file. These functions and resources can be compiled and deployed separately from the executables that use them. The operating system can load the DLL into the executable's memory space when the executable is loaded, or on demand at runtime. DLLs also make it easy to share functions and resources across executables. Multiple applications can access the contents of a single copy of a DLL in memory at the same time.  
  
 Static linking copies all the object code in a .lib file into an executable. Dynamic linking includes only the information needed at run time to locate and load the DLL that contains a data item or function. When you create a DLL, you also create a .lib file that contains this information. When you build an executable that calls the DLL, the linker uses the exported symbols in the .lib file to store this information for the loader. When the loader loads a DLL, the DLL is mapped into the memory space of your executable. A special function in the DLL, `DllMain`, is called to perform any initialization the DLL requires.  
  
 Using dynamic linking instead of static linking offers several advantages. When you use DLLs, you can save memory space and reduce swapping. When multiple applications can use a single copy of a DLL, you can save disk space and download bandwidth. DLLs can be deployed and updated separately, which lets you provide after-market support and software updates without having to rebuild and ship all your code. DLLs are a convenient way to supply locale-specific resources, which can support multi-language programs, and ease creating international versions of your applications.  
  
 The following topics provide detailed information about how to program DLLs.  
  
## In This Section  
 [Walkthrough: Creating and Using a Dynamic Link Library (C++)](../VS_visualcpp/Walkthrough--Creating-and-Using-a-Dynamic-Link-Library--C---.md)  
 Describes how to create and use a DLL using Visual Studio.  
  
 [Differences Between Applications and DLLs](../VS_visualcpp/Differences-Between-Applications-and-DLLs.md)  
 Describes the fundamental differences between applications and DLLs.  
  
 [Advantages of Using DLLs](../VS_visualcpp/Advantages-of-Using-DLLs.md)  
 Describes the advantages of dynamic linking.  
  
 [Kinds of DLLs](../VS_visualcpp/Kinds-of-DLLs.md)  
 Provides information about the different kinds of DLLs that can be built.  
  
 [DLL Frequently Asked Questions](../VS_visualcpp/DLL-Frequently-Asked-Questions.md)  
 Provides answers to frequently asked questions about DLLs.  
  
 [Linking an Executable to a DLL](../VS_visualcpp/Linking-an-Executable-to-a-DLL.md)  
 Describes explicit and implicit linking to a DLL.  
  
 [Initializing a DLL](../VS_visualcpp/Initializing-a-DLL.md)  
 Discusses DLL initialization code (such as allocating memory) that must execute when your DLL loads.  
  
 [Run-Time Library Behavior](../VS_visualcpp/Run-Time-Library-Behavior.md)  
 Describes how the run-time library performs the DLL startup sequence.  
  
 [LoadLibrary and AfxLoadLibrary](../VS_visualcpp/LoadLibrary-and-AfxLoadLibrary.md)  
 Discusses using **LoadLibrary** and `AfxLoadLibrary` to explicitly link to a DLL at runtime.  
  
 [GetProcAddress](../VS_visualcpp/GetProcAddress.md)  
 Discusses using **GetProcAddress** to obtain the address of an exported function in the DLL.  
  
 [FreeLibrary and AfxFreeLibrary](../VS_visualcpp/FreeLibrary-and-AfxFreeLibrary.md)  
 Discusses using **FreeLibrary** and `AfxFreeLibrary` when the DLL module is no longer needed.  
  
 [Search Path Used by Windows to Locate a DLL](../VS_visualcpp/Search-Path-Used-by-Windows-to-Locate-a-DLL.md)  
 Describes the search path that the Windows operating system uses to locate a DLL on the system.  
  
 [Module States of a Regular DLL Dynamically Linked to MFC](../VS_visualcpp/Module-States-of-a-Regular-DLL-Dynamically-Linked-to-MFC.md)  
 Describes the module states of a regular DLL dynamically linked to MFC.  
  
 [Extension DLLs](../VS_visualcpp/Extension-DLLs--Overview.md)  
 Explains DLLs that typically implements reusable classes derived from the existing Microsoft Foundation Class Library classes.  
  
 [Creating a Resource-Only DLL](../VS_visualcpp/Creating-a-Resource-Only-DLL.md)  
 Discusses a resource-only DLL, which contains nothing but resources, such as icons, bitmaps, strings, and dialog boxes.  
  
 [Localized Resources in MFC Applications: Satellite DLLs](../VS_visualcpp/Localized-Resources-in-MFC-Applications--Satellite-DLLs.md)  
 Provides enhanced support for satellite DLLs, a feature that helps in creating applications localized for multiple languages.  
  
 [Importing and Exporting](../VS_visualcpp/Importing-and-Exporting.md)  
 Describes importing public symbols into an application or exporting functions from a DLL  
  
 [Active Technology and DLLs](../VS_visualcpp/Active-Technology-and-DLLs.md)  
 Allows object servers to be implemented inside a DLL.  
  
 [Automation in a DLL](../VS_visualcpp/Automation-in-a-DLL.md)  
 Describes what the Automation option in the MFC DLL Wizard supplies.  
  
 [Naming Conventions for MFC DLLs](../VS_visualcpp/Naming-Conventions-for-MFC-DLLs.md)  
 Discusses how the DLLs and libraries included in MFC follow a structured naming convention.  
  
 [Calling DLL functions from Visual Basic Applications](../VS_visualcpp/Calling-DLL-Functions-from-Visual-Basic-Applications.md)  
 Describes how to call DLL functions from Visual Basic applications.  
  
## Related Sections  
 [Using MFC as Part of a DLL](../VS_visualcpp/TN011--Using-MFC-as-Part-of-a-DLL.md)  
 Describes regular DLLs, which let you use the MFC library as part of a Windows dynamic-link library.  
  
 [DLL Version of MFC](../VS_visualcpp/TN033--DLL-Version-of-MFC.md)  
 Describes how you can use the MFCxx.dll and MFCxxD.dll (where x is the MFC version number) shared dynamic-link libraries with MFC applications and extension DLLs.  
  
 [(NOTINBUILD)Visual C++ Programming Methodologies](assetId:///0822f806-fa81-4b65-bf0f-1e2921f30c95)  
 Provides links to topics that describe conceptual information about the Visual C++ libraries and topics that discuss various coding technologies and techniques.