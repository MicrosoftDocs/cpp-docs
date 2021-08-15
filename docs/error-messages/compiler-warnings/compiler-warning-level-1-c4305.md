---
description: "Learn more about: Compiler Warning (level 1) C4305"
title: "Compiler Warning (level 1) C4305"
ms.date: "01/17/2018"
f1_keywords: ["C4305"]
helpviewer_keywords: ["C4305"]
---
# Compiler Warning (level 1) C4305

> '*context*' : truncation from '*type1*' to '*type2*'

## Remarks

This warning is issued when a value is converted to a smaller type in an initialization or as a constructor argument, resulting in a loss of information.

## Example

This sample shows two ways you might see this warning:

```cpp
// C4305.cpp
// Compile by using: cl /EHsc /W4 C4305.cpp

struct item
{
    item(float) {}
};

int main()
{
    float f = 2.71828;          // C4305 'initializing'
    item i(3.14159);            // C4305 'argument'
    return static_cast<int>(f);
}
```

To fix this issue, initialize by using a value of the correct type, or use an explicit cast to the correct type. For example, use a **`float`** literal such as 2.71828f instead of a **`double`** (the default type for floating-point literals) to initialize a **`float`** variable, or to pass to a constructor that takes a **`float`** argument.
