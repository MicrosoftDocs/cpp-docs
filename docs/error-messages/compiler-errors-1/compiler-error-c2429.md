---
description: "Learn more about: Compiler Error C2429"
title: "Compiler Error C2429"
ms.date: "11/16/2017"
f1_keywords: ["C2429"]
helpviewer_keywords: ["C2429"]
ms.assetid: 57ff6df9-5cf1-49f3-8bd8-4e550dfd65a0
---
# Compiler Error C2429

> '*language feature*' requires compiler flag '*compiler option*'

The language feature requires a specific compiler option for support.

The error **C2429: language feature 'nested-namespace-definition' requires compiler flag '/std:c++17'** is generated if you try to define a *compound namespace*, a namespace that contains one or more scope-nested namespace names, starting in Visual Studio 2015 Update 5. (In Visual Studio 2017 version 15.3, the **/std:c++latest** switch is required.) Compound namespace definitions are not allowed in C++ prior to C++17. The compiler supports compound namespace definitions when the [/std:c++17](../../build/reference/std-specify-language-standard-version.md) compiler option is specified:

```cpp
// C2429a.cpp
namespace a::b { int i; } // C2429 starting in Visual Studio 2015 Update 3.
                          // Use /std:c++17 to fix, or do this:
// namespace a { namespace b { int i; }}

int main() {
   a::b::i = 2;
}
```
