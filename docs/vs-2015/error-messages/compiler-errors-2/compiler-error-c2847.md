---
title: "Compiler Error C2847 | Microsoft Docs"
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
  - "C2847"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2847"
ms.assetid: 9ad9a0e0-8b16-49d9-a5be-f8eda2372aa9
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2847
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2847](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2847).  
  
  
cannot apply sizeof to managed or WinRT type 'class'  
  
 The [sizeof](../../cpp/sizeof-operator.md) operator gets the value of an object at compile time. The size of a managed or WinRT class, interface, or value type is dynamic and so cannot be known at compile time.  
  
 For example, the following sample generates C2847:  
  
```  
// C2847.cpp  
// compile with: /clr  
ref class A {};  
  
int main() {  
   A ^ xA = gcnew A;  
   sizeof(*xA);   // C2847 cannot use sizeof on managed object  
}  
```  
  
 The following sample generates C2847:  
  
```  
// C2847_b.cpp  
// compile with: /clr:oldSyntax  
__gc class A {};  
  
int main() {  
   A *xA = new A;  
   sizeof(*xA);   // C2847 cannot use sizeof on managed object  
}  
```

