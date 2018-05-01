---
title: "Compiler Error C3020 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3020"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3020"
ms.assetid: f625c7a3-afaa-4bd8-9c1b-51891b832f36
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3020
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3020](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3020).  
  
  
var' : index variable of OpenMP 'for' loop cannot be modified in loop body  
  
 An OpenMP `for` loop may not modify the index (loop counter) in the body of the `for` loop.  
  
 The following sample generates C3020:  
  
```  
// C3020.cpp  
// compile with: /openmp  
int main() {  
   int i = 0, n = 3;  
  
   #pragma omp parallel  
   {  
      #pragma omp for  
      for (i = 0; i < 10; i += n)  
         i *= 2;   // C3020  
         // try the following line instead  
         // n++;  
   }  
}  
```  
  
 A variable declared with [lastprivate](../../parallel/openmp/reference/lastprivate.md) cannot be used as the index inside a parallelized loop.  
  
 The following sample will give C3020 for the second lastprivate because that lastprivate will trigger a write to idx_a within the outermost for loop. The first lastprivate doesn't give an error because that lastprivate triggers a write to idx_a outside the outermost for loop (technically, at the very end of the last iteration). The following sample generates C3020.  
  
```  
// C3020b.cpp  
// compile with: /openmp /c  
float a[100][100];  
int idx_a, idx_b;  
void test(int first, int last)  
{  
   #pragma omp parallel for lastprivate(idx_a)  
   for (idx_a = first; idx_a <= last; ++idx_a) {  
      #pragma omp parallel for lastprivate(idx_a)   // C3020  
      for (idx_b = first; idx_b <= last; ++idx_b) {  
         a[idx_a][idx_b] += 1.0f;  
      }  
   }  
}  
```  
  
 The following sample demonstrates a possible resolution:  
  
```  
// C3020c.cpp  
// compile with: /openmp /c  
float a[100][100];  
int idx_a, idx_b;  
void test(int first, int last)  
{  
   #pragma omp parallel for lastprivate(idx_a)  
   for (idx_a = first; idx_a <= last; ++idx_a) {  
      #pragma omp parallel for lastprivate(idx_b)  
      for (idx_b = first; idx_b <= last; ++idx_b) {  
         a[idx_a][idx_b] += 1.0f;  
      }  
   }  
}  
```

