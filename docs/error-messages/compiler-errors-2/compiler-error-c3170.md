---
description: "Learn more about: Compiler Error C3170"
title: "Compiler Error C3170"
ms.date: "11/04/2016"
f1_keywords: ["C3170"]
helpviewer_keywords: ["C3170"]
ms.assetid: ca9a59d6-7df3-42f0-b028-c09d0af3ac2a
---
# Compiler Error C3170

cannot have different module identifiers in a project

[module](../../windows/attributes/module-cpp.md) attributes with different names were found in two of the files in a compilation. Only one unique `module` attribute can be specified per compilation.

Identical `module` attributes can be specified in more than one source code file.

For example, if the following module attributes were found:

```cpp
// C3170.cpp
[ module(name="MyModule", uuid="373a1a4e-469b-11d3-a6b0-00c04f79ae8f") ];
int main() {}
```

And then,

```cpp
// C3170b.cpp
// compile with: C3170.cpp
// C3170 expected
[ module(name="MyModule1", uuid="373a1a4e-469b-11d3-a6b0-00c04f79ae8f") ];
```

the compiler would generate C3170 (note the different names).
