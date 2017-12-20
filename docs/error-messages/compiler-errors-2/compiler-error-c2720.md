---
title: "Compiler Error C2720 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C2720"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2720"]
ms.assetid: 9ee3aab7-711b-4f5a-b2f1-cb62b130f1ce
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Compiler Error C2720  
  
> '*identifier*' : '*specifier*' storage-class specifier illegal on members  
  
The storage class cannot be used on class members outside the declaration. To fix this error, remove the unneeded [storage class](../../cpp/storage-classes-cpp.md) specifier from the definition of the member outside the class declaration.  
  
## Example  
  
The following sample generates C2720 and shows how to fix it:  
  
```cpp  
// C2720.cpp  
struct S {  
   static int i;  
};  
static S::i;   // C2720 - remove the unneeded 'static' to fix it  
```