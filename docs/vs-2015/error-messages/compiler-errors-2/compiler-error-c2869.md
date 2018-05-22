---
title: "Compiler Error C2869 | Microsoft Docs"
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
  - "C2869"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2869"
ms.assetid: 6e30c001-47f3-4101-b9f1-cc542c9fffae
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2869
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2869](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2869).  
  
  
name' : has already been defined to be a namespace  
  
 You cannot reuse a name already used as a namespace.  
  
 The following sample generates C2869:  
  
```  
// C2869.cpp  
// compile with: /c  
namespace A { int i; };  
  
class A {};   // C2869, A is already used  
```

