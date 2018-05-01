---
title: "Compiler Error C2286 | Microsoft Docs"
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
  - "C2286"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2286"
ms.assetid: 078e0201-35cc-42e2-8dbc-6f8cf557b098
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2286
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2286](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2286).  
  
  
pointers to members of 'identifier' representation is already set to 'inheritance' – declaration ignored  
  
 Two different pointer-to-members representations exist for class.  
  
 For more information, see [Inheritance Keywords](../../cpp/inheritance-keywords.md).  
  
## Example  
 The following sample generates C2286:  
  
```  
// C2286.cpp  
// compile with: /c  
class __single_inheritance X;  
class __multiple_inheritance X;   // C2286  
class  __multiple_inheritance Y;   // OK  
```

