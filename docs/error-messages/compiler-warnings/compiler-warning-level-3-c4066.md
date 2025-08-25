---
title: "Compiler Warning (level 3) C4066"
description: "Learn more about: Compiler Warning (level 3) C4066"
ms.date: 03/06/2024
f1_keywords: ["C4066"]
helpviewer_keywords: ["C4066"]
---
# Compiler Warning (level 3) C4066

> characters beyond first in wide-character constant ignored

## Remarks

The compiler processes only the first character of a wide-character constant.

## Example

```cpp
// C4066.cpp
// compile with: /W3
#include <iostream>

int main()
{
    wchar_t wc = L'AB';   // C4066

    std::wcout << wc;
}
```

```output
A
```
