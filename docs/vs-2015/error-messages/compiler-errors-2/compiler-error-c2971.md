---
title: "Compiler Error C2971 | Microsoft Docs"
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
  - "C2971"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2971"
ms.assetid: fdb5467b-9a41-41ef-ac20-2e9428d5a4fc
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2971
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2971](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2971).  
  
  
class' : template parameter 'param' : 'arg' : a local variable cannot be used as a non-type argument  
  
 You cannot use the name or address of a local variable as a template argument.  
  
 The following sample generates C2971:  
  
```  
// C2971.cpp  
template <int *pi>   
class Y {};  
  
int global_var = 0;  
  
int main() {  
   int local_var = 0;  
   Y<&local_var> aY;   // C2971  
   // try the following line instead  
   // Y<&global_var> aY;  
}  
```

