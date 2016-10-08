---
title: "Compiler Warning (level 4) C4932"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-csharp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 0b8d88cc-21f6-45cb-a9f5-1795b7db0dfa
caps.latest.revision: 9
manager: douge
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Compiler Warning (level 4) C4932
__identifier(identifier) and \__identifier(identifier) are indistinguishable  
  
 The compiler is unable to distinguish between **_finally** and `__finally` or `__try` and **_try** as a parameter passed to [__identifier](../VS_visualcpp/__identifier--C---CLI-.md). You should not attempt to use them both as identifiers in the same program, as it will result in a [C2374](../VS_visualcpp/Compiler-Error-C2374.md) error.  
  
 The following sample generates C4932:  
  
```  
// C4932.cpp  
// compile with: /clr /W4 /WX  
int main() {  
   int __identifier(_finally) = 245;   // C4932  
   int __identifier(__finally) = 25;   // C4932  
}  
```