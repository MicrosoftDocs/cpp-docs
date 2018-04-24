---
title: "Compiler Error C2334 | Microsoft Docs"
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
  - "C2334"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2334"
ms.assetid: 36142855-e00b-4bbf-80f5-a301edeff46e
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2334
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2334](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2334).  
  
  
unexpected token(s) preceding ': or {'; skipping apparent function body  
  
 The following sample generates C2334. This error occurs after error C2059:  
  
```  
// C2334.cpp  
// compile with: /c  
// C2059 expected  
struct s1 {  
   s1   {}   // C2334  
   s1() {}   // OK  
};  
```

