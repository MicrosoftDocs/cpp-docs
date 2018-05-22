---
title: "Compiler Error C2801 | Microsoft Docs"
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
  - "C2801"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2801"
ms.assetid: 35dfc7ea-9e37-4e30-baa1-944dc61302f5
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2801
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2801](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2801).  
  
  
operator operator' must be a non-static member  
  
 The following operators can be overloaded only as nonstatic members:  
  
-   Assignment `=`  
  
-   Class member access `->`  
  
-   Subscripting `[]`  
  
-   Function call `()`  
  
 Possible C2801 causes:  
  
-   Overloaded operator is not a class, structure, or union member.  
  
-   Overloaded operator is declared `static`.  
  
-   The following sample generates C2801:  
  
```  
// C2801.cpp  
// compile with: /c  
operator[]();   // C2801 not a member  
class A {  
   static operator->();   // C2801 static  
   operator()();   // OK  
};  
```

