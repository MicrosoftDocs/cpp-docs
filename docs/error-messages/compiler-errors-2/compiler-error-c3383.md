---
title: "Compiler Error C3383 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3383"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3383"]
ms.assetid: ceb7f725-f417-4dc3-8496-0f413bb76687
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3383
'operator new' is not supported with /clr:safe  
  
 The output file of a **/clr:safe** compilation is a file that is verifiably type safe, and pointers are not supported.  
  
 For more information, see,  
  
-   [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md)  
  
-   [Common Visual C++ 64-bit Migration Issues](../../build/common-visual-cpp-64-bit-migration-issues.md)  
  
## Example  
 The following sample generates C3383.  
  
```  
// C3383.cpp  
// compile with: /clr:safe  
int main() {  
   char* pCharArray = new char[256];  // C3383  
}  
```