---
description: "Learn more about: Compiler Warning (level 1, Error) C4003"
title: "Compiler Warning (level 1, Error) C4003"
ms.date: "11/04/2016"
f1_keywords: ["C4003"]
helpviewer_keywords: ["C4003"]
---
# Compiler Warning (level 1, Error) C4003

> not enough arguments for function-like macro invocation '*identifier*'

## Remarks

The number of formal parameters in the macro definition exceeds the number of actual parameters in the macro. Macro expansion substitutes empty text for the missing parameters.

## Example

The following sample generates C4003:

```cpp
// C4003.cpp
// compile with: /WX
#define test(a,b) (a+b)

int main()
{
   int a = 1;
   int b = 2;
   a = test(b);   // C4003
   // try..
   a = test(a,b);
}
```
