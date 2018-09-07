---
title: "Compiler Warning (level 1) C4392 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4392"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4392"]
ms.assetid: 817806ad-06a6-4b9e-8355-e25687c782dc
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4392
'signature' : incorrect number of arguments for intrinsic function, expected 'number' arguments  
  
 A function declaration for a compiler intrinsic had the wrong number of arguments. The resulting image may not run correctly.  
  
 To fix this warning, either correct the declaration or delete the declaration and simply #include the appropriate header file.  
  
 The following sample generates C4392:  
  
```  
// C4392.cpp  
// compile with: /W1  
// processor: x86  
// uncomment the following line and delete the line that  
// generated the warning to resolve  
// #include "xmmintrin.h"  
  
#ifdef  __cplusplus  
extern "C" {  
#endif  
  
extern void _mm_stream_pd(double *dp);   // C4392  
  
#ifdef  __cplusplus  
}  
#endif  
  
int main()  
{  
}  
```