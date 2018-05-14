---
title: "Compiler Error C3012 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3012"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3012"]
ms.assetid: cc7040b1-b3fb-4da6-a474-877914d30332
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3012
  
> '*intrinsic*' : intrinsic function not allowed directly within a parallel region  
  
 A [compiler intrinsic](../../intrinsics/compiler-intrinsics.md) function is not allowed in an `omp parallel` region. To fix this issue, move intrinsics out of the region, or replace them with non-intrinsic equivalents.   
  
## Example  
  
 The following sample generates C3012, and shows one way to fix it:  
  
```cpp  
// C3012.cpp  
// compile with: /openmp  
#ifdef __cplusplus  
extern "C" {  
#endif  
void* _ReturnAddress();  
#ifdef __cplusplus  
}  
#endif  
  
int main()  
{  
   #pragma omp parallel  
   {  
      _ReturnAddress();   // C3012  
   }  
   _ReturnAddress();      // OK  
}  
```