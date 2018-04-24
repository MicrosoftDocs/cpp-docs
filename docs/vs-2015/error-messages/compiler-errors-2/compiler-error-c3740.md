---
title: "Compiler Error C3740 | Microsoft Docs"
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
  - "C3740"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3740"
ms.assetid: edb17a90-2307-4df6-943d-580460d26d2b
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3740
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3740](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3740).  
  
  
templates cannot source or receive events  
  
 A templated class or struct cannot contain [events](../../cpp/event-handling.md).  
  
 The following sample generates C3740:  
  
```  
// C3740.cpp  
template <typename T>   // Delete the template specification  
struct E {  
   __event void f();   // C3740  
};  
  
int main() {  
}  
```

