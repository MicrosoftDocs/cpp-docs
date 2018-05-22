---
title: "Compiler Error C2109 | Microsoft Docs"
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
  - "C2109"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2109"
ms.assetid: 2d1ac79d-a985-4904-a38b-b270578d664d
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2109
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2109](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2109).  
  
  
subscript requires array or pointer type  
  
 The subscript was used on a variable that was not an array.  
  
 The following sample generates C2109:  
  
```  
// C2109.cpp  
int main() {  
   int a, b[10] = {0};  
   a[0] = 1;   // C2109  
   b[0] = 1;   // OK  
}  
```

