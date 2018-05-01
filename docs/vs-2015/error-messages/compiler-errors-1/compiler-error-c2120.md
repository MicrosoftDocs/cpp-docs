---
title: "Compiler Error C2120 | Microsoft Docs"
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
  - "C2120"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2120"
ms.assetid: b0f3f66c-6cd2-4f48-9ea3-c270b53c2b8c
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2120
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2120](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2120).  
  
  
void' illegal with all types  
  
 The `void` type is used in a declaration with another type.  
  
 The following sample generates C2120:  
  
```  
// C2120.cpp  
int main() {  
   void int i;   // C2120  
   int j;   // OK  
}  
```

