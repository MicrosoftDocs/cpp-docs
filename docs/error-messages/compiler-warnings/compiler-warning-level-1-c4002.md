---
title: "Compiler Warning (level 1, Error) C4002"
description: "Learn more about: Compiler Warning (level 1, Error) C4002"
ms.date: 11/04/2016
f1_keywords: ["C4002"]
helpviewer_keywords: ["C4002"]
---
# Compiler Warning (level 1, Error) C4002

> too many arguments for function-like macro invocation '*identifier*'

## Remarks

The number of actual parameters in the macro exceeds the number of formal parameters in the macro definition. The preprocessor collects the extra parameters but ignores them during macro expansion.

C4002 can occur when incorrectly using [variadic macros](../../preprocessor/variadic-macros.md).

## Examples

The following example generates C4002:

```cpp
// C4002.cpp
// compile with: /W1
#define test(a) (a)

int main() {
   int a = 1;
   int b = 2;
   a = test(a,b);   // C4002
   // try..
   a = test(a);
}
```

This error can also be generated as a result of compiler conformance work that was done for Visual Studio .NET 2003: extra commas in macro no longer accepted.

The compiler no longer accepts extra commas in a macro. For code to be valid in both the Visual Studio .NET 2003 and Visual Studio .NET versions of Visual C++, remove the extra commas.

```cpp
// C4002b.cpp
// compile with: /W1
#define F(x,y)
int main()
{
   F(2,,,,,,3,,,,,,)   // C4002
   // Try the following line instead:
   // F(2,3)
}
```
