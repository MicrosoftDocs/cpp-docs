---
title: "Extension DLLs: Overview | Microsoft Docs"
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
  - "AFXDLL library"
  - "MFC DLLs [C++], extension DLLs"
  - "DLLs [C++], extension"
  - "shared DLL versions [C++]"
  - "extension DLLs [C++], about extension DLLs"
ms.assetid: eb5e10b7-d615-4bc7-908d-e3e99b7b1d5f
caps.latest.revision: 8
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
# Extension DLLs: Overview
An MFC extension DLL is a DLL that typically implements reusable classes derived from existing Microsoft Foundation Class Library classes. Extension DLLs are built using the dynamic-link library version of MFC (also known as the shared version of MFC). Only MFC executables (either applications or regular DLLs) that are built with the shared version of MFC can use an extension DLL. With an extension DLL, you can derive new custom classes from MFC and then offer this extended version of MFC to applications that call your DLL.  
  
 Extension DLLs can also be used for passing MFC-derived objects between the application and the DLL. The member functions associated with the passed object exist in the module where the object was created. Because these functions are properly exported when using the shared DLL version of MFC, you can freely pass MFC or MFC-derived object pointers between an application and the extension DLLs it loads.  
  
 For an example of a DLL that fulfills the basic requirements of an extension DLL, see the MFC sample [DLLHUSK](http://msdn.microsoft.com/en-us/dfcaa6ff-b8e2-4efd-8100-ee3650071f90). In particular, look at the Testdll1.cpp and Testdll2.cpp files.  
  
 Note that the term AFXDLL is no longer used in the Visual C++ documentation. An extension DLL has the same characteristics as the former AFXDLL.  
  
## What do you want to do?  
  
-   [Initialize an extension DLL](../build/initializing-extension-dlls.md)  
  
## What do you want to know more about?  
  
-   [Extension DLLs](../build/extension-dlls.md)  
  
-   [Using Database, OLE, and Sockets Extension DLLs in Regular DLLs](../build/using-database-ole-and-sockets-extension-dlls-in-regular-dlls.md)  
  
-   [Non-MFC DLLs: Overview](../build/non-mfc-dlls-overview.md)  
  
-   [Regular DLLs statically linked to MFC](../build/regular-dlls-statically-linked-to-mfc.md)  
  
-   [Regular DLLs dynamically linked to MFC](../build/regular-dlls-dynamically-linked-to-mfc.md)  
  
-   [Creating an MFC DLL](../mfc/reference/mfc-dll-wizard.md)  
  
## See Also  
 [Kinds of DLLs](../build/kinds-of-dlls.md)