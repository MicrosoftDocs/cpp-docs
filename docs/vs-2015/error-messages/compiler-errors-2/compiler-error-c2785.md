---
title: "Compiler Error C2785 | Microsoft Docs"
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
  - "C2785"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2785"
ms.assetid: d8d13360-0d00-4815-8475-b49c7f0dc0f3
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2785
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2785](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2785).  
  
  
declaration1' and 'declaration2' have different return types  
  
 The return type of function template specialization differs from the return type of the primary function template.  
  
### To correct this error  
  
1.  Check all specializations of the function template for consistency.  
  
## Example  
 The following sample generates C2785:  
  
```  
// C2785.cpp  
// compile with: /c  
template<class T> void f(T);  
  
template<> int f(int); // C2785  
template<> void f(int); // OK  
```

