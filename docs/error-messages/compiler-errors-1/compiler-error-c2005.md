---
title: "Compiler Error C2005"
description: "Learn more about: Compiler Error C2005"
ms.date: 11/04/2016
f1_keywords: ["C2005"]
helpviewer_keywords: ["C2005"]
---
# Compiler Error C2005

> #line expected a line number, found 'token'

## Remarks

The `#line` directive must be followed by a line number.

## Example

The following example generates C2005:

```cpp
// C2005.cpp
int main() {
   int i = 0;
   #line i   // C2005
}
```

Possible resolution:

```cpp
// C2005b.cpp
int main() {
   int i = 0;
   #line 0
}
```
