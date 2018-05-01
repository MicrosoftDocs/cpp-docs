---
title: "Compiler Warning (level 1) C4683 | Microsoft Docs"
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
  - "C4683"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4683"
ms.assetid: e6e77364-dba1-46dd-ae1d-03da23070bce
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4683
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4683](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4683).  
  
  
function* ': event source has an 'out'-parameter; exercise caution when hooking multiple event handlers**  
  
 If more than one event sink is listening to a COM event source, the value of an out parameter may be ignored.  
  
 Be aware that a memory leak will occur in the following situation:  
  
1.  If a method has an out parameter that is internally allocated, for example a BSTR *.  
  
2.  If the event has more than one handler (is a multicast event)  
  
 The reason for the leak is that the out parameter will be set by more than one handler, but returned to the call site only by the last handler.  
  
 The following sample generates C4683:  
  
```  
// C4683.cpp  
// compile with: /W1 /LD  
#define _ATL_ATTRIBUTES 1  
#include "atlbase.h"  
#include "atlcom.h"  
  
[ module(name="xx") ];  
  
[ object ]  
__interface I {  
   HRESULT f([out] int* pi);  
   // try the following line instead  
   // HRESULT f(int* pi);  
};  
  
[ coclass, event_source(com) ]  
struct E {  
   __event __interface I;   // C4683  
};  
```

