---
title: "Compiler Error C2743 | Microsoft Docs"
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
  - "C2743"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2743"
ms.assetid: 644cd444-21d2-471d-a176-f5f52c5a0b73
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2743
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2743](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2743).  
  
  
type' : cannot catch a native type with __clrcall destructor or copy constructor  
  
 A module compiled with **/clr** (not **/clr:pure**) attempted to catch an exception of native type and where the type's destructor or copy constructor uses _`_clrcall` calling convention.  
  
 When compiled with **/clr** (not **/clr:pure**), exception handling expects the member functions in a native type to be [__cdecl](../../cpp/cdecl.md) and not [__clrcall](../../cpp/clrcall.md). Native types with member functions using `__clrcall` calling convention cannot be caught in a module compiled with **/clr**.  
  
 For more information, see [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md).  
  
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

