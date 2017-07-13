---
title: "Compiler Error C2603 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology:  
  - "cpp-tools"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2603"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2603"
ms.assetid: 9ca520d0-f082-4b65-933d-17c3bcf8b02c
caps.latest.revision: 6
author: "corob-msft"
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
# Compiler Error C2603
'function' : Too many block scope static objects with constructor/destructors in function  
  
 There is a limit of 31 on the number of static objects you can have in an externally visible inline function.  
  
 The following code generates C2603:  
  
```  
// C2603.cpp  
struct C { C() {} };  
extern inline void f1() {  
   static C C1,C2,C3,C4,C5,C6,C7,C8,C9,C10,C11,C12,C14,C15,C16;  
   static C C17,C18,C19,C20,C21,C22,C23,C24,C25,C26,C27,C28,C29,C30,C31,C32;  
   static C C33;   // C2603 Comment this line out to avoid error  
}  
```

### Possible workarounds:

*Visual Studio 2013:*

In Visual Studio 2013, if you require the statics to be accessible within their block scope, one potential way to avoid this issue may be to enclose the statics in a lambda that is immediately invoked. 

For example:

```
struct C { C() {} };  
extern inline void f1() {  
   [&]() {
      static C C1,C2,C3,C4,C5,C6,C7,C8,C9,C10,C11,C12,C14,C15,C16;  
      static C C17,C18,C19,C20,C21,C22,C23,C24,C25,C26,C27,C28,C29,C30,C31,C32;  
      static C C33;  
   }(); 
}
```

*Visual Studio 2015 and newer:*

In C++11, a static local variable initialization is guaranteed to be thread-safe; a feature sometimes called "magic statics". This is the default starting with Visual Studio 2015. The thread-safe statics feature can be disabled by using the /Zc:threadSafeInit- compiler flag.

One potential cause for this error in Visual Studio 2015 and newer versions is the disabling of thread safe static initialization via the /Zc:threadSafeInit- compiler flag. If you are encountering this error, consider whether or not this flag is necessary for your application, and remove it if possible.



