---
title: "Compiler Warning (level 1) C4076 | Microsoft Docs"
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
  - "C4076"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4076"
ms.assetid: 04581066-313a-4a11-bb60-721e6d038d75
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4076
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4076](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4076).  
  
  
typemod' : can not be used with type 'typename'  
  
 A type modifier, whether it is **signed** or `unsigned`, cannot be used with a noninteger type. ***typemod*** is ignored.  
  
## Example  
 The following sample generates C4076:  
  
```  
// C4076.cpp  
// compile with: /W1 /LD  
unsigned double x;   // C4076  
```

