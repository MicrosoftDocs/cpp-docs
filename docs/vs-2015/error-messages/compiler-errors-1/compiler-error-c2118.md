---
title: "Compiler Error C2118 | Microsoft Docs"
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
  - "C2118"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2118"
ms.assetid: bf4315d0-f085-4323-b813-96ee61a13bde
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2118
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2118](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2118).  
  
  
negative subscript  
  
 The value defining the array size is larger than the maximum array size or smaller than zero.  
  
 The following sample generates C2118:  
  
```  
// C2118.cpp  
int main() {  
   int array1[-1];   // C2118  
   int array2[3];   // OK  
}  
```

