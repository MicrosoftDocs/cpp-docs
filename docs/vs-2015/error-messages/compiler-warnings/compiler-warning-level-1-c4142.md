---
title: "Compiler Warning (level 1) C4142 | Microsoft Docs"
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
  - "C4142"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4142"
ms.assetid: 1fdfc3dc-60a2-4f00-b133-20e400f9b7a6
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4142
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4142](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4142).  
  
  
benign redefinition of type  
  
 A type is redefined in a manner that has no effect on the generated code.  
  
 To fix by checking the following possible causes:  
  
-   A member function of a derived class has a different return type from the corresponding member function of the base class.  
  
-   A type defined with the `typedef` command is redefined using different syntax.  
  
 The following sample generates C4142:  
  
```  
// C4142.c  
// compile with: /W1  
float X2;  
X2 = 2.0 + 1.0;   // C4142  
  
int main() {  
   float X2;  
   X2 = 2.0 + 1.0;   // OK  
}  
```

