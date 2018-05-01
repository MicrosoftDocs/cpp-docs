---
title: "Compiler Error C2834 | Microsoft Docs"
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
  - "C2834"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2834"
ms.assetid: 28f9f6eb-ab2a-4e64-aaaa-9d14f955de41
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2834
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2834](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2834).  
  
  
operator operator' must be globally qualified  
  
 The `new` and `delete` operators are tied to the class where they reside. Scope resolution cannot be used to select a version of `new` or `delete` from a different class. To implement multiple forms of the `new` or `delete` operator, create a version of the operator with extra formal parameters.

