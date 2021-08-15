---
description: "Learn more about: Compiler Error C3537"
title: "Compiler Error C3537"
ms.date: "11/04/2016"
f1_keywords: ["C3537"]
helpviewer_keywords: ["C3537"]
ms.assetid: f537ebd1-4fb0-4e09-a453-4f38db2c6881
---
# Compiler Error C3537

'type': you cannot cast to a type that contains 'auto'

You cannot cast a variable to the indicated type because the type contains the **`auto`** keyword and the default [/Zc:auto](../../build/reference/zc-auto-deduce-variable-type.md) compiler option is in effect.

## Example

The following code yields C3537 because the variables are cast to a type that contains the **`auto`** keyword.

```cpp
// C3537.cpp
// Compile with /Zc:auto
int main()
{
   int value = 123;
   auto(value);                        // C3537
   (auto)value;                        // C3537
   auto x1 = auto(value);              // C3537
   auto x2 = (auto)value;              // C3537
   auto x3 = static_cast<auto>(value); // C3537
   return 0;
}
```

## See also

[auto Keyword](../../cpp/auto-cpp.md)
