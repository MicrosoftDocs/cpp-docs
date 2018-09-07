---
title: "Extension DLLs: Overview | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["AFXDLL library", "MFC DLLs [C++], MFC extension DLLs", "DLLs [C++], extension", "shared DLL versions [C++]", "extension DLLs [C++], about MFC extension DLLs"]
ms.assetid: eb5e10b7-d615-4bc7-908d-e3e99b7b1d5f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# MFC extension DLLs: Overview
An MFC extension DLL is a DLL that typically implements reusable classes derived from existing Microsoft Foundation Class Library classes. MFC extension DLLs are built using the dynamic-link library version of MFC (also known as the shared version of MFC). Only MFC executables (either applications or regular MFC DLLs) that are built with the shared version of MFC can use an MFC extension DLL. With an MFC extension DLL, you can derive new custom classes from MFC and then offer this extended version of MFC to applications that call your DLL.  
  
 Extension DLLs can also be used for passing MFC-derived objects between the application and the DLL. The member functions associated with the passed object exist in the module where the object was created. Because these functions are properly exported when using the shared DLL version of MFC, you can freely pass MFC or MFC-derived object pointers between an application and the MFC extension DLLs it loads.  
  
 For an example of a DLL that fulfills the basic requirements of an MFC extension DLL, see the MFC sample [DLLHUSK](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/MFC/advanced/dllhusk). In particular, look at the Testdll1.cpp and Testdll2.cpp files.  
  
 Note that the term AFXDLL is no longer used in the Visual C++ documentation. An MFC extension DLL has the same characteristics as the former AFXDLL.  
  
## What do you want to do?  
  
-   [Initialize an MFC extension DLL](../build/run-time-library-behavior.md#initializing-extension-dlls)  
  
## What do you want to know more about?  
  
-   [MFC extension DLLs](../build/extension-dlls.md)  
  
-   [Using Database, OLE, and Sockets MFC extension DLLs in regular MFC DLLs](../build/using-database-ole-and-sockets-extension-dlls-in-regular-dlls.md)  
  
-   [Non-MFC DLLs: Overview](../build/non-mfc-dlls-overview.md)  
  
-   [Regular MFC DLLs statically linked to MFC](../build/regular-dlls-statically-linked-to-mfc.md)  
  
-   [Regular MFC DLLs dynamically linked to MFC](../build/regular-dlls-dynamically-linked-to-mfc.md)  
  
-   [Creating an MFC DLL](../mfc/reference/mfc-dll-wizard.md)  
  
## See Also  
 [Kinds of DLLs](../build/kinds-of-dlls.md)