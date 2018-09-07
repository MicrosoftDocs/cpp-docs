---
title: "Compiler Error C3194 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3194"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3194"]
ms.assetid: 49d3ffc6-eff6-4b46-865b-18811692a8bb
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3194
'member' : a value-type cannot have an assignment operator  
  
 Special member functions that require automatic invocation by the compiler, such as a copy constructor or copy assignment operator are not supported within a value class.  
  
## Example  
 The following sample generates C3194.  
  
```  
// C3194.cpp  
// compile with: /clr /c  
value struct MyStruct {  
   MyStruct& operator= (const MyStruct& i) { return *this; }   // C3194  
};  
  
ref struct MyStruct2 {  
   MyStruct2% operator= (const MyStruct2% i) { return *this; }   // OK  
};  
```