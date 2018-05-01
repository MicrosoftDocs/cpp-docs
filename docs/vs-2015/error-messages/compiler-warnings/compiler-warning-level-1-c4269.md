---
title: "Compiler Warning (level 1) C4269 | Microsoft Docs"
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
  - "C4269"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4269"
ms.assetid: 96c97bbc-068a-4b65-8cd8-4ed5dca04c15
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4269
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4269](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4269).  
  
  
identifier' : 'const' automatic data initialized with compiler generated default constructor produces unreliable results  
  
 A **const** automatic instance of a non-trivial class is initialized with a compiler-generated default constructor.  
  
## Example  
  
```  
// C4269.cpp  
// compile with: /c /LD /W1  
class X {  
public:  
   int m_data;  
};  
  
void g() {  
   const X x1;   // C4269  
};  
```  
  
 Since this instance of the class is generated on the stack, the initial value of `m_data` can be anything. Also, since it is a **const** instance, the value of `m_data` can never be changed.

