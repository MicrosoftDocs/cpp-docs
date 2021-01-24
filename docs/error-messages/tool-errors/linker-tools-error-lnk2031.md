---
description: "Learn more about: Linker Tools Error LNK2031"
title: "Linker Tools Error LNK2031"
ms.date: "11/04/2016"
f1_keywords: ["LNK2031"]
helpviewer_keywords: ["LNK2031"]
ms.assetid: 18ed4b6e-3e75-443c-bbd8-2f6030dc89ee
---
# Linker Tools Error LNK2031

> unable to generate p/invoke for "*function_declaration*" *decorated_name*; calling convention missing in metadata

## Remarks

When attempting to import a native function into a pure image, remember that the implicit calling conventions differ between native and pure compilations. For more information about pure images, see [Pure and Verifiable Code (C++/CLI)](../../dotnet/pure-and-verifiable-code-cpp-cli.md).

The **/clr:pure** compiler option is deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017.

## Examples

This code sample generates a component with an exported, native, function whose calling convention is implicitly [__cdecl](../../cpp/cdecl.md).

```cpp
// LNK2031.cpp
// compile with: /LD
extern "C" {
   __declspec(dllexport) int func() { return 3; }
};
```

The following sample creates a pure client that consumes the native function. However, the calling convention under **/clr:pure** is [__clrcall](../../cpp/clrcall.md). The following sample generates LNK2031.

```cpp
// LNK2031_b.cpp
// compile with: /clr:pure LNK2031.lib
// LNK2031 expected
extern "C" int func();

int main() {
   return func();
}
```

The following sample shows how to consume the native function from a pure image. Note the explicit **`__cdecl`** calling convention specifier.

```cpp
// LNK2031_c.cpp
// compile with: /clr:pure LNK2031.lib
extern "C" int __cdecl func();

int main() {
   return func();
}
```
