---
title: "DLLs in Visual C++ | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["executable files [C++]", "dynamic linking [C++]", "linking [C++], dynamic vs. static", "DLLs [C++]", "DLLs [C++], about DLLs"]
ms.assetid: 5216bca4-51e2-466b-b221-0e3e776056f0
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# DLLs in Visual C++  
  
In Windows, a dynamic-link library (DLL) is a kind of executable file that acts as a shared library of functions and resources. Dynamic linking is an operating system capability that enables an executable to call functions or use resources stored in a separate file. These functions and resources can be compiled and deployed separately from the executables that use them. A DLL is not a stand-alone executable; it runs in the context of an application that calls it. The operating system can load the DLL into an application's memory space when the application is loaded (*implicit linking*), or on demand at runtime (*explicit linking*). DLLs also make it easy to share functions and resources across executables. Multiple applications can access the contents of a single copy of a DLL in memory at the same time.  
  
## Differences between dynamic linking and static linking  
  
Static linking copies all the object code in a static library into the executables that use it when they are built. Dynamic linking includes only the information needed by Windows at run time to locate and load the DLL that contains a data item or function. When you create a DLL, you also create an import library that contains this information. When you build an executable that calls the DLL, the linker uses the exported symbols in the import library to store this information for the Windows loader. When the loader loads a DLL, the DLL is mapped into the memory space of your application. If present, a special function in the DLL, `DllMain`, is called to perform any initialization the DLL requires.  
  
<a name="differences-between-applications-and-dlls"></a>  
  
## Differences between applications and DLLs  
  
Even though DLLs and applications are both executable modules, they differ in several ways. To the end user, the most obvious difference is that DLLs are not applications that can be directly executed. From the system's point of view, there are two fundamental differences between applications and DLLs:  
  
-   An application can have multiple instances of itself running in the system simultaneously, whereas a DLL can have only one instance.  
  
-   An application can be loaded as a process that can own things such as a stack, threads of execution, global memory, file handles, and a message queue, but a DLL cannot.  
  
<a name="advantages-of-using-dlls"></a>  
  
## Advantages of using DLLs  
  
Dynamic linking instead of static linking to code and resources offers several advantages. When you use DLLs, you can save memory space and reduce swapping. When multiple applications can use a single copy of a DLL, you can save disk space and download bandwidth. DLLs can be deployed and updated separately, which lets you provide after-market support and software updates without having to rebuild and ship all your code. DLLs are a convenient way to supply locale-specific resources, which can support multi-language programs, and ease creating international versions of your applications. Explicit linking can allow your application to discover and load DLLs at runtime, such as extensions that provide new capabilities.  
  
Dynamic linking has the following advantages:  
  
-   Dynamic linking saves memory and reduces swapping. Many processes can use a DLL simultaneously, sharing a single copy of the read-only parts of a DLL in memory. In contrast, every application that is built by using a statically linked library has a complete copy of the library code that Windows must load into memory.  
  
-   Dynamic linking saves disk space and bandwidth. Many applications can share a single copy of the DLL on disk. In contrast, each application built by using a static link library has the library code linked into its executable image, which uses more disk space and takes more bandwidth to transfer.  
  
-   Maintenance, security fixes and upgrades can be easier. When your applications use common functions in a DLL, then as long as the function arguments and return values do not change, you can implement bug fixes and deploy updates to the DLL. When DLLs are updated, the applications that use them do not need to be recompiled or relinked, and they make use of the new DLL as soon as it's deployed. In contrast, fixes you make in statically linked object code require you to relink and redeploy every application that uses it.  
  
-   You can use DLLs to provide after-market support. For example, a display driver DLL can be modified to support a display that was not available when the application was shipped. You can use explicit linking to load application extensions as DLLs, and add new functionality to your app without rebuilding or redeploying it.  
  
-   Dynamic linking makes it easier to support applications written in different programming languages. Programs written in different programming languages can call the same DLL function as long as the programs follow the function's calling convention. The programs and the DLL function must be compatible in the following ways: the order in which the function expects its arguments to be pushed onto the stack, whether the function or the application is responsible for cleaning up the stack, and whether any arguments are passed in registers.  
  
-   Dynamic linking provides a mechanism to extend the MFC library classes. You can derive classes from the existing MFC classes and place them in an MFC extension DLL for use by MFC applications.  
  
-   Dynamic linking makes creation of international versions of your application easier. By placing locale-specific resources in a DLL, it is much easier to create international versions of an application. Instead of shipping many localized versions of your application, you can place the strings and images for each language in a separate resource DLL, and then your application can load the appropriate resources for that locale at runtime.   
  
 A potential disadvantage to using DLLs is that the application is not self-contained; it depends on the existence of a separate DLL module that you must deploy or verify yourself as part of your installation.  
  
  
## More information on how to create and use DLLs  
  
The following topics provide detailed information about how to program DLLs in Visual C++.  
  
 [Walkthrough: Creating and Using a Dynamic Link Library (C++)](../build/walkthrough-creating-and-using-a-dynamic-link-library-cpp.md)  
 Describes how to create and use a DLL using Visual Studio.  
  
 [Kinds of DLLs](../build/kinds-of-dlls.md)  
 Provides information about the different kinds of DLLs that can be built.  
  
 [DLL Frequently Asked Questions](../build/dll-frequently-asked-questions.md)  
 Provides answers to frequently asked questions about DLLs.  
  
 [Link an executable to a DLL](../build/linking-an-executable-to-a-dll.md)  
 Describes explicit and implicit linking to a DLL.  
  
 [Initialize a DLL](../build/run-time-library-behavior.md#initializing-a-dll)  
 Discusses DLL initialization code that must execute when your DLL loads.  
  
 [DLLs and Visual C++ run-time library behavior](../build/run-time-library-behavior.md)  
 Describes how the run-time library performs the DLL startup sequence.  
  
 [LoadLibrary and AfxLoadLibrary](../build/loadlibrary-and-afxloadlibrary.md)  
 Discusses using **LoadLibrary** and `AfxLoadLibrary` to explicitly link to a DLL at runtime.  
  
 [GetProcAddress](../build/getprocaddress.md)  
 Discusses using **GetProcAddress** to obtain the address of an exported function in the DLL.  
  
 [FreeLibrary and AfxFreeLibrary](../build/freelibrary-and-afxfreelibrary.md)  
 Discusses using **FreeLibrary** and `AfxFreeLibrary` when the DLL module is no longer needed.  
  
 [Dynamic-Link Library Search Order](/windows/desktop/Dlls/dynamic-link-library-search-order)  
 Describes the search path that the Windows operating system uses to locate a DLL on the system.  
  
 [Module States of a Regular MFC DLL Dynamically Linked to MFC](../build/module-states-of-a-regular-dll-dynamically-linked-to-mfc.md)  
 Describes the module states of a regular MFC DLL dynamically linked to MFC.  
  
 [MFC extension DLLs](../build/extension-dlls-overview.md)  
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
  
 [Naming Conventions for MFC DLLs](../mfc/mfc-library-versions.md#mfc-static-library-naming-conventions)  
 Discusses how the DLLs and libraries included in MFC follow a structured naming convention.  
  
 [Calling DLL functions from Visual Basic Applications](../build/calling-dll-functions-from-visual-basic-applications.md)  
 Describes how to call DLL functions from Visual Basic applications.  
  
## Related Sections  
  
 [Using MFC as Part of a DLL](../mfc/tn011-using-mfc-as-part-of-a-dll.md)  
 Describes regular MFC DLLs, which let you use the MFC library as part of a Windows dynamic-link library.  
  
 [DLL Version of MFC](../mfc/tn033-dll-version-of-mfc.md)  
 Describes how you can use the MFCxx.dll and MFCxxD.dll (where x is the MFC version number) shared dynamic-link libraries with MFC applications and MFC extension DLLs.  
