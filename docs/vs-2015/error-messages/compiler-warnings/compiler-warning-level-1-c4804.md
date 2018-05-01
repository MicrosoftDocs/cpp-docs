---
title: "Compiler Warning (level 1) C4804 | Microsoft Docs"
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
  - "C4804"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4804"
ms.assetid: 069e8f44-3ef6-43bb-8524-4116fc6eea83
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4804
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4804](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4804).  
  
  
operation' : unsafe use of type 'bool' in operation  
  
 This warning is for when you used a `bool` variable or value in an unexpected way. For example, C4804 is generated if you use operators such as the negative unary operator (**-**) or the complement operator (`~`). The compiler evaluates the expression.  
  
## Example  
 The following sample generates C4804:  
  
```  
// C4804.cpp  
// compile with: /W1  
  
int main()  
{  
   bool i = true;  
   if (-i)   // C4804, remove the '-' to resolve  
   {  
      i = false;  
   }  
}  
```

