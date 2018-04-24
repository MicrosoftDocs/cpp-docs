---
title: "Compiler Warning (level 1) C4036 | Microsoft Docs"
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
  - "C4036"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4036"
ms.assetid: f0b15359-4d62-48ec-8cb1-a7b36587a47f
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4036
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4036](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4036).  
  
  
unnamed 'type' as actual parameter  
  
 No type name is given for a structure, union, enumeration, or class used as an actual parameter. If you are using [/Zg](../../build/reference/zg-generate-function-prototypes.md) to generate function prototypes, the compiler issues this warning and comments out the formal parameter in the generated prototype.  
  
 Specify a type name to resolve this warning.  
  
## Example  
 The following sample generates C4036.  
  
```  
// C4036.c  
// compile with: /Zg /W1  
// D9035 expected  
typedef struct { int i; } T;  
void f(T* t) {}   // C4036  
  
// OK  
typedef struct MyStruct { int i; } T2;  
void f2(T2 * t) {}  
```

