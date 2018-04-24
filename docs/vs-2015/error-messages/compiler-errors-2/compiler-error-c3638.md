---
title: "Compiler Error C3638 | Microsoft Docs"
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
  - "C3638"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3638"
ms.assetid: 8d8bc5ca-75aa-480e-b6b6-3178fab51b1d
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3638
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3638](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3638).  
  
  
operator' : the standard boxing and unboxing conversion operators cannot be redefined  
  
 The compiler defines a conversion operator for each managed class to support implicit boxing. This operator cannot be redefined.  
  
 For more information, see [Implicit Boxing](../../windows/boxing-cpp-component-extensions.md).  
  
 The following sample generates C3638:  
  
```  
// C3638.cpp  
// compile with: /clr  
value struct V {  
   V(){}  
   static operator V^(V);   // C3638  
};  
  
int main() {  
   V myV;  
   V ^ pmyV = myV;   // operator supports implicit boxing  
}  
```

