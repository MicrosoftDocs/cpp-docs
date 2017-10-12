---
title: "Compiler Error C2483 | Microsoft Docs"
ms.custom: ""
ms.date: "09/15/2017"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C2483"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2483"]
ms.assetid: 5762b325-914b-442d-a604-e4617ba04038
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2483

>'*identifier*' : object with constructor or destructor cannot be declared 'thread'

This error message is obsolete in Visual Studio 2015 and later versions. In previous versions, variables declared with the `thread` attribute cannot be initialized with a constructor or other expression that requires run-time evaluation. A static expression is required to initialize `thread` data.

## Example

The following sample generates C2483 in Visual Studio 2013 and earlier versions.

```cpp
// C2483.cpp
// compile with: /c
__declspec(thread) struct A {
   A(){}
   ~A(){}
} aa;   // C2483 error  

__declspec(thread) struct B {} b;   // OK
```

## See Also

[thread](../../cpp/thread.md)