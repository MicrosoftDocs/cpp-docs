---
title: "Compiler Warning (level 1) C4382"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "error-reference"
f1_keywords: 
  - "C4382"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4382"
ms.assetid: 34be9ad3-bae6-411a-8f80-0c8fd0d2c092
caps.latest.revision: 7
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Compiler Warning (level 1) C4382
throwing 'type' : a type with __clrcall destructor or copy constructor can only be caught in /clr:pure module  
  
 When compiled with **/clr** (not **/clr:pure**), exception handling expects the member functions in a native type to be [__cdecl](../cpp/__cdecl.md) and not [__clrcall](../cpp/__clrcall.md). Native types with member functions using `__clrcall` calling convention cannot be caught in a module compiled with **/clr**.  
  
 If the exception will be caught in a module compiled with **/clr:pure**, you can ignore this warning.  
  
 For more information, see [/clr (Common Language Runtime Compilation)](../buildref/-clr--common-language-runtime-compilation-.md).  
  
## Example  
 The following sample generates C4382.  
  
```  
// C4382.cpp  
// compile with: /clr /W1 /c  
struct S {  
   __clrcall ~S() {}  
};  
  
struct T {  
   ~T() {}  
};  
  
int main() {  
   S s;  
   throw s;   // C4382  
  
   S * ps = &s;  
   throw ps;   // OK  
  
   T t;  
   throw t;   // OK  
}  
```