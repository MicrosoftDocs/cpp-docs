---
title: "Compiler Error C3733 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3733"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3733"]
ms.assetid: 0cc1a9fe-1400-4be3-b35a-16435cba7a5a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3733
'event': improper syntax for specifying a COM event; did you forget '__interface'?  
  
 The wrong syntax was used for a COM event. To fix this error, change the event type or correct the syntax to comply with the COM event rules.  
  
 The following sample generates C3733:  
  
```  
#define _ATL_ATTRIBUTES 1  
#include "atlbase.h"  
#include "atlcom.h"  
  
[coclass, event_source(com), // change 'com' to 'native' to resolve  
uuid("00000000-0000-0000-0000-000000000001")]  
class A  
{  
   __event void func();   // C3733  
};  
  
int main()  
{  
}  
```