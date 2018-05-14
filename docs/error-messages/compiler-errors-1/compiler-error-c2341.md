---
title: "Compiler Error C2341 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2341"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2341"]
ms.assetid: aa2a7da5-e1c8-4225-9939-5bdc50158f31
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2341
'section name' : segment must be defined using #pragma data_seg, code_seg or section prior to use  
  
 An [allocate](../../cpp/allocate.md) statement refers to a segment not yet defined by [code_seg](../../preprocessor/code-seg.md), [data_seg](../../preprocessor/data-seg.md), or [section](../../preprocessor/section.md) pragmas.  
  
 The following sample generates C2341:  
  
```  
// C2341.cpp  
// compile with: /c  
__declspec(allocate(".test"))   // C2341  
int j = 1;  
```  
  
 Possible resolution:  
  
```  
// C2341b.cpp  
// compile with: /c  
#pragma data_seg(".test")  
__declspec(allocate(".test"))  
int j = 1;  
```