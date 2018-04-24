---
title: "Compiler Error C3744 | Microsoft Docs"
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
  - "C3744"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3744"
ms.assetid: a447d050-80d1-406a-9a6e-f15c527d717c
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3744
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3744](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3744).  
  
  
__unhook must have at least 3 arguments for managed events  
  
 The [__unhook](../../cpp/unhook.md) function must take three parameters when used in a program that is compiled for Managed Extensions for C++.  
  
 `__hook` and `__unhook` are not compatible with /clr programming. Use the += and -= operators instead.  
  
 C3744 is only reachable using **/clr:oldSyntax**.  
  
 The following sample generates C3744:  
  
```  
// C3744.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
using namespace System;  
  
public __delegate void delegate1();  
  
[ event_source(managed) ]  
public __gc class CPSource {  
public:  
   __event delegate1* event1;  
};  
  
[event_receiver(managed)]  
public __gc class CReceiver {  
public:  
   void Handler1() {  
   }  
  
   void UnhookAll1(CPSource* pSrc, CReceiver* pRec) {  
      pRec;  
      __unhook(pSrc);   // C3744  
      // The following line resolves the error.  
      // __unhook(&CPSource::event1, pSrc, &CReceiver::Handler1);  
   }  
};  
  
int main() {  
}  
```

