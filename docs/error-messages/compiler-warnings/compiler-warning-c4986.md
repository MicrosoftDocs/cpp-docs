---
title: "Compiler Warning C4986 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4986"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4986"]
ms.assetid: a3a7b008-29dd-4203-85f3-7740ab6790bb
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning C4986
'function': exception specification does not match previous declaration  
  
 This warning can be generated when there is an exception specification in one declaration and not the other.  
  
 By default, C4986 is off. For more information, see [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).  
  
## Example  
 The following sample generates C4986.  
  
```cpp  
class X { };  
void f1() throw (X*);  
// ...  
void f1()  
{  
    // ...  
}    
```  
  
## Example  
 The following sample eliminates this warning.  
  
```cpp  
class X { };  
void f1() throw (X*);  
// ...  
void f1() throw (X*)  
{  
    // ...  
}    
```