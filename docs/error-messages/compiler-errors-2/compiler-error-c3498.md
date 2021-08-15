---
description: "Learn more about: Compiler Error C3498"
title: "Compiler Error C3498"
ms.date: "11/04/2016"
f1_keywords: ["C3498"]
helpviewer_keywords: ["C3498"]
ms.assetid: 0a5a7817-0872-4119-83bf-980a19113374
---
# Compiler Error C3498

'var': you cannot capture a variable that has a managed or WinRTtype

You cannot capture a variable that has a managed type or a Windows Runtime type in a lambda.

### To correct this error

- Pass the managed or Windows Runtime variable to the parameter list of the lambda expression.

## Examples

The following example generates C3498 because a variable that has a managed type appears in the capture list of a lambda expression:

```cpp
// C3498a.cpp
// compile with: /clr
using namespace System;

int main()
{
   String ^ s = "Hello";
   [&s](String ^ r)
      { return String::Concat(s, r); } (", World!"); // C3498
}
```

The following example resolves C3498 by passing the managed variable `s` to the parameter list of the lambda expression:

```cpp
// C3498b.cpp
// compile with: /clr
using namespace System;

int main()
{
   String ^ s = "Hello";
   [](String ^ s, String ^ r)
      { return String::Concat(s, r); } (s, ", World!");
}
```

## See also

[Lambda Expressions](../../cpp/lambda-expressions-in-cpp.md)
