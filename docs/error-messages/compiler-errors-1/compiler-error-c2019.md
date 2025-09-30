---
title: "Compiler Error C2019"
description: "Learn more about: Compiler Error C2019"
ms.date: 11/04/2016
f1_keywords: ["C2019"]
helpviewer_keywords: ["C2019"]
---
# Compiler Error C2019

> expected preprocessor directive, found 'character'

## Remarks

The character followed a `#` sign but it is not the first letter of a preprocessor directive.

## Example

The following example generates C2019:

```cpp
// C2019.cpp
#!define TRUE 1   // C2019
```

Possible resolution:

```cpp
// C2019b.cpp
// compile with: /c
#define TRUE 1
```
