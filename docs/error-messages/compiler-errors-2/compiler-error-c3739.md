---
title: "Compiler Error C3739 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3739"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3739"]
ms.assetid: acffe894-08b8-4bf2-9249-9501e6e2bad3
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3739
'class': syntax is only supported when the 'layout_dependent' parameter of event_receiver is true  
  
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