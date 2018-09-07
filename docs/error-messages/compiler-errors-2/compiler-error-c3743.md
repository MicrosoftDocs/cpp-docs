---
title: "Compiler Error C3743 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3743"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3743"]
ms.assetid: 7ca9a76e-7b60-46d1-ab8b-18600cf1a306
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3743
can only hook/unhook an entire interface when the 'layout_dependent' parameter of event_receiver is true  
  
 The [__unhook](../../cpp/unhook.md) function varies in the number of parameters that it takes based on the value passed to the `layout_dependent` parameter in the [event_receiver](../../windows/event-receiver.md) class.  
  
 The following sample generates C3743:  
  
```  
// C3743.cpp  
#define _ATL_ATTRIBUTES 1  
#include <atlbase.h>  
#include <atlcom.h>  
[module(name="xx")];  
[object] __interface I { HRESULT f(); };  
  
[event_receiver(com, layout_dependent=true), coclass]  
struct R : I {  
        HRESULT f() {  
      return 0;  
   }  
        R() {  
   }  
  
   R(I* a) {  
      __hook(I, a, &R::f);   // C3743  
      // The following line resolves the error.  
      // __hook(I, a);  
   }  
};  
```