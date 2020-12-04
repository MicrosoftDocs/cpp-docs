---
description: "Learn more about: Compiler Error C3171"
title: "Compiler Error C3171"
ms.date: "11/04/2016"
f1_keywords: ["C3171"]
helpviewer_keywords: ["C3171"]
ms.assetid: 1ce26997-7ef1-4c9f-84da-003ea1a4251e
---
# Compiler Error C3171

'module': cannot specify different module attributes in a project

[module](../../windows/attributes/module-cpp.md) attributes with different parameter lists were found in two of the files in a compilation. Only one unique `module` attribute can be specified per compilation.

Identical `module` attributes can be specified in more than one source code file.

For example, if the following `module` attributes were found:

```cpp
// C3171.cpp
[ module(name="MyModule", uuid="373a1a4e-469b-11d3-a6b0-00c04f79ae8f", version="1.0") ];
int main() {}
```

And then,

```cpp
// C3171b.cpp
// compile with: C3171.cpp
// C3171 expected
[ module(name="MyModule", uuid="373a1a4e-469b-11d3-a6b0-00c04f79ae8f", version="1.1") ];
```

the compiler would generate C3171 (note the different version values).
