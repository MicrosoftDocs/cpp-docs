---
title: "Compiler Error C2627 | Microsoft Docs"
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
  - "C2627"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2627"
ms.assetid: 7fc6c5ac-c7c9-4f0b-ad52-f52252526458
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2627
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2627](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2627).  
  
  
function' : member function not allowed in anonymous union  
  
 An [anonymous union](../../misc/anonymous-unions.md) cannot have member functions.  
  
 The following sample generates C2627:  
  
```  
// C2627.cpp  
int main() {  
   union { void f(){} };   // C2627  
   union X { void f(){} };  
}  
```

