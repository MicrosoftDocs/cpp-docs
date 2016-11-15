---
title: "Can a multithreaded application access an MFC DLL in different threads? | Microsoft Docs"
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
  - "DLLs [C++], multithreading"
  - "MFC DLLs [C++], multithreading"
  - "threading [MFC], DLLs"
  - "multithreading [C++], DLLs"
ms.assetid: e3452e62-021e-4d23-9cce-cff41eb8b46b
caps.latest.revision: 6
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
# Can a multithreaded application access an MFC DLL in different threads?
Multithreaded applications can access regular DLLs that dynamically link to MFC and extension DLLs from different threads. And as of Visual C++ version 4.2, an application can access regular DLLs that statically link to MFC from multiple threads created in the application.  
  
 Prior to version 4.2, only one external thread could attach to a regular DLL that statically linked to MFC. For more information about restrictions accessing regular DLLs that statically link to MFC from multiple threads (prior to Visual C++ version 4.2), see the Knowledge Base article, "Multiple Threads and MFC _USRDLLs" (Q122676).  
  
 Note that the term USRDLL is no longer used in the Visual C++ documentation. A regular DLL that is statically linked to MFC has the same characteristics as the former USRDLL.  
  
## See Also  
 [DLL Frequently Asked Questions](../build/dll-frequently-asked-questions.md)