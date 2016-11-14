---
title: "Loading All Imports for a Delay-Loaded DLL | Microsoft Docs"
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
  - "__HrLoadAllImportsForDll linker option"
ms.assetid: 975fcd97-1a56-4a16-9698-e1a249d2d592
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
# Loading All Imports for a Delay-Loaded DLL
The **__HrLoadAllImportsForDll** function, which is defined in delayhlp.cpp, tells the linker to load all imports from a DLL that was specified with the [/delayload](../../build/reference/delayload-delay-load-import.md) linker option.  
  
 Loading all imports allows you to put error handling in one place in your code and not have to use exception handling around the actual calls to the imports. It also avoids a situation where your application fails partially through a process as a result of the helper code failing to load an import.  
  
 Calling **__HrLoadAllImportsForDll** does not change the behavior of hooks and error handling; see [Error Handling and Notification](../../build/reference/error-handling-and-notification.md) for more information.  
  
 The DLL name passed to **__HrLoadAllImportsForDll** is compared to the name stored inside the DLL itself and is case sensitive.  
  
 The following example shows how to call **__HrLoadAllImportsForDll**:  
  
```  
if (FAILED(__HrLoadAllImportsForDll("delay1.dll"))) {  
   printf ( "failed on snap load, exiting\n" );  
   exit(2);  
}  
```  
  
## See Also  
 [Linker Support for Delay-Loaded DLLs](../../build/reference/linker-support-for-delay-loaded-dlls.md)