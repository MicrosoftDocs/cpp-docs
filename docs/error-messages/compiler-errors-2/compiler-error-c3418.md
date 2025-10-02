---
title: "Compiler Error C3418"
description: "Learn more about: Compiler Error C3418"
ms.date: 11/04/2016
f1_keywords: ["C3418"]
helpviewer_keywords: ["C3418"]
---
# Compiler Error C3418

> access specifier 'specifier' is not supported

## Remarks

A CLR access specifier was specified incorrectly.  For more information, see Type visibility and Member visibility in [How to: Define and Consume Classes and Structs (C++/CLI)](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md).

## Example

The following example generates C3418.

```cpp
// C3418.cpp
// compile with: /clr /c
ref struct m {
internal public:   // C3418
   void test(){}
};

ref struct n {
internal:   // OK
   void test(){}
};
```
