---
title: "Compiler Warning (level 3) C4823"
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
  - "C4823"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4823"
ms.assetid: 8a77560d-dcea-4cae-aebb-8ebf1b4cef85
caps.latest.revision: 12
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
# Compiler Warning (level 3) C4823
'function' : uses pinning pointers but unwind semantics are not enabled. Consider using /EHa  
  
 To unpin an object on the managed heap pointed to by a pinning pointer declared in a block scope, the compiler simulates the behavior of destructors of local classes, "pretending" the pinning pointer has a destructor that nullifies the pointer. To enable a call to a destructor after throwing an exception, you must enable object unwinding, which you can do by using [/EHsc](../buildref/-eh--exception-handling-model-.md).  
  
 You can also manually unpin the object and ignore the warning.  
  
## Example  
 The following sample generates C4823.  
  
```  
// C4823.cpp  
// compile with: /clr /W3 /EHa-  
using namespace System;  
  
ref struct G {  
   int m;  
};  
  
void f(G ^ pG) {  
   try {  
      pin_ptr<int> p = &pG->m;  
      // manually unpin, ignore warning  
      // p = nullptr;  
      throw gcnew Exception;  
   }  
   catch(Exception ^) {}  
}   // C4823 warning  
  
int main() {  
   f( gcnew G );  
}  
```  
  
## Example  
 C4823 can also be generated using **/clr:oldSyntax**. The following sample generates C4823.  
  
```  
// C4823_b.cpp  
// compile with: /clr:oldSyntax /W3 /EHa-  
using namespace System;  
  
__gc struct G {  
   int m;  
};  
  
void f(G* pG) {  
   try {  
      int __pin* p = &pG->m;  
      // manually unpin, ignore warning  
      // p = 0;  
      throw new Exception;  
   }  
   catch(Exception*) {}  
}   // C4823  
  
int main() {  
   f( new G );  
}  
```