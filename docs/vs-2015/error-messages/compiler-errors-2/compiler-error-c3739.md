---
title: "Compiler Error C3739 | Microsoft Docs"
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
  - "C3739"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3739"
ms.assetid: acffe894-08b8-4bf2-9249-9501e6e2bad3
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3739
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3739](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3739).  
  
  
class': syntax is only supported when the 'layout_dependent' parameter of event_receiver is true  
  
 You tried to hook an entire interface of events but `layout_dependent` on [event_receiver](../../windows/event-receiver.md) attribute is not true; you must hook a single event at a time.  
  
 The following sample generates C3739:  
  
```  
// C3739.cpp  
struct A  
{  
   __event void e();  
};  
  
// event_receiver is implied  
// [ event_receiver(layout_dependent=false)]  
  
// use the following line instead  
// [event_receiver(com, layout_dependent=true), coclass ]  
struct B  
{  
   void f();  
   B(A* a)  
   {  
      __hook(A, a, &B::f);   // C3739  
      // use the following line instead to hook a single event  
      // __hook(&A::e, a, &B::f);  
   }  
};  
  
int main()  
{  
}  
```

