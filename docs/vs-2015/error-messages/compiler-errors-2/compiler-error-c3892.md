---
title: "Compiler Error C3892 | Microsoft Docs"
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
  - "C3892"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3892"
ms.assetid: 83fff42c-ea48-442f-bc2e-b33a6b99d890
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3892
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3892](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3892).  
  
  
var' : you cannot assign to a variable that is const  
  
 A const variable cannot be changed after it is declared and initialized.  
  
 The following sample generates C3892:  
  
```  
// C3892.cpp  
// compile with: /clr  
ref struct Y1 {  
   static const int staticConst = 9;  
};  
  
int main() {  
   Y1::staticConst = 0;   // C3892  
}  
```

