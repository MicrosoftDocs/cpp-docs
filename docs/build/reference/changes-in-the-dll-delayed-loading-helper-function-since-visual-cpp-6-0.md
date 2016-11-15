---
title: "Changes in the DLL Delayed Loading Helper Function Since Visual C++ 6.0 | Microsoft Docs"
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
  - "delayed loading of DLLs, what's changed"
  - "PFromRva method"
  - "__delayLoadHelper2 function"
  - "helper functions, what's changed"
ms.assetid: 99f0be69-105d-49ba-8dd5-3be7939c0c72
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
# Changes in the DLL Delayed Loading Helper Function Since Visual C++ 6.0
If you have multiple versions of Visual C++ on your computer or if you defined your own helper function, you may be affected by changes made to the DLL delayed loading helper function. For example:  
  
-   **__delayLoadHelper** is now **__delayLoadHelper2**  
  
-   **__pfnDliNotifyHook** is now **__pfnDliNotifyHook2**  
  
-   **__pfnDliFailureHook** is now **__pfnDliFailureHook2**  
  
-   **__FUnloadDelayLoadedDLL** is now **__FUnloadDelayLoadedDLL2**  
  
> [!NOTE]
>  If you are using the default helper function, these changes will not affect you. There are no changes regarding how you invoke the linker.  
  
## Multiple Versions of Visual C++  
 If you have multiple versions of Visual C++ on your computer, make sure the linker matches delayimp.lib. If there is a mismatch, you will get a linker error reporting either `___delayLoadHelper2@8` or `___delayLoadHelper@8` as an unresolved external symbol. The former implies a new linker with an old delayimp.lib, and the latter implies an old linker with a new delayimp.lib.  
  
 If you get an unresolved linker error, run [dumpbin /linkermember](../../build/reference/linkermember.md):1 on the delayimp.lib that you expect to contain the helper function to see which helper function is defined instead. The helper function could also be defined in an object file; run [dumpbin /symbols](../../build/reference/symbols.md) and look for `delayLoadHelper(2)`.  
  
 If you know you have the Visual C++ 6.0 linker, then:  
  
-   Run dumpbin on the delay load helper's .lib or .obj file to determine whether it defines **__delayLoadHelper2**. If not, the link will fail.  
  
-   Define **__delayLoadHelper** in the delay load helper's .lib or .obj file.  
  
## User-Defined Helper Function  
 If you defined your own helper function and are using the current version of Visual C++, do the following:  
  
-   Rename the helper function to **__delayLoadHelper2**.  
  
-   Since the pointers in the delay descriptor (ImgDelayDescr in delayimp.h) have been changed from absolute addresses (VAs) to relative addresses (RVAs) to work as expected in both 32- and 64-bit programs, you need to convert these back to pointers. A new function has been introduced: PFromRva, found in delayhlp.cpp. You can use this function on each of the fields in the descriptor to convert them back to either 32- or 64-bit pointers. The default delay load helper function continues to be a good template to use as an example.  
  
## Load All Imports for a Delay-Loaded DLL  
 The linker can load all imports from a DLL that you specified to be delay loaded. See [Loading All Imports for a Delay-Loaded DLL](../../build/reference/loading-all-imports-for-a-delay-loaded-dll.md) for more information.  
  
## See Also  
 [Understanding the Helper Function](http://msdn.microsoft.com/en-us/6279c12c-d908-4967-b0b3-cabfc3e91d3d)