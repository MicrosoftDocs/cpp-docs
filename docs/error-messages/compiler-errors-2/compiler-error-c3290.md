---
title: "Compiler Error C3290 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3290"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3290"]
ms.assetid: 0baf684b-1143-4953-ac99-a2fa267d8017
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3290
'type' : a trivial property cannot have reference type  
  
 A property was declared incorrectly. When you declare a trivial property, the compiler creates a variable that the property will update, and it is not possible to have a tracking reference variable in a class.  
  
 See [property](../../windows/property-cpp-component-extensions.md) and [Tracking Reference Operator](../../windows/tracking-reference-operator-cpp-component-extensions.md) for more information.  
  
## Example  
 The following sample generates C3290.  
  
```  
// C3290.cpp  
// compile with: /clr /c  
ref struct R {};  
  
ref struct X {  
   R^ mr;  
  
   property R % y;   // C3290  
   property R ^ x;   // OK  
  
   // OK  
   property R% prop {  
      R% get() {   
         return *mr;   
      }  
  
      void set(R%) {}  
   }  
};  
  
int main() {  
   X x;  
   R% xp = x.prop;  
}  
```