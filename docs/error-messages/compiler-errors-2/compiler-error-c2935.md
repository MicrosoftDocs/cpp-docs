---
title: "Compiler Error C2935"
description: "Learn more about: Compiler Error C2935"
ms.date: 06/01/2022
f1_keywords: ["C2935"]
helpviewer_keywords: ["C2935"]
---
# Compiler Error C2935

> '*class*' : type-class-id redefined as a global function

## Remarks

You can't use a generic or template class as a global function.

This error is obsolete in Visual Studio 2022 and later versions.

This error can be caused if braces are improperly matched.

## Examples

The following example generates C2935:

```cpp
// C2935.cpp
// compile with: /c
template<class T>
struct TC {};
void TC<int>() {}   // C2935

// OK
struct TC2 {};
void TC2() {}
```

C2935 can also occur when using generics:

```cpp
// C2935b.cpp
// compile with: /clr /c
generic<class T>
ref struct GC { };
void GC<int>() {}   // C2935
void GC() {}   // OK
```
