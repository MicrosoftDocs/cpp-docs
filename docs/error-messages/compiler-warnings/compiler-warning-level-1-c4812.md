---
title: "Compiler Warning (level 1) C4812 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4812"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4812"]
ms.assetid: a7f5721f-2019-44de-ad62-ed30bac8b1f3
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4812
obsolete declaration style: please use 'new_syntax' instead  
  
 In the current release of Visual C++, the explicit constructor specialization is still supported, but it may not be supported in a future release.  
  
 The following sample generates C4812:  
  
```  
// C4812.cpp  
// compile with: /W1 /c  
template <class T>   
class MyClass;  
  
template<class T>  
class MyClass<T*> {  
   MyClass();  
};  
  
template<class T>  
MyClass<T*>::MyClass<T*>() {}   // C4812  
// try the following line instead  
// MyClass<T*>::MyClass() {}  
```