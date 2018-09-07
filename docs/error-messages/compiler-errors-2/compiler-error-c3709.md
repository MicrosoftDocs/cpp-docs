---
title: "Compiler Error C3709 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3709"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3709"]
ms.assetid: d5576b04-2f93-420a-8f3e-8b8e987e8dab
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3709
'function': improper syntax for specifying event in __hook/\__unhook  
  
 When you specify an event source with [__hook](../../cpp/hook.md) or [__unhook](../../cpp/unhook.md), the first parameter must be a valid event method and the second parameter must be a valid event source object (not a method).  
  
 The following sample generates C3709:  
  
```  
// C3709.cpp  
// compile with: /LD  
[event_source(native)]  
class CEventSrc  
{  
public:  
   __event void event1();  
};  
  
[event_receiver(native)]  
class CEventRec  
{  
public:  
   void handler1()  
   {  
   }  
  
   void HookEvents(CEventSrc* pSrc)  
   {  
      __hook(bad, pSrc, CEventRec::handler1);   // C3709  
      // Try the following line instead:  
      // __hook(&CEventSrc::event1, pSrc, CEventRec::handler1);  
   }  
  
   void UnhookEvents(CEventSrc* pSrc)  
   {  
      __unhook(&CEventSrc::event1, pSrc, CEventRec::handler1);  
   }  
};  
```