---
title: "Compiler Error C3382"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "C3382"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3382"
ms.assetid: a7603abd-ac4e-4ae6-a02b-3bdc6d1908a6
caps.latest.revision: 3
ms.author: "corob"
manager: "douge"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Compiler Error C3382
'sizeof' is not supported with /clr:safe  
  
 The output file of a **/clr:safe** compilation is a file that is verifiably type safe, and sizeof is not supported because the return value of the sizeof operator is size_t, whose size varies depending on the operating system.  
  
 For more information, see,  
  
-   [sizeof Operator](../cpp/sizeof-operator.md)  
  
-   [/clr (Common Language Runtime Compilation)](../buildref/-clr--common-language-runtime-compilation-.md)  
  
-   [Common Visual C++ 64-bit Migration Issues](../build/common-visual-c---64-bit-migration-issues.md)  
  
## Example  
 The following sample generates C3382.  
  
```  
// C3382.cpp  
// compile with: /clr:safe  
int main() {  
   sizeof( char );   // C3382  
}  
```