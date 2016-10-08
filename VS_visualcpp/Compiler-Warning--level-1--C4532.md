---
title: "Compiler Warning (level 1) C4532"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: error-reference
ms.assetid: 4e2a286a-d233-4106-9f65-29be1a94ca02
caps.latest.revision: 9
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Compiler Warning (level 1) C4532
'continue' : jump out of __finally/finally block has undefined behavior during termination handling  
  
 The compiler encountered one of the following keywords:  
  
-   [continue](../VS_visualcpp/continue-Statement--C---.md)  
  
-   [break](../VS_visualcpp/break-Statement--C---.md)  
  
-   [goto](../VS_visualcpp/goto-Statement--C---.md)  
  
 causing a jump out of a [__finally](../VS_visualcpp/try-finally-Statement.md) or [finally](../VS_visualcpp/finally.md) block during abnormal termination.  
  
 If an exception occurs, and while the stack is being unwound during execution of the termination handlers (the `__finally` or finally blocks), and your code jumps out of a `__finally` block before the `__finally` block ends, the behavior is undefined. Control may not return to the unwinding code, so the exception may not be handled properly.  
  
 If you must jump out of a **__finally** block, check for abnormal termination first.  
  
 The following sample generates C4532; simply comment out the jump statements to resolve the warnings.  
  
```  
// C4532.cpp  
// compile with: /W1  
// C4532 expected  
int main() {  
   int i;  
   for (i = 0; i < 10; i++) {  
      __try {  
      } __finally {  
         // Delete the following line to resolve.  
         continue;  
      }  
  
      __try {  
      } __finally {  
         // Delete the following line to resolve.  
         break;  
      }  
   }  
}  
```