---
title: "Compiler Warning (level 4) C4238 | Microsoft Docs"
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
  - "C4238"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4238"
ms.assetid: 5d4051d3-7b0f-43ea-8c8d-d194bfdceb71
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 4) C4238
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 4) C4238](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4238).  
  
  
nonstandard extension used : class rvalue used as lvalue  
  
 For compatibility with previous versions of Visual C++, Microsoft extensions (**/Ze**) allow you to use a class type as an rvalue in a context that implicitly or explicitly takes its address. In some cases, such as the example below, this can be dangerous.  
  
## Example  
  
```  
// C4238.cpp  
// compile with: /W4 /c  
struct C {  
   C() {}  
};  
  
C * pC = &C();   // C4238  
```  
  
 This usage causes an error under ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).

