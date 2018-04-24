---
title: "Compiler Error C3071 | Microsoft Docs"
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
  - "C3071"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3071"
ms.assetid: 69879e66-a60e-4058-9bbd-d5c5e2d8ee37
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3071
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3071](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3071).  
  
  
operator 'operator' can only be applied to an instance of a ref class or a value-type  
  
 A CLR operator cannot be used on a native type. The operator can be used on a ref class or a ref struct (a value type) but not a native type such as int or an alias for a native type such as System::Int32. These types can't be boxed from C++ code in a way that refers to the native variable, so the operator cannot be used.  
  
 For more information, see [Tracking Reference Operator](../../windows/tracking-reference-operator-cpp-component-extensions.md).  
  
## Example  
 The following sample generates C3071.  
  
```  
// C3071.cpp  
// compile with: /clr  
class N {};  
ref struct R {};  
  
int main() {  
   N n;  
   %n;   // C3071  
  
   R r;  
   R ^ r2 = %r;   // OK  
}  
```

