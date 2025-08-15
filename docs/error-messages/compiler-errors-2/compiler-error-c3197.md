---
title: "Compiler Error C3197"
description: "Learn more about: Compiler Error C3197"
ms.date: 11/04/2016
f1_keywords: ["C3197"]
helpviewer_keywords: ["C3197"]
---
# Compiler Error C3197

> 'keyword' : can only be used in definitions

## Remarks

A keyword was used in a declaration but is only valid in a definition.

## Example

The following example generates C3197:

```cpp
// C3197.cpp
// compile with: /clr /c
ref struct R abstract;   // C3197
ref struct R abstract {};   // OK

public ref class MyObject;   // C3197
ref class MyObject;   // OK
public ref class MyObject {};   // OK
```
