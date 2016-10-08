---
title: "Compiler Error C2743"
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
ms.assetid: 644cd444-21d2-471d-a176-f5f52c5a0b73
caps.latest.revision: 8
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
# Compiler Error C2743
'type' : cannot catch a native type with __clrcall destructor or copy constructor  
  
 A module compiled with **/clr** (not **/clr:pure**) attempted to catch an exception of native type and where the type's destructor or copy constructor uses _`_clrcall` calling convention.  
  
 When compiled with **/clr** (not **/clr:pure**), exception handling expects the member functions in a native type to be [__cdecl](../VS_visualcpp/__cdecl.md) and not [__clrcall](../VS_visualcpp/__clrcall.md). Native types with member functions using `__clrcall` calling convention cannot be caught in a module compiled with **/clr**.  
  
 For more information, see [/clr (Common Language Runtime Compilation)](../VS_visualcpp/-clr--Common-Language-Runtime-Compilation-.md).  
  
## Example  
 The following sample generates C2743.  
  
```  
// C2743.cpp  
// compile with: /clr  
public struct S {  
   __clrcall ~S() {}  
};  
  
public struct T {  
   ~T() {}  
};  
  
int main() {  
   try {}  
   catch(S) {}   // C2743  
   // try the following line instead  
   // catch(T) {}  
  
   try {}  
   catch(S*) {}   // OK  
}  
```