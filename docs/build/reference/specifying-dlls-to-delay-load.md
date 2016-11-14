---
title: "Specifying DLLs to Delay Load | Microsoft Docs"
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
  - "DELAYLOAD linker option"
  - "delayed loading of DLLs"
  - "delayed loading of DLLs, specifying"
  - "/DELAYLOAD linker option"
ms.assetid: 94cbecfe-7a42-40d1-a618-9f2786bac0d8
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
# Specifying DLLs to Delay Load
You can specify which DLLs to delay load with the [/delayload](../../build/reference/delayload-delay-load-import.md):`dllname` linker option. If you do not plan to use your own version of a helper function, you must also link your program with delayimp.lib (for desktop applications) or dloadhelper.lib (for store apps).  
  
 The following is a simple example of delay loading a DLL:  
  
```  
// cl t.cpp user32.lib delayimp.lib  /link /DELAYLOAD:user32.dll  
#include <windows.h>  
// uncomment these lines to remove .libs from command line  
// #pragma comment(lib, "delayimp")  
// #pragma comment(lib, "user32")  
  
int main() {  
   // user32.dll will load at this point  
   MessageBox(NULL, "Hello", "Hello", MB_OK);  
}  
```  
  
 Build the DEBUG version of the project. Step through the code using the debugger and you will notice that user32.dll is loaded only when you make the call to `MessageBox`.  
  
## See Also  
 [Linker Support for Delay-Loaded DLLs](../../build/reference/linker-support-for-delay-loaded-dlls.md)