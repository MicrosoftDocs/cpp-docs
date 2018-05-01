---
title: "Compiler Warning (level 4) C4268 | Microsoft Docs"
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
  - "C4268"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4268"
ms.assetid: d0511e80-904f-4ee1-b4d7-39b5c0bd8234
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 4) C4268
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 4) C4268](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4268).  
  
  
identifier' : 'const' static/global data initialized with compiler generated default constructor fills the object with zeros  
  
 A **const** global or static instance of a non-trivial class is initialized with a compiler-generated default constructor.  
  
## Example  
  
```  
// C4268.cpp  
// compile with: /c /LD /W4  
class X {  
public:  
   int m_data;  
};  
  
const X x1;   // C4268  
```  
  
 As this instance of the class is **const**, the value of `m_data` cannot be changed.

