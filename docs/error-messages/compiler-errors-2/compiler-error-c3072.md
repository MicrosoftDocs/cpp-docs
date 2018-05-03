---
title: "Compiler Error C3072 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3072"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3072"]
ms.assetid: cdd5cb6b-c478-4698-adfa-c40188d34a18
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3072
operator 'operator' cannot be applied to an instance of a ref class  
  
 use the unary '`operator` ' operator to convert an instance of a ref class to a handle type  
  
 A CLR type requires CLR operators, not native (or standard) operators.  For more information, see [Tracking Reference Operator](../../windows/tracking-reference-operator-cpp-component-extensions.md).  
  
## Example  
 The following sample generates C3072.  
  
```  
// C3072.cpp  
// compile with: /clr  
ref class R {};  
  
int main() {  
   R r1;  
   R^ r2 = &r1;   // C3072  
   R^ r3 = %r1;   // OK  
}  
```