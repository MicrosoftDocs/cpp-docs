---
title: "Compiler Error C3891 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C3891"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3891"]
ms.assetid: 6e1a9458-97f5-4580-bc0f-aa97a1bfd20d
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3891
'var' : a literal data member cannot be used as a l-value  
  
 A [literal](../../windows/literal-cpp-component-extensions.md) variable is const, and its value cannot be changed after it is initialized in the declaration.  
  
 The following sample generates C3891:  
  
```  
// C3891.cpp  
// compile with: /clr  
ref struct Y1 {  
   literal int staticConst = 9;  
};  
  
int main() {  
   Y1::staticConst = 0;   // C3891  
}  
```