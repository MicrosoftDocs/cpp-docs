---
title: "Compiler Warning (level 1 and level 4) C4112"
description: "Learn more about: Compiler Warning (level 1 and level 4) C4112"
ms.date: 11/04/2016
f1_keywords: ["C4112"]
helpviewer_keywords: ["C4112"]
---
# Compiler Warning (level 1 and level 4) C4112

> `#line` requires an integer between 1 and '*line_count*'

## Remarks

The [#line](../../preprocessor/hash-line-directive-c-cpp.md) directive specifies an integer parameter that is outside the allowable range.

If the specified parameter is less than 1, the line counter is reset to 1. If the specified parameter is greater than *number*, which is the compiler-defined limit, the line counter is unchanged. This diagnostic is a level 1 warning under ANSI C compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)) and a level 4 warning with Microsoft extensions ([/Ze](../../build/reference/za-ze-disable-language-extensions.md)).

## Example

The following example generates C4112:

```cpp
// C4112.cpp
// compile with: /W4
#line 0   // C4112

int main() {
}
```
