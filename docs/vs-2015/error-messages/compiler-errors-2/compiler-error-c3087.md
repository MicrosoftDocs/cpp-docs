---
title: "Compiler Error C3087 | Microsoft Docs"
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
  - "C3087"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3087"
ms.assetid: 4f5bdd52-a853-4f02-b160-6868e9190b9d
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3087
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3087](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3087).  
  
  
named_argument': call of 'attribute' already initializes this member  
  
 A named argument was specified in the same attribute block as an unnamed argument for the same value. Specify only a named or unnamed argument.  
  
## Example  
 The following sample generates C3087.  
  
```  
// C3087.cpp  
// compile with: /c  
[idl_quote("quote1", text="quote2")];   // C3087  
[idl_quote(text="quote3")];   // OK  
[idl_quote("quote4")];   // OK  
```

