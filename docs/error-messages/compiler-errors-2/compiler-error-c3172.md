---
description: "Learn more about: Compiler Error C3172"
title: "Compiler Error C3172"
ms.date: "11/04/2016"
f1_keywords: ["C3172"]
helpviewer_keywords: ["C3172"]
ms.assetid: 1834e2fd-6036-4c33-aff2-b51bc7c99441
---
# Compiler Error C3172

'module_name': cannot specify different idl_module attributes in a project

[idl_module](../../windows/attributes/idl-module.md) attributes with the same name but different `dllname` or `version` parameters were found in two of the files in a compilation. Only one unique `idl_module` attribute can be specified per compilation.

Identical `idl_module` attributes can be specified in more than one source code file.

For example, if the following `idl_module` attributes were found:

```cpp
// C3172.cpp
[module(name="MyMod")];
[ idl_module(name="x", dllname="file.dll", version="1.1") ];
int main() {}
```

And then,

```cpp
// C3172b.cpp
// compile with: C3172.cpp
// C3172 expected
[ idl_module(name="x", dllname="file.dll", version="1.0") ];
```

the compiler would generate C3172 (note the different version values).
