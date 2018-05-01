---
title: "Compiler Warning (level 3) C4608 | Microsoft Docs"
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
  - "C4608"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4608"
ms.assetid: 8b8f5f28-8ce9-457e-9d3d-a8c0efce9b6a
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 3) C4608
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 3) C4608](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4608).  
  
  
union_member' has already been initialized by another union member in the initializer list, 'union_member'  
  
 Two members of the same union were initialized in an initialization list. You can only access one member of the union.  
  
 The following sample generates C4608:  
  
```  
// C4608.cpp  
// compile with: /W3 /c  
class X {  
public:  
   X(char c) : m_i( c + 1), m_c(c) {}   // C4608  
   // try the following line instead  
   // X(char c) : m_c(c) {}  
  
private:  
   union {  
      int m_i;  
      char m_c;  
   };  
};  
  
union Y {  
public:  
   Y(char * name) : m_number(0.3), m_string( name ) {} // C4608  
  
private:  
   double m_number;  
   char * m_string;  
};  
```

