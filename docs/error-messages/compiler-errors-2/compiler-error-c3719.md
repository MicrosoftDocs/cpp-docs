---
title: "Compiler Error C3719 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3719"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3719"
ms.assetid: d0d59d4e-babb-4480-9ef7-70cf1a28165c
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
# Compiler Error C3719
'interface': an interface based event source can only be used for COM events  
  
 You declared an interface in a non-COM context.  
  
 The following sample generates C3719:  
  
```  
// C3719a.cpp  
#define _ATL_ATTRIBUTES 1  
#include "atlbase.h"  
#include "atlcom.h"  
  
[module(name="MyLibrary", version="1.2", helpfile="MyHelpFile")];  
  
[object]  
__interface I {  
   HRESULT func1();  
};  
  
[event_source(native), coclass]  
struct A {  
   __event __interface I;   // C3719  
  
   // try the following line instead  
   // __event func2();  
};  
  
int main() {  
}  
```  
  
 To fix this error, apply the [object](../../windows/object-cpp.md), [coclass](../../windows/coclass.md), [event_source](../../windows/event-source.md), and [event_receiver](../../windows/event-receiver.md) attributes appropriately to make the classes in which you are using the interface COM classes. For example:  
  
```  
// C3719b.cpp  
#define _ATL_ATTRIBUTES 1  
#include <atlbase.h>  
#include <atlcom.h>  
  
[module(name="xx")];  
[object, uuid("00000000-0000-0000-0000-000000000001")]  
__interface I {  
   HRESULT f();  
};  
  
[coclass, event_source(com) , uuid("00000000-0000-0000-0000-000000000002")]  
struct MyStruct {  
   __event __interface I;  
};  
  
[event_receiver(com)]  
struct MyStruct2 {  
   void f() {  
   }  
   MyStruct2(I* pB) {  
      __hook(&I::f, pB, &MyStruct2::f);  
   }  
};  
  
int main()  
{  
}  
```