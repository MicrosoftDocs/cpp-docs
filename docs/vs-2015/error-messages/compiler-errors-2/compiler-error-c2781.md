---
title: "Compiler Error C2781 | Microsoft Docs"
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
  - "C2781"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2781"
ms.assetid: f29b9963-f55b-427c-8db6-50f37713df5a
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2781
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2781](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2781).  
  
  
declaration' : expects at least value1 argument - value2 provided  
  
 A function template with a variable parameter list has too few arguments.  
  
 The following sample generates C2781:  
  
```  
// C2781.cpp  
template<typename T>  
void f(T, T, ...){}  
  
int main() {  
   f(1);   // C2781  
  
   // try the following line instead  
   f(1,1);  
}  
```

