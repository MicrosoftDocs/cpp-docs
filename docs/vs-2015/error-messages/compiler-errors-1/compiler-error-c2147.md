---
title: "Compiler Error C2147 | Microsoft Docs"
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
  - "C2147"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2147"
ms.assetid: d1adb3bf-7ece-4815-922c-ad7492fb6670
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2147
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2147](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2147).  
  
  
syntax error : 'identifier' is a new keyword  
  
 An identifier was used that is now a reserved keyword in the language.  
  
 The following sample generates C2147:  
  
```  
// C2147.cpp  
// compile with: /clr  
int main() {  
   int gcnew = 0;   // C2147  
   int i = 0;   // OK  
}  
```

