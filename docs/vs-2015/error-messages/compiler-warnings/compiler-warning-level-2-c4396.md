---
title: "Compiler Warning (level 2) C4396 | Microsoft Docs"
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
  - "C4396"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4396"
ms.assetid: 7cd6b283-db17-4574-b299-03e0b913ad70
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 2) C4396
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 2) C4396](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-2-c4396).  
  
  
name" : the inline specifier cannot be used when a friend declaration refers to a specialization of a function template  
  
 A specialization of a function template cannot specify any of the [inline](../../misc/inline-inline-forceinline.md) specifiers. The compiler issues warning C4396 and ignores the inline specifier.  
  
### To correct this error  
  
-   Remove the `inline`, `__inline`, or `__forceinline` specifier from the friend function declaration.  
  
## Example  
 The following code example shows an invalid friend function declaration with an `inline` specifier.  
  
```  
// C4396.cpp  
// compile with: /W2 /c  
  
class X;   
template<class T> void Func(T t, int i);  
  
class X {  
    friend inline void Func<char>(char t, int i);  //C4396  
// try the following line instead  
//    friend void Func<char>(char t, int i);   
    int i;  
};  
```

