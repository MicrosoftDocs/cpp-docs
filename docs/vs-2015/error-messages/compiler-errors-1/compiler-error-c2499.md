---
title: "Compiler Error C2499 | Microsoft Docs"
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
  - "C2499"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2499"
ms.assetid: b323ff4d-b3c1-4bfd-b052-ae7292d53222
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2499
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2499](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2499).  
  
  
class' : a class cannot be its own base class  
  
 You attempted to specify the class that you are defining as a base class.  
  
 The following sample generates C2499:  
  
```  
// C2499.cpp  
// compile with: /c  
class CMyClass : public CMyClass {};   // C2499  
class CMyClass{};   // OK  
```

