---
title: "Compiler Error C3711 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3711"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3711"
ms.assetid: 26d581cc-2153-4ee0-b814-a371184be3e1
caps.latest.revision: 7
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
# Compiler Error C3711
'method': an non-managed event source method must return void or an integral type  
  
 You defined a method in the event source that did not return void or an integral type. To fix this error, make the event and event handler have a return type of `void` or an integral type such as `int` or `long`.  
  
 The following sample generates C3711:  
  
```  
// C3711.cpp  
#include <atlbase.h>  
#include <atlcom.h>  
#include <atlctl.h>  
  
[event_source(native)]  
class CEventSrc {  
public:  
   __event float event1();   // C3711  
   // try the following line instead  
   // __event int event1();  
   // also change the handler, below  
};  
  
[event_receiver(native)]  
class CEventRec {  
public:  
   float handler1() {         // change float to int  
      return 0.0;             // change 0.0 to 0  
   }  
   void HookEvents(CEventSrc* pSrc) {  
      __hook(CEventSrc::event1, pSrc, CEventRec::handler1);  
   }  
   void UnhookEvents(CEventSrc* pSrc) {  
      __unhook(CEventSrc::event1, pSrc, CEventRec::handler1);  
   }  
};  
  
int main() {  
}  
```