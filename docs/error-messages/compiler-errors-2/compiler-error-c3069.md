---
title: "Compiler Error C3069 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3069"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3069"]
ms.assetid: ca94291b-2bb4-4e3f-9acf-534234b83513
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3069
'operator': not allowed for enumeration type  
  
 An operator is not supported for CLR enumerations.  For more information, see [How to: Define and consume enums in C++/CLI](../../dotnet/how-to-define-and-consume-enums-in-cpp-cli.md).  
  
## Example  
 The following sample generates C3069:  
  
```  
// C3069.cpp  
// compile with: /clr  
enum struct E { e1 };  
enum F { f1 };  
  
int main() {  
   E e = E::e1;  
   bool tf;  
   tf = !e;   // C3069  
  
   // supported for native enums  
   F f = f1;  
   tf = !f;  
}  
```