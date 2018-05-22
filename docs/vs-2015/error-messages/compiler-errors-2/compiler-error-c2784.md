---
title: "Compiler Error C2784 | Microsoft Docs"
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
  - "C2784"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2784"
ms.assetid: 3d761fe2-881c-48bd-afae-e2e714e20473
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2784
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2784](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2784).  
  
  
declaration' : could not deduce template argument for 'type' from 'type'  
  
 The compiler cannot determine a template argument from the supplied function arguments.  
  
 The following sample generates C2784 and shows how to fix it:  
  
```  
// C2784.cpp  
template<class T> class X {};  
template<class T> void f(X<T>) {}  
  
int main() {  
   X<int> x;  
   f(1);   // C2784  
  
   // To fix it, try the following line instead  
   f(x);  
}  
```

