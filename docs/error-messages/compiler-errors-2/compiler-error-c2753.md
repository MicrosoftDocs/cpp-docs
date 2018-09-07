---
title: "Compiler Error C2753 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2753"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2753"]
ms.assetid: 92bfeeac-524a-4a8e-9a4f-fb8269055826
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2753
'*template*' : partial specialization cannot match argument list for primary template  
  
 If the template argument list matches the parameter list, the compiler treats it as the same template. Defining the same template twice is not allowed.  
  
## Example
 The following sample generates C2753 and shows a way to fix it:  
  
```cpp  
// C2753.cpp  
// compile with: cl /c C2753.cpp
template<class T>  
struct A {};  
  
template<class T>  
struct A<T> {};   // C2753  
// try the following line instead  
// struct A<int> {};  
  
template<class T, class U, class V, class W, class X>  
struct B {};  
```