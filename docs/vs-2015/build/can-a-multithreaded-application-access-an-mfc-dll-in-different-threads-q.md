---
title: "Can a multithreaded application access an MFC DLL in different threads? | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DLLs [C++], multithreading"
  - "MFC DLLs [C++], multithreading"
  - "threading [MFC], DLLs"
  - "multithreading [C++], DLLs"
ms.assetid: e3452e62-021e-4d23-9cce-cff41eb8b46b
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Can a multithreaded application access an MFC DLL in different threads?
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Visual Studio 2017 Documentation](https://docs.microsoft.com/en-us/visualstudio/).  
  
Multithreaded applications can access regular DLLs that dynamically link to MFC and extension DLLs from different threads. And as of Visual C++ version 4.2, an application can access regular DLLs that statically link to MFC from multiple threads created in the application.  
  
 Prior to version 4.2, only one external thread could attach to a regular DLL that statically linked to MFC. For more information about restrictions accessing regular DLLs that statically link to MFC from multiple threads (prior to Visual C++ version 4.2), see the Knowledge Base article, "Multiple Threads and MFC _USRDLLs" (Q122676).  
  
 Note that the term USRDLL is no longer used in the Visual C++ documentation. A regular DLL that is statically linked to MFC has the same characteristics as the former USRDLL.  
  
## See Also  
 [DLL Frequently Asked Questions](../build/dll-frequently-asked-questions.md)

