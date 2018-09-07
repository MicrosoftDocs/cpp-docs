---
title: "Compiler Warning (level 1) C4667 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4667"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4667"]
ms.assetid: 5d2b7fe0-4f0e-4cd6-b432-ca02c3d194ab
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4667
'function' : no function template defined that matches forced instantiation  
  
 You cannot instantiate a function template that has not been declared.  
  
 The following sample will cause C4667:  
  
```  
// C4667a.cpp  
// compile with: /LD /W1  
template  
void max(const int &, const int &); // C4667 expected  
```  
  
 To avoid this warning, first declare the function template:  
  
```  
// C4667b.cpp  
// compile with: /LD  
// Declare the function template  
template<typename T>  
const T &max(const T &a, const T &b) {  
   return (a > b) ? a : b;  
}  
// Then forcibly instantiate it with a desired type ... i.e. 'int'  
//  
template  
const int &max(const int &, const int &);  
```