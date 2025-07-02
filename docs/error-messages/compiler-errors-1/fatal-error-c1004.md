---
title: "Fatal Error C1004"
description: "Learn more about: Fatal Error C1004"
ms.date: 11/04/2016
f1_keywords: ["C1004"]
helpviewer_keywords: ["C1004"]
---
# Fatal Error C1004

> unexpected end of file found

## Remarks

The compiler reached the end of a source file without resolving a construct. The code may be missing one of the following elements:

- A closing brace

- A closing parenthesis

- A closing comment marker (*/)

- A semicolon

To resolve this error, check for the following:

- The default disk drive has insufficient space for temporary files, which require about twice as much space as the source file.

- An `#if` directive that evaluates to false lacks a closing `#endif` directive.

- A source file does not end with a carriage return and line feed.

## Example

The following example generates C1004:

```cpp
// C1004.cpp
#if TEST
int main() {}
// C1004
```

Possible resolution:

```cpp
// C1004b.cpp
#if TEST
#endif

int main() {}
```
