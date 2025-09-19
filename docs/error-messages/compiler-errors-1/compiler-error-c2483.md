---
title: "Compiler Error C2483"
description: "Learn more about: Compiler Error C2483"
ms.date: 09/15/2017
f1_keywords: ["C2483"]
helpviewer_keywords: ["C2483"]
---
# Compiler Error C2483

>'*identifier*' : object with constructor or destructor cannot be declared 'thread'

## Remarks

This error message is obsolete in Visual Studio 2015 and later versions. In previous versions, variables declared with the `thread` attribute cannot be initialized with a constructor or other expression that requires run-time evaluation. A static expression is required to initialize `thread` data.

## Example

The following example generates C2483 in Visual Studio 2013 and earlier versions.

```cpp
// C2483.cpp
// compile with: /c
__declspec(thread) struct A {
   A(){}
   ~A(){}
} aa;   // C2483 error

__declspec(thread) struct B {} b;   // OK
```

## See also

[thread](../../cpp/thread.md)
