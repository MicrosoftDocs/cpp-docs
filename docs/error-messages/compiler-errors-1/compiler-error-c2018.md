---
title: "Compiler Error C2018"
description: "Learn more about: Compiler Error C2018"
ms.date: 06/21/2025
f1_keywords: ["C2018"]
helpviewer_keywords: ["C2018"]
---
# Compiler Error C2018

> unknown character 'hexnumber'

## Remarks

The source file contains an unexpected ASCII character, which is identified by its hex number. To resolve the error, remove the character.

## Example

The following example generates C2018:

```cpp
// C2018.cpp
int main()
{
    @   // C2018
}
```
