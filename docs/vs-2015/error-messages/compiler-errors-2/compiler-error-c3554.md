---
title: "Compiler Error C3554 | Microsoft Docs"
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
  - "C3554"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3554"
ms.assetid: aede18d5-fefc-4da9-9b69-adfe90bfa742
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3554
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3554](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3554).  
  
  
decltype' cannot be combined with any other type-specifier  
  
 You cannot qualify the `decltype()` keyword with any type specifier. For example, the following code fragment yields error C3554.  
  
```  
int x;  
unsigned decltype(x); // C3554  
```

