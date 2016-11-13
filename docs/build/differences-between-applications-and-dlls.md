---
title: "Differences Between Applications and DLLs | Microsoft Docs"
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
  - "executable files [C++], DLLs vs. applications"
  - "DLLs [C++], vs. applications"
  - "applications [C++], vs. DLLs"
ms.assetid: 8f271523-d8d0-4ad1-84d2-0c5645d7fd5b
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
# Differences Between Applications and DLLs
Even though DLLs and applications are both executable program modules, they differ in several ways. To the end user, the most obvious difference is that DLLs are not programs that can be directly executed. From the system's point of view, there are two fundamental differences between applications and DLLs:  
  
-   An application can have multiple instances of itself running in the system simultaneously, whereas a DLL can have only one instance.  
  
-   An application can own things such as a stack, global memory, file handles, and a message queue, but a DLL cannot.  
  
## What do you want to do?  
  
-   [Export from a DLL](../build/exporting-from-a-dll.md)  
  
-   [Link an executable to a DLL](../build/linking-an-executable-to-a-dll.md)  
  
-   [Initialize a DLL](../build/initializing-a-dll.md)  
  
## What do you want to know more about?  
  
-   [The advantages of using DLLs](../build/advantages-of-using-dlls.md)  
  
-   [Non-MFC DLLs: Overview](../build/non-mfc-dlls-overview.md)  
  
-   [Regular DLLs statically linked to MFC](../build/regular-dlls-statically-linked-to-mfc.md)  
  
-   [Regular DLLs dynamically linked to MFC](../build/regular-dlls-dynamically-linked-to-mfc.md)  
  
-   [Extension DLLs: Overview](../build/extension-dlls-overview.md)  
  
## See Also  
 [DLLs in Visual C++](../build/dlls-in-visual-cpp.md)