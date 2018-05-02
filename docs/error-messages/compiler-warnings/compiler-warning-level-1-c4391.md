---
title: "Compiler Warning (level 1) C4391 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4391"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4391"]
ms.assetid: 95c6182c-fae9-4174-8f7b-98aa352e68ca
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4391
'signature' : incorrect return type for intrinsic function, expected 'type'  
  
 A function declaration for a compiler intrinsic had the wrong return type. The resulting image may not run correctly.  
  
 To fix this warning, either correct the declaration or delete the declaration and simply #include the appropriate header file.  
  
 The following sample generates C4391:  
  
```  
// C4391.cpp  
// compile with: /W1  
// processor: x86  
// uncomment the following line and delete the line that  
// generated the warning to resolve  
// #include "xmmintrin.h"  
  
#ifdef  __cplusplus  
extern "C" {  
#endif  
  
extern void _mm_load_ss(float *p);   // C4391  
  
#ifdef  __cplusplus  
}  
#endif  
  
int main()  
{  
}  
```