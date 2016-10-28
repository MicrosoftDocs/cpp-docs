---
title: "Linker Tools Error LNK1306"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1306"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1306"
ms.assetid: fad1df6a-0bd9-412f-b0d1-7c9bc749c584
caps.latest.revision: 11
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
# Linker Tools Error LNK1306
DLL entry point function cannot be managed; compile to native  
  
 DllMain cannot be compiled to MSIL; it must be compiled to native.  
  
 To resolve,  
  
-   Compile the file that contains the entry point without **/clr**.  
  
-   Put the entry point in a `#pragma unmanaged` section.  
  
-   For more information, see  
  
-   [/clr (Common Language Runtime Compilation)](../buildref/-clr--common-language-runtime-compilation-.md)  
  
-   [managed, unmanaged](../c/managed--unmanaged.md)  
  
-   [Initialization of Mixed Assemblies](../cli/initialization-of-mixed-assemblies.md)  
  
-   [Run-Time Library Behavior](../build/run-time-library-behavior.md)  
  
## Example  
 The following sample generates LNK1306.  
  
```  
// LNK1306.cpp  
// compile with: /clr /link /dll /entry:NewDllMain  
// LNK1306 error expected  
#include <windows.h>  
int __stdcall NewDllMain( HINSTANCE h, ULONG ulReason, PVOID pvReserved ) {  
   return 1;  
}  
```