---
title: "Compiler Warning (level 1) C4794 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4794"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4794"]
ms.assetid: badc9c36-fa1a-4fec-929b-7bfda7a7b79f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4794
segment of thread local storage variable 'variable' changed from 'section name' to '.tls$'  
  
 You used [#pragma data_seg](../../preprocessor/data-seg.md) to put a tls variable in a section not starting with .tls$.  
  
 The .tls$*x* section will exist in the object file where [__declspec(thread)](../../cpp/thread.md) variables are defined. A .tls section in the EXE or DLL will result from these sections.  
  
## Example  
 The following sample generates C4794:  
  
```  
// C4794.cpp  
// compile with: /W1 /c  
#pragma data_seg(".someseg")  
__declspec(thread) int i;   // C4794  
  
// OK  
#pragma data_seg(".tls$9")  
__declspec(thread) int j;  
```