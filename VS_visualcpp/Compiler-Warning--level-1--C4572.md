---
title: "Compiler Warning (level 1) C4572"
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
ms.assetid: 482dee5a-29bd-4fc3-b769-9dfd4cd2a964
caps.latest.revision: 6
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
# Compiler Warning (level 1) C4572
[ParamArray] attribute is deprecated under /clr, use '...' instead  
  
 An obsolete style for specifying a variable argument list was used. When compiling for the CLR, use ellipsis syntax instead of <xref:System.ParamArrayAttribute?qualifyHint=False>. For more information, see [Variable Argument Lists (...) (C++/CLI)](../VS_visualcpp/Variable-Argument-Lists--...---C---CLI-.md).  
  
## Example  
 The following sample generates C4572.  
  
```  
// C4572.cpp  
// compile with: /clr /W1  
void Func([System::ParamArray] array<int> ^);   // C4572  
void Func2(... array<int> ^){}   // OK  
  
int main() {  
   Func2(1, 2, 3);  
}  
```