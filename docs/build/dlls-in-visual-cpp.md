---
title: "Create C/C++ DLLs in Visual Studio"
description: "An overview of why and how to create and use DLLs with C++ in Visual Studio."
ms.date: "01/27/2020"
helpviewer_keywords: ["executable files [C++]", "dynamic linking [C++]", "linking [C++], dynamic vs. static", "DLLs [C++]", "DLLs [C++], about DLLs"]
ms.assetid: 5216bca4-51e2-466b-b221-0e3e776056f0
---
# Create C/C++ DLLs in Visual Studio

In Windows, a dynamic-link library (DLL) is a kind of executable file that acts as a shared library of functions and resources. Dynamic linking is an operating system capability. It enables an executable to call functions or use resources stored in a separate file. These functions and resources can be compiled and deployed separately from the executables that use them.

A DLL isn't a stand-alone executable. DLLs run in the context of the applications that call them. The operating system loads the DLL into an application's memory space. It's done either when the application is loaded (*implicit linking*), or on demand at runtime (*explicit linking*). DLLs also make it easy to share functions and resources across executables. Multiple applications can access the contents of a single copy of a DLL in memory at the same time.

## Differences between dynamic linking and static linking

Static linking copies all the object code in a static library into the executables that use it when they're built. Dynamic linking includes only the information needed by Windows at run time to locate and load the DLL that contains a data item or function. When you create a DLL, you also create an import library that contains this information. When you build an executable that calls the DLL, the linker uses the exported symbols in the import library to store this information for the Windows loader. When the loader loads a DLL, the DLL is mapped into the memory space of your application. If present, a special function in the DLL, `DllMain`, is called to do any initialization the DLL requires.

<a name="differences-between-applications-and-dlls"></a>

## Differences between applications and DLLs

Even though DLLs and applications are both executable modules, they differ in several ways. The most obvious difference is that you can't run a DLL. From the system's point of view, there are two fundamental differences between applications and DLLs:

- An application can have multiple instances of itself running in the system simultaneously. A DLL can have only one instance.

- An application can be loaded as a process. It can own things such as a stack, threads of execution, global memory, file handles, and a message queue. A DLL can't own these things.

<a name="advantages-of-using-dlls"></a>

## Advantages of using DLLs

Dynamic linking to code and resources offers several advantages over static linking:

- Dynamic linking saves memory and reduces swapping. Many processes can use a DLL simultaneously, sharing a single copy of the read-only parts of a DLL in memory. In contrast, every application that is built by using a statically linked library has a complete copy of the library code that Windows must load into memory.

- Dynamic linking saves disk space and bandwidth. Many applications can share a single copy of the DLL on disk. In contrast, each application built by using a static link library has the library code linked into its executable image. That uses more disk space, and takes more bandwidth to transfer.

- Maintenance, security fixes, and upgrades can be easier. When your applications use common functions in a DLL, you can implement bug fixes and deploy updates to the DLL. When DLLs are updated, the applications that use them don't need to be recompiled or relinked. They can make use of the new DLL as soon as it's deployed. In contrast, when you make fixes in statically linked object code, you must relink and redeploy every application that uses it.

- You can use DLLs to provide after-market support. For example, a display driver DLL can be modified to support a display that wasn't available when the application was shipped.

- You can use explicit linking to discover and load DLLs at runtime. For example, application extensions that add new functionality to your app without rebuilding or redeploying it.

- Dynamic linking makes it easier to support applications written in different programming languages. Programs written in different programming languages can call the same DLL function as long as the programs follow the function's calling convention. The programs and the DLL function must be compatible in the following ways: The order in which the function expects its arguments to be pushed onto the stack. Whether the function or the application is responsible for cleaning up the stack. And, whether any arguments are passed in registers.

- Dynamic linking provides a mechanism to extend the Microsoft Foundation Class library (MFC) classes. You can derive classes from the existing MFC classes and place them in an MFC extension DLL for use by MFC applications.

- Dynamic linking makes creation of international versions of your application easier. DLLs are a convenient way to supply locale-specific resources, which make it much easier to create international versions of an application. Instead of shipping many localized versions of your application, you can place the strings and images for each language in a separate resource DLL. Then your application can load the appropriate resources for that locale at runtime.

A potential disadvantage to using DLLs is that the application isn't self-contained. It depends on the existence of a separate DLL module: one that you must deploy or verify yourself as part of your installation.

## More information on how to create and use DLLs

The following articles provide detailed information about how to create C/C++ DLLs in Visual Studio.

[Walkthrough: Creating and using a dynamic link library (C++)](walkthrough-creating-and-using-a-dynamic-link-library-cpp.md)\
Describes how to create and use a DLL using Visual Studio.

[Kinds of DLLs](kinds-of-dlls.md)\
Provides information about the different kinds of DLLs that can be built.

[DLL frequently asked questions](dll-frequently-asked-questions.yml)\
Provides answers to frequently asked questions about DLLs.

[Link an executable to a DLL](linking-an-executable-to-a-dll.md)\
Describes explicit and implicit linking to a DLL.

[Initialize a DLL](run-time-library-behavior.md#initializing-a-dll)\
Discusses DLL initialization code that must execute when your DLL loads.

[DLLs and Visual C++ run-time library behavior](run-time-library-behavior.md)\
Describes the run-time library DLL startup sequence.

[LoadLibrary and AfxLoadLibrary](loadlibrary-and-afxloadlibrary.md)\
Discusses using `LoadLibrary` and `AfxLoadLibrary` to explicitly link to a DLL at runtime.

[GetProcAddress](getprocaddress.md)\
Discusses using `GetProcAddress` to obtain the address of an exported function in the DLL.

[FreeLibrary and AfxFreeLibrary](freelibrary-and-afxfreelibrary.md)\
Discusses using `FreeLibrary` and `AfxFreeLibrary` when the DLL module is no longer needed.

[Dynamic-Link Library Search Order](/windows/win32/Dlls/dynamic-link-library-search-order)\
Describes the search path that the Windows operating system uses to locate a DLL on the system.

[Module states of a regular MFC DLL dynamically linked to MFC](module-states-of-a-regular-dll-dynamically-linked-to-mfc.md)\
Describes the module states of a regular MFC DLL dynamically linked to MFC.

[MFC extension DLLs](extension-dlls-overview.md)\
Explains DLLs that typically implement reusable classes derived from the existing MFC classes.

[Creating a resource-only DLL](creating-a-resource-only-dll.md)\
Discusses a resource-only DLL, which contains nothing but resources, such as icons, bitmaps, strings, and dialog boxes.

[Localized resources in MFC Applications: Satellite DLLs](localized-resources-in-mfc-applications-satellite-dlls.md)\
Provides enhanced support for satellite DLLs, a feature that helps in creating applications localized for multiple languages.

[Importing and exporting](importing-and-exporting.md)\
Describes importing public symbols into an application or exporting functions from a DLL

[Active technology and DLLs](active-technology-and-dlls.md)\
Allows object servers to be implemented inside a DLL.

[Automation in a DLL](automation-in-a-dll.md)\
Describes what the Automation option in the MFC DLL Wizard supplies.

[Naming conventions for MFC DLLs](../mfc/mfc-library-versions.md#mfc-static-library-naming-conventions)\
Discusses how the DLLs and libraries included in MFC follow a structured naming convention.

[Calling DLL functions from Visual Basic applications](calling-dll-functions-from-visual-basic-applications.md)\
Describes how to call DLL functions from Visual Basic applications.

## Related Sections

[Using MFC as part of a DLL](../mfc/tn011-using-mfc-as-part-of-a-dll.md)\
Describes regular MFC DLLs, which let you use the MFC library as part of a Windows dynamic-link library.

[DLL version of MFC](../mfc/tn033-dll-version-of-mfc.md)\
Describes how you can use the MFCxx.dll and MFCxxD.dll (where x is the MFC version number) shared dynamic-link libraries with MFC applications and MFC extension DLLs.
