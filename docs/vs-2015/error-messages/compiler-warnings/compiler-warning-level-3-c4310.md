---
title: "Compiler Warning (level 3) C4310 | Microsoft Docs"
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
  - "C4310"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4310"
ms.assetid: cba3eca1-f1ed-499c-9243-337446bdbdd8
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 3) C4310
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 3) C4310](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4310).  
  
  
cast truncates constant value  
  
 A constant value is cast to a smaller type. The compiler performs the cast, which truncates data. The following sample generates C4310:  
  
```  
// C4310.cpp  
// compile with: /W4  
int main() {  
   long int a;  
   a = (char) 128;   // C4310, use value 0-127 to resolve  
}  
```

