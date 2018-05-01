---
title: "Compiler Error C2053 | Microsoft Docs"
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
  - "C2053"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2053"
ms.assetid: 13324c85-13a8-4996-bd42-a31bfe7ff80f
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2053
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2053](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2053).  
  
  
identifier' : wide string mismatch  
  
 The wide string is assigned to an incompatible type.  
  
 The following sample generates C2053:  
  
```  
// C2053.c  
int main() {  
   char array[] = L"Rika";   // C2053  
}  
```

