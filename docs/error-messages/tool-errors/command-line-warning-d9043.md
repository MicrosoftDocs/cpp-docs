---
title: "Command-Line Warning D9043"
description: "Learn more about: Command-Line Warning D9043"
ms.date: 11/04/2016
f1_keywords: ["D9043"]
helpviewer_keywords: ["D9043"]
---
# Command-Line Warning D9043

> invalid value 'warning_level' for 'compiler_option'; assuming '4999'; Code Analysis warnings are not associated with warning levels

## Example

The following example generates C9043.

```cpp
// D9043.cpp
// compile with: /analyze /w16001
// D9043 warning expected
int main() {}
```
