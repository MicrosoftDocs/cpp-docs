---
title: "Compiler Warning (level 1) C4006 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4006"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4006"]
ms.assetid: f1a59819-0fd2-4361-8e3a-99e4b514b8e1
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4006
\#undef expected an identifier  
  
 The `#undef` directive did not specify an identifier to undefine. The directive is ignored. To resolve the warning, be sure to specify an identifier. The following sample generates C4006:  
  
```  
// C4006.cpp  
// compile with: /W1  
#undef   // C4006  
  
// try..  
// #undef TEST  
  
int main() {  
}  
```