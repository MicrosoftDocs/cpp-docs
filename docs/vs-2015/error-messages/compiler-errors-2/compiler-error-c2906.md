---
title: "Compiler Error C2906 | Microsoft Docs"
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
  - "C2906"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2906"
ms.assetid: 30f652f1-6af6-4a2f-a69e-a1a4876cc8c6
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2906
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2906](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2906).  
  
  
specialization' : explicit specialization requires 'template <>'  
  
 You must use the new syntax for explicit specialization of templates.  
  
 The following sample generates C2906:  
  
```  
// C2906.cpp  
// compile with: /c  
template<class T> class X{};   // primary template  
class X<int> { }   // C2906  
template<> class X<int> { };   // new syntax  
```

