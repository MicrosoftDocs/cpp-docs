---
title: "Compiler Warning (level 1) C4716"
description: "Learn more about: Compiler Warning (level 1) C4716"
ms.date: 11/04/2016
f1_keywords: ["C4716"]
helpviewer_keywords: ["C4716"]
---
# Compiler Warning (level 1) C4716

> 'function' must return a value

## Remarks

The given function did not return a value.

Only functions with a return type of void can use the return command without an accompanying return value.

An undefined value will be returned when this function is called.

This warning is automatically promoted to an error. If you wish to modify this behavior, use [#pragma warning](../../preprocessor/warning.md).

## Example

The following example generates C4716:

```cpp
// C4716.cpp
// compile with: /c /W1
// C4716 expected
#pragma warning(default:4716)
int test() {
   // uncomment the following line to resolve
   // return 0;
}
```
