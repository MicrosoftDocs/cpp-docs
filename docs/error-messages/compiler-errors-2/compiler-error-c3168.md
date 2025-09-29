---
title: "Compiler Error C3168"
description: "Learn more about: Compiler Error C3168"
ms.date: 11/04/2016
f1_keywords: ["C3168"]
helpviewer_keywords: ["C3168"]
---
# Compiler Error C3168

> 'type' : illegal underlying type for enum

## Remarks

The underlying type you specified for the **`enum`** type was not valid. The underlying type must be an integral C++ type or a corresponding CLR type.

## Example

The following example generates C3168:

```cpp
// C3168.cpp
// compile with: /clr /c
ref class G{};

enum class E : G { e };   // C3168
enum class F { f };   // OK
```
