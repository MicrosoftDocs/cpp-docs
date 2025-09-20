---
title: "Linker Tools Error LNK1179"
description: "Learn more about: Linker Tools Error LNK1179"
ms.date: 11/04/2016
f1_keywords: ["LNK1179"]
helpviewer_keywords: ["LNK1179"]
---
# Linker Tools Error LNK1179

> invalid or corrupt file: duplicate COMDAT 'filename'

## Remarks

An object module contains two or more COMDATs with the same name.

This error can be caused by using [/H](../../build/reference/h-restrict-length-of-external-names.md), which limits the length of external names, and [/Gy](../../build/reference/gy-enable-function-level-linking.md), which packages functions in COMDATs.

## Example

In the following code, `function1` and `function2` are identical in the first eight characters. Compiling with **/Gy** and **/H8** produces a link error.

```cpp
void function1(void);
void function2(void);

int main() {
    function1();
    function2();
}

void function1(void) {}
void function2(void) {}
```
