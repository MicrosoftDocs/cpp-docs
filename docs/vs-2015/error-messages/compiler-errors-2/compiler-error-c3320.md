---
title: "Compiler Error C3320 | Microsoft Docs"
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
  - "C3320"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3320"
ms.assetid: 2ef72d9a-1f1d-4b2e-b244-9fd3f3e70cb6
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3320
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3320](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3320).  
  
  
type': type cannot have the same name as the module 'name' property  
  
 An exported user-defined type (UDT), which could be a struct, class, enum, union or [__value](../../misc/value.md), cannot have the same name as the parameter passed to the [module](../../windows/module-cpp.md) attribute's name property.  
  
 The following sample generates C3320:  
  
```  
// C3320.cpp  
#include "unknwn.h"  
[module(name="xx")];  
  
[export] struct xx {   // C3320  
// Try the following line instead  
// [export] struct yy {  
   int i;  
};  
```

