---
title: "Compiler Error C2084 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2084"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2084"]
ms.assetid: 990b107f-3721-4851-ae8b-4b69a8c149ed
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2084
function '*function*' already has a body  
  
 The function has already been defined.  
  
 In versions of Visual C++ before Visual Studio 2002,  
  
-   The compiler would accept multiple template specializations that resolved to the same actual type, although the additional definitions would never be available. The compiler now detects these multiple definitions.  
  
-   `__int32` and `int` were treated as separate types. The compiler now treats `__int32` as a synonym for `int`. This means that the compiler detects multiple definitions if a function is overloaded on both `__int32` and `int` and gives an error.  
  
## Example  
 The following sample generates C2084:  
  
```cpp  
// C2084.cpp  
void Func(int);  
void Func(int) {}   // define function  
void Func(int) {}   // C2084 second definition  
```  
  
To correct this error, remove the duplicate definition:  
  
```  
// C2084b.cpp  
// compile with: /c  
void Func(int);  
void Func(int) {}  
```