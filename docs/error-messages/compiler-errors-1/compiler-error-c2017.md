---
title: "Compiler Error C2017"
description: "Learn more about: Compiler Error C2017"
ms.date: 11/04/2016
f1_keywords: ["C2017"]
helpviewer_keywords: ["C2017"]
---
# Compiler Error C2017

> illegal escape sequence

## Remarks

An escape sequence, such as \t, appears outside of a character or string constant.

## Examples

The following example generates C2017:

```cpp
// C2017.cpp
int main() {
   char test1='a'\n;   // C2017
   char test2='a\n';   // ok
}
```

C2017 can occur when the stringize operator is used with strings that include escape sequences.

The following example generates C2017:

```cpp
// C2017b.cpp
#define TestDfn(x) AfxMessageBox(#x)
TestDfn(CString("\\") + CString(".h\"\n\n"));   // C2017
```
