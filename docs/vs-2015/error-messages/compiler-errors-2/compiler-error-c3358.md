---
title: "Compiler Error C3358 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3358"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3358"
ms.assetid: 180b93df-e78f-441a-91fb-1594c681f7f0
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3358
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3358](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3358).  
  
  
symbol': symbol not found  
  
 The required symbol was not found.  
  
 The following sample generates C3358:  
  
```  
// C3358.cpp  
#define __ATLEVENT_H__ 1   // remove this line to resolve the error  
#define _ATL_ATTRIBUTES 1  
#include "atlbase.h"  
#include "atlcom.h"  
  
[event_receiver(com)]  
struct A   // C3358  
{  
   void func();  
};  
  
int main()  
{  
}  
```

