---
title: "Compiler Error C2371 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2371"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2371"
ms.assetid: d383993d-05ef-4e35-8129-3b58a6f7b7b7
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2371
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2371](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2371).  
  
  
identifier' : redefinition; different basic types  
  
 The identifier is already declared.  
  
 The following sample generates C2371:  
  
```  
// C2371.cpp  
int main() {  
   int i;  
   float i;   // C2371, redefinition  
   float f;   // OK  
}  
```

