---
title: "Linker Tools Error LNK2028"
description: "Learn more about: Linker Tools Error LNK2028"
ms.date: 11/04/2016
f1_keywords: ["LNK2028"]
helpviewer_keywords: ["LNK2028"]
---
# Linker Tools Error LNK2028

> "*exported_function*" (*decorated_name*) referenced in function "*function_containing_function_call*" (*decorated_name*)

## Remarks

When attempting to import a native function into a pure image, remember that the implicit calling conventions differ between native and pure compilations.

The **/clr:pure** compiler option is deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017.

## Examples

This code example generates a component with an exported, native, function whose calling convention is implicitly [__cdecl](../../cpp/cdecl.md).

```cpp
// LNK2028.cpp
// compile with: /LD
__declspec(dllexport) int func() {
   return 3;
}
```

The following example creates a pure client that consumes the native function. However, the calling convention under **/clr:pure** is [__clrcall](../../cpp/clrcall.md). The following example generates LNK2028.

```cpp
// LNK2028_b.cpp
// compile with: /clr:pure lnk2028.lib
// LNK2028 expected
int func();

int main() {
   return func();
}
```
