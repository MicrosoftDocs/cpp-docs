---
title: "Compiler Error C3765 | Microsoft Docs"
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
  - "C3765"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3765"
ms.assetid: feadee7a-fcfb-402c-af2f-0e656f814a13
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3765
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3765](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3765).  
  
  
event': cannot define an event in a class/struct 'type' marked as an event_receiver  
  
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

