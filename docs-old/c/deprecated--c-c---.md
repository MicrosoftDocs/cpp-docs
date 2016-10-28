---
title: "deprecated (C-C++)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "vc-pragma.deprecated"
  - "deprecated_CPP"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "deprecated pragma"
  - "pragmas, deprecated"
ms.assetid: 9c046f12-7875-499a-8d5d-12f8642fed2d
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
# deprecated (C/C++)
The **deprecated** pragma lets you indicate that a function, type, or any other identifier may no longer be supported in a future release or should no longer be used.  
  
## Syntax  
  
```  
  
#pragma deprecated( identifier1 [,identifier2, ...] )  
```  
  
## Remarks  
 When the compiler encounters a deprecated symbol, it issues [C4995](../compilerwarnings/compiler-warning--level-3--c4995.md).  
  
 You can deprecate macro names. Place the macro name in quotes or else macro expansion will occur.  
  
 The [deprecated](../cpp/deprecated--c---.md) `__declspec` modifier allows you to specify deprecated status for particular forms of overloaded functions.  
  
## Example  
  
```  
// pragma_directive_deprecated.cpp  
// compile with: /W3  
#include <stdio.h>  
void func1(void) {  
}  
  
void func2(void) {  
}  
  
int main() {  
   func1();  
   func2();  
   #pragma deprecated(func1, func2)  
   func1();   // C4995  
   func2();   // C4995  
}  
```  
  
 The following sample shows how to deprecate a class:  
  
```  
// pragma_directive_deprecated2.cpp  
// compile with: /W3  
#pragma deprecated(X)  
class X {  // C4995  
public:  
   void f(){}  
};  
  
int main() {  
   X x;   // C4995  
}  
```  
  
## See Also  
 [Pragma Directives and the __Pragma Keyword](../c/pragma-directives-and-the-__pragma-keyword.md)