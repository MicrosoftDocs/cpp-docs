---
description: "Learn more about: Compiler Error C2011"
title: "Compiler Error C2011"
ms.date: "11/04/2016"
f1_keywords: ["C2011"]
helpviewer_keywords: ["C2011"]
ms.assetid: 992c9d51-e850-4d53-b86b-02e73b38249c
---
# Compiler Error C2011

'identifier' : 'type' type redefinition

The identifier was already defined as `type`. Check for redefinitions of the identifier.

You may also get C2011 if you import a header file or type library more than once into the same file. To prevent multiple inclusions of the types defined in a header file, use include guards or a `#pragma`[once](../../preprocessor/once.md) directive in the header file.

If you need to find the initial declaration of the redefined type, you can use the [/P](../../build/reference/p-preprocess-to-a-file.md) compiler flag to generate the preprocessed output passed to the compiler. You can use text search tools to find instances of the redefined identifier in the output file.

The following sample generates C2011 and shows one way to fix it:

```cpp
// C2011.cpp
// compile with: /c
struct S;
union S;   // C2011
union S2;   // OK
```
