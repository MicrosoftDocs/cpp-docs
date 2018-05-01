---
title: "Compiler Warning (level 3) C4267 | Microsoft Docs"
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
  - "C4267"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4267"
ms.assetid: 2fa2f13f-fa4f-47bb-ad8f-6cb19cfc91e6
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 3) C4267
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 3) C4267](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4267).  
  
  
var' : conversion from 'size_t' to 'type', possible loss of data  
  
 The compiler detected a conversion from `size_t` to a smaller type.  
  
 To fix this warning, use `size_t` instead of `type`. Alternatively, use an integral type that is at least as large as `size_t`.  
  
## Example  
 The following example generates C4267.  
  
```  
// C4267.cpp  
// compile by using: cl /W4 C4267.cpp  
void Func1(short) {}  
void Func2(int) {}  
void Func3(long) {}  
void Func4(size_t) {}  
  
int main() {  
   size_t bufferSize = 10;  
   Func1(bufferSize);   // C4267 for all platforms  
   Func2(bufferSize);   // C4267 only for 64-bit platforms  
   Func3(bufferSize);   // C4267 only for 64-bit platforms  
   Func4(bufferSize);   // OK for all platforms  
}  
```

