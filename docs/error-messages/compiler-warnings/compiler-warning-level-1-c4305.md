---
title: "Compiler Warning (level 1) C4305 | Microsoft Docs"
ms.custom: ""
ms.date: "1/17/2018"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4305"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4305"]
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
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

To fix this issue, initialize by using a value of the correct type, or use an explicit cast to the correct type. For example, use a **float** literal such as 2.71828f instead of a **double** (the default type for floating-point literals) to initialize a **float** variable, or to pass to a constructor that takes a **float** argument.
