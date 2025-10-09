---
title: "Compiler Error C3838"
description: "Learn more about: Compiler Error C3838"
ms.date: 11/04/2016
f1_keywords: ["C3838"]
helpviewer_keywords: ["C3838"]
---
# Compiler Error C3838

> cannot explicitly inherit from 'type'

## Remarks

The specified `type` cannot act as a base class in any class.

## Example

The following example generates C3838:

```cpp
// C3838a.cpp
// compile with: /clr /c
public ref class B : public System::Enum {};   // C3838
```
