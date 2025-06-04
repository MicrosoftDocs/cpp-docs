---
title: "Compiler Error C2601"
description: "Learn more about: Compiler Error C2601"
ms.date: 06/04/2025
f1_keywords: ["C2601"]
helpviewer_keywords: ["C2601"]
---
# Compiler Error C2601

> '*function*': local function definitions are illegal

## Remarks

Code tries to define a function within a function.

Or, there may be an extra/missing brace before the location of the C2601 error.

## Examples

## Define function within a function

[Lambda Expressions](../../cpp/lambda-expressions-in-cpp.md) may be used to emulate the behavior of local functions:

```cpp
// C2601a.cpp
int main()
{
    int increment(int value)   // C2601
    {
        return value + 1;
    }

    // Try the following line instead:
    // auto increment = [](int value) { return value + 1; };

    int two = increment(1);
}
```

## Missing closing brace

If a preceding function is missing a closing brace, the subsequent function is taken to be a local function:

```cpp
// C2601b.cpp
void func()
{
// missing '}' brace here

int main() {}   // C2601
```
