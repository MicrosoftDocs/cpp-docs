---
title: "Extension DLLs | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "afxdll"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "memory [C++], DLLs"
  - "MFC extension DLLs [C++]"
  - "AFXDLL library"
  - "shared resources [C++]"
  - "MFC DLLs [C++], extension DLLs"
  - "DLLs [C++], extension"
  - "shared DLL versions [C++]"
  - "resource sharing [C++]"
  - "extension DLLs [C++]"
  - "extension DLLs [C++], about extension DLLs"
ms.assetid: f69ac3d4-e474-4b1c-87a1-6738843a135c
caps.latest.revision: 7
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
# Extension DLLs
An MFC extension DLL is a DLL that typically implements reusable classes derived from the existing Microsoft Foundation Class Library classes.  
  
 An MFC extension DLL has the following features and requirements:  
  
-   The client executable must be an MFC application compiled with **_AFXDLL** defined.  
  
-   An extension DLL can also be used by a regular DLL that is dynamically linked to MFC.  
  
-   Extension DLLs should be compiled with `_AFXEXT` defined. This forces **_AFXDLL** to be also defined and ensures that the proper declarations is pulled in from the MFC header files. It also ensures that **AFX_EXT_CLASS** is defined as **__declspec(dllexport)** while building the DLL, which is necessary if you are using this macro to declare the classes in your extension DLL.  
  
-   Extension DLLs should not instantiate a class derived from `CWinApp`, but should rely on the client application (or DLL) to provide this object.  
  
-   Extension DLLs should, however, provide a `DllMain` function and do any necessary initialization there.  
  
 Extension DLLs are built using the dynamic-link library version of MFC (also known as the shared version of MFC). Only MFC executables (either applications or regular DLLs) that are built with the shared version of MFC can use an extension DLL. Both the client application and the extension DLL must use the same version of MFCx0.dll. With an extension DLL, you can derive new custom classes from MFC and then offer this extended version of MFC to applications that call your DLL.  
  
 Extension DLLs can also be used for passing MFC-derived objects between the application and the DLL. The member functions associated with the passed object exist in the module where the object was created. Because these functions are properly exported when using the shared DLL version of MFC, you can freely pass MFC or MFC-derived object pointers between an application and the extension DLLs it loads.  
  
 An MFC extension DLL uses a shared version of MFC in the same way an application uses the shared DLL version of MFC, with a few additional considerations:  
  
-   It does not have a `CWinApp`-derived object. It must work with the `CWinApp`-derived object of the client application. This means that the client application owns the main message pump, the idle loop, and so on.  
  
-   It calls `AfxInitExtensionModule` in its `DllMain` function. The return value of this function should be checked. If a zero value is returned from `AfxInitExtensionModule`, return 0 from your `DllMain` function.  
  
-   It creates a **CDynLinkLibrary** object during initialization if the extension DLL wants to export `CRuntimeClass` objects or resources to the application.  
  
 Before version 4.0 of MFC, this type of DLL was called an AFXDLL. AFXDLL refers to the **_AFXDLL** preprocessor symbol that is defined when building the DLL.  
  
 The import libraries for the shared version of MFC are named according to the convention described in [Naming conventions for MFC DLLs](../build/naming-conventions-for-mfc-dlls.md). Visual C++ supplies prebuilt versions of the MFC DLLs, plus a number of non-MFC DLLs that you can use and distribute with your applications. These are documented in Redist.txt, which is installed to the Program Files\Microsoft Visual Studio folder.  
  
 If you are exporting using a .def file, place the following code at the beginning and end of your header file:  
  
```  
#undef AFX_DATA  
#define AFX_DATA AFX_EXT_DATA  
// <body of your header file>  
#undef AFX_DATA  
#define AFX_DATA  
```  
  
 These four lines ensure that your code is compiled correctly for an extension DLL. Leaving out these four lines might cause your DLL to either compile or link incorrectly.  
  
 If you need to pass an MFC or MFC-derived object pointer to or from an MFC DLL, the DLL should be an extension DLL. The member functions associated with the passed object exist in the module where the object was created. Because these functions are properly exported when using the shared DLL version of MFC, you can freely pass MFC or MFC-derived object pointers between an application and the extension DLLs it loads.  
  
 Due to C++ name mangling and export issues, the export list from an extension DLL might be different between the debug and retail versions of the same DLL and DLLs for different platforms. The retail MFCx0.dll has about 2,000 exported entry points; the debug MFCx0D.dll has about 3,000 exported entry points.  
  
## Memory Management  
 MFCx0.dll and all extension DLLs loaded into a client application's address space use the same memory allocator, resource loading, and other MFC global states as if they were in the same application. This is significant because the non-MFC DLL libraries and the regular DLLs do the exact opposite and have each DLL allocating out of its own memory pool.  
  
 If an extension DLL allocates memory, that memory can freely intermix with any other application-allocated object. Also, if an application that dynamically links to MFC fails, the protection of the operating system maintains the integrity of any other MFC application sharing the DLL.  
  
 Similarly other global MFC states, like the current executable file to load resources from, are also shared between the client application and all MFC extension DLLs as well as MFCx0.dll itself.  
  
## Sharing Resources and Classes  
 Exporting resources is done through a resource list. Each application contains a singly linked list of **CDynLinkLibrary** objects. When looking for a resource, most of the standard MFC implementations that load resources look first at the current resource module (`AfxGetResourceHandle`) and if the resource is not found walk the list of **CDynLinkLibrary** objects attempting to load the requested resource.  
  
 Walking the list has the disadvantages that it is slightly slower and requires managing resource ID ranges. It has the advantage that a client application that links to several extension DLLs can use any DLL-provided resource without having to specify the DLL instance handle. `AfxFindResourceHandle` is an API used for walking the resource list to look for a given match. It takes the name and type of a resource and returns the resource handle where it was first found (or NULL).  
  
 If you do not want to walk the list and only load resources from a specific place, use the functions `AfxGetResourceHandle` and `AfxSetResourceHandle` to save the old handle and set the new handle. Be sure to restore the old resource handle before you return to the client application. For an example of using this approach to explicitly load a menu, see Testdll2 .cpp in the MFC sample [DLLHUSK](http://msdn.microsoft.com/en-us/dfcaa6ff-b8e2-4efd-8100-ee3650071f90).  
  
 Dynamic creation of MFC objects given an MFC name is similar. The MFC object deserialization mechanism needs to have all of the `CRuntimeClass` objects registered so that it can reconstruct by dynamically creating C++ objects of the required type based on what was stored earlier.  
  
 In the case of the MFC sample [DLLHUSK](http://msdn.microsoft.com/en-us/dfcaa6ff-b8e2-4efd-8100-ee3650071f90), the list looks something like:  
  
```  
head ->   DLLHUSK.EXE   - or -   DLLHUSK.EXE  
               |                      |  
          TESTDLL2.DLL           TESTDLL2.DLL  
               |                      |  
          TESTDLL1.DLL           TESTDLL1.DLL  
               |                      |  
           MFCOxxD.DLL                |  
               |                      |  
           MFCDxxD.DLL                |  
               |                      |  
            MFCxxD.DLL            MFCxx.DLL  
```  
  
 where *xx* is the version number; for example, 42 represents version 4.2.  
  
 The MFCxx.dll is usually last on the resource and class list. MFCxx.dll includes all of the standard MFC resources, including prompt strings for all of the standard command IDs. Placing it at the end of the list allows DLLs and the client application itself not to have their own copy of the standard MFC resources, but to rely on the shared resources in the MFCxx.dll instead.  
  
 Merging the resources and class names of all DLLs into the client application's name space has the disadvantage of requiring you to be careful with what IDs or names you pick.  
  
 The [DLLHUSK](http://msdn.microsoft.com/en-us/dfcaa6ff-b8e2-4efd-8100-ee3650071f90) sample manages the shared resource name space by using multiple header files.  
  
 If your MFC extension DLL needs to maintain extra data for each application, you can derive a new class from **CDynLinkLibrary** and create it in `DllMain`. When running, the DLL can check the current application's list of **CDynLinkLibrary** objects to find the one for that particular extension DLL.  
  
### What do you want to do?  
  
-   [Initialize an extension DLL](../build/initializing-extension-dlls.md)  
  
### What do you want to know more about?  
  
-   [Tips on using shared resource files](../mfc/tn035-using-multiple-resource-files-and-header-files-with-visual-cpp.md)  
  
-   [DLL Version of MFC](../mfc/tn033-dll-version-of-mfc.md)  
  
-   [Regular DLLs statically linked to MFC](../build/regular-dlls-statically-linked-to-mfc.md)  
  
-   [Regular DLLs dynamically linked to MFC](../build/regular-dlls-dynamically-linked-to-mfc.md)  
  
-   [Using Database, OLE, and Sockets Extension DLLs in Regular DLLs](../build/using-database-ole-and-sockets-extension-dlls-in-regular-dlls.md)  
  
## See Also  
 [DLLs in Visual C++](../build/dlls-in-visual-cpp.md)