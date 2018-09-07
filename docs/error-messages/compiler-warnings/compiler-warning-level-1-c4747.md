---
title: "Compiler Warning (level 1) C4747 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4747"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4747"]
ms.assetid: af37befd-ba1f-4bdc-96e1-a953f7a2ad9c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4747
Calling managed 'entrypoint': Managed code may not be run under loader lock, including the DLL entrypoint and calls reached from the DLL entrypoint  
  
 The compiler found a (probable) DLL entry point compiled to MSIL.  Because of potential problems with loading a DLL whose entry point has been compiled to MSIL, you are strongly discouraged from compiling a DLL entry point function to MSIL.  
  
 For more information, see [Initialization of Mixed Assemblies](../../dotnet/initialization-of-mixed-assemblies.md) and [Linker Tools Error LNK1306](../../error-messages/tool-errors/linker-tools-error-lnk1306.md).  
  
### To correct this error  
  
1.  Do not compile the module with **/clr**.  
  
2.  Mark the entry point function with `#pragma unmanaged`.  
  
## Example  
 The following sample generates C4747.  
  
```  
// C4747.cpp  
// compile with: /clr /c /W1  
// C4747 expected  
#include <windows.h>  
  
// Uncomment the following line to resolve.  
// #pragma unmanaged  
  
BOOL WINAPI DllMain(HANDLE hInstance, ULONG Command, LPVOID Reserved) {  
   return TRUE;  
};  
```