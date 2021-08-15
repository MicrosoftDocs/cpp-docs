---
description: "Learn more about: Linker Tools Warning LNK4227"
title: "Linker Tools Warning LNK4227"
ms.date: "11/04/2016"
f1_keywords: ["LNK4227"]
helpviewer_keywords: ["LNK4227"]
ms.assetid: 941a0414-9964-4e02-8487-f9daa42ef7f9
---
# Linker Tools Warning LNK4227

> metadata operation warning (*HRESULT*) : *warning_message*

The linker detected metadata differences when merging:

- One or more referenced assemblies with the assembly currently being built.

- One or more source code files in a compilation.

For example, LNK4227 may be caused if you have two global functions with the same name but parameter information declared differently (that is, declarations are not consistent in all compilands). Use ildasm.exe /TEXT /METADATA *object_file* on each .obj file to see how the types differ.

LNK4227 is also used to report problems that originate with another tool. Search for the warning message for more information.

The metadata problems must be fixed to resolve the warning.

## Examples

LNK4227 is generated when a referenced assembly was signed differently than the assembly that references it.

The following sample generates LNK4227:

```cpp
// LNK4227.cpp
// compile with: /clr
using namespace System::Reflection;

[assembly:AssemblyDelaySignAttribute(false)];

int main() {}
```

and then,

```cpp
// LNK4227b.cpp
// compile with: /clr LNK4227.cpp /FeLNK4227b.exe
using namespace System::Reflection;
using namespace System::Runtime::CompilerServices;

[assembly:AssemblyDelaySignAttribute(true)];
// Try the following line instead
// [assembly:AssemblyDelaySignAttribute(false)];

ref class MyClass
{
};
```

LNK4227 can also be generated when version numbers in the wrong format are passed to assembly attributes.  The '*' notation is specific to the `AssemblyVersionAttribute`.  To resolve this warning, use only numbers in the version attributes other than `AssemblyVersionAttribute`.

The following sample generates LNK4227:

```cpp
// LNK4227e.cpp
// compile with: /clr /LD /W1
using namespace System::Reflection;
[assembly:AssemblyVersionAttribute("2.3.*")];   // OK
[assembly:AssemblyFileVersionAttribute("2.3.*")];   // LNK4227
// try the following line instead
// [assembly:AssemblyFileVersionAttribute("2.3")];
```
