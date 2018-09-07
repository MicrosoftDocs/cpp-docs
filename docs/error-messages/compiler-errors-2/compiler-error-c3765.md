---
title: "Compiler Error C3765 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3765"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3765"]
ms.assetid: feadee7a-fcfb-402c-af2f-0e656f814a13
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3765
'event': cannot define an event in a class/struct 'type' marked as an event_receiver  
  
 If a class is marked with the [event_receiver](../../windows/event-receiver.md) attribute, the class cannot contain an [__event](../../cpp/event.md) declaration.  
  
 The following sample generates C3765:  
  
```  
// C3765.cpp  
[event_receiver(native)]  
struct ER2 {  
   __event void f();   // C3765  
   __event void b(int);   // C3765  
};  
```