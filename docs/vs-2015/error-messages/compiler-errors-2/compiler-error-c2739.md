---
title: "Compiler Error C2739 | Microsoft Docs"
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
  - "C2739"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2739"
ms.assetid: 5b63e435-7631-43d7-805e-f2adefb7e517
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2739
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2739](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2739).  
  
  
number' : explicit managed or WinRT array dimensions must be between 1 and 32  
  
 An array dimension was not between 1 and 32.  
  
 The following sample generates C2739 and shows how to fix it:  
  
```  
// C2739.cpp  
// compile with: /clr  
int main() {  
   array<int, -1>^a;   // C2739  
   // try the following line instead  
   // array<int, 2>^a;  
}  
```

