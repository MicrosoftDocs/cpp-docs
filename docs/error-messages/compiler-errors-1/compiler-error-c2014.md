---
title: "Compiler Error C2014"
description: "Learn more about: Compiler Error C2014"
ms.date: 11/04/2016
f1_keywords: ["C2014"]
helpviewer_keywords: ["C2014"]
---
# Compiler Error C2014

> preprocessor command must start as first nonwhite space

## Remarks

The `#` sign of a preprocessor directive must be the first character on a line that is not white space.

## Example

The following example generates C2014:

```cpp
// C2014.cpp
int k; #include <stdio.h>   // C2014
```

Possible resolution:

```cpp
// C2014b.cpp
// compile with: /c
int k;
#include <stdio.h>
```
