---
title: "Compiler Error C3470 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3470"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3470"]
ms.assetid: 170c7a9d-214d-41b1-8f15-d4a4fc38aaa5
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3470
'type' : a class cannot have both an indexer (default indexed property) and an operator[]  
  
 A type cannot define both a default indexer and an operator[].  
  
## Example  
 The following sample generates C3470  
  
```  
// C3470.cpp  
// compile with: /clr  
using namespace System;  
  
ref class R {  
public:  
   property int default[int] {  
      int get(int i) {  
         return i+1;  
      }  
   }  
  
   int operator[](String^ s) { return Convert::ToInt32(s); }   // C3470  
};  
  
int main() {  
   R ^ r = gcnew R;  
   // return r[9] + r["32"] - 42;  
}  
```