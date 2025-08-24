---
title: "Compiler Warning (level 1) C4010"
description: "Learn more about: Compiler Warning (level 1) C4010"
ms.date: 11/04/2016
f1_keywords: ["C4010"]
helpviewer_keywords: ["C4010"]
---
# Compiler Warning (level 1) C4010

> single-line comment contains line-continuation character

## Remarks

A single-line comment, which is introduced by //, contains a backslash (\\) that serves as a line-continuation character. The compiler considers the next line to be a continuation and treats it as a comment.

Some syntax-directed editors do not indicate the line following the continuation character as a comment. Ignore syntax coloring on any lines that cause this warning.

## Example

The following example generates C4010:

```cpp
// C4010.cpp
// compile with: /WX
int main() {
   // the next line is also a comment because of the backslash \
   int a = 3; // C4010
   a++;
}
```
