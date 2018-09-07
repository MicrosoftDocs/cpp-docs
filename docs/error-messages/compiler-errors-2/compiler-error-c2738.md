---
title: "Compiler Error C2738 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2738"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2738"]
ms.assetid: 896b4640-1ee0-4cd8-9910-de3efa30006a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2738
'declaration' : is ambiguous or is not a member of 'type'  
  
 A function was declared incorrectly.  
  
 The following sample generates C2738:  
  
```  
// C2738.cpp  
struct A {  
   template <class T> operator T*();  
   // template <class T> operator T();  
};  
  
template <>  
A::operator int() {   // C2738  
  
// try the following line instead  
// A::operator int*() {  
  
// or use the commented member declaration  
  
   return 0;  
}  
```