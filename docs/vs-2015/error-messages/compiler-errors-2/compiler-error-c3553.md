---
title: "Compiler Error C3553 | Microsoft Docs"
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
  - "C3553"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3553"
ms.assetid: 7f84bf37-6419-4ad3-ab30-64266100b930
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3553
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3553](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3553).  
  
  
decltype expects an expression not a type  
  
 The `decltype()` keyword requires an expression as an argument, not the name of a type. For example, the last statement in the following code fragment yields error C3553.  
  
 `int x = 0;`  
  
 `decltype(x+1);`  
  
 `decltype(int); // C3553`

