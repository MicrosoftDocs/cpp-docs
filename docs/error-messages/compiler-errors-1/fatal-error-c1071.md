---
description: "Learn more about: Fatal Error C1071"
title: "Fatal Error C1071"
ms.date: "11/04/2016"
f1_keywords: ["C1071"]
helpviewer_keywords: ["C1071"]
ms.assetid: 489f1786-370e-4ecd-af67-538fe6e5bd4e
---
# Fatal Error C1071

unexpected end of file found in comment

The compiler reached the end of the file while scanning a comment.

### To fix by checking the following possible causes

1. Missing comment terminator (*/).

1. Missing newline character after a comment on the last line of a source file.

The following sample generates C1071:

```cpp
// C1071.cpp
int main() {
}

/* this comment is fine */
/* forgot the closing tag        // C1071
```
