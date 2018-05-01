---
title: "Compiler Error C3211 | Microsoft Docs"
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
  - "C3211"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3211"
ms.assetid: 85e33fed-3b59-4315-97e6-20d31c6a985a
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3211
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3211](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3211).  
  
  
explicit specialization' : explicit specialization is using partial specialization syntax, use template <> instead  
  
 An explicit specialization was ill formed.  
  
 The following sample generates C3211:  
  
```  
// C3211.cpp  
// compile with: /LD  
template<class T>  
struct s;  
  
template<class T>  
// use the following line instead  
// template<>  
struct s<int>{};   // C3211  
```

