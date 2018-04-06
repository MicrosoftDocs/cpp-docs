---
title: "Compiler Warning (level 1) C4142 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C4142"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4142"]
ms.assetid: 1fdfc3dc-60a2-4f00-b133-20e400f9b7a6
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4142
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