---
title: "Compiler Error C3050"
description: "Learn more about: Compiler Error C3050"
ms.date: 11/04/2016
f1_keywords: ["C3050"]
helpviewer_keywords: ["C3050"]
---
# Compiler Error C3050

> 'type1' : a ref class cannot inherit from 'type1'

## Remarks

`System::ValueType` cannot be a base class for a reference type.

## Example

The following example generates C3050:

```cpp
// C3050.cpp
// compile with: /clr /LD
ref struct X : System::ValueType {};   // C3050
ref struct Y {};   // OK
```
