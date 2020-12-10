---
description: "Learn more about: Linker Tools Error LNK1561"
title: "Linker Tools Error LNK1561"
ms.date: "11/04/2016"
f1_keywords: ["LNK1561"]
helpviewer_keywords: ["LNK1561"]
ms.assetid: cb0b709b-7c9c-4496-8a4e-9e1e4aefe447
---
# Linker Tools Error LNK1561

entry point must be defined

The linker did not find an *entry point*, the initial function to call in your executable. By default, the linker looks for a `main` or `wmain` function for a console app, a `WinMain` or `wWinMain` function for a Windows app, or `DllMain` for a DLL that requires initialization. You can specify another function by using the [/ENTRY](../../build/reference/entry-entry-point-symbol.md) linker option.

This error can have several causes:

- You may not have included the file that defines your entry point in the list of files to link. Verify that the file that contains the entry point function is linked into your app.
- You may have defined the entry point using the wrong function signature; for example, you may have misspelled or used the wrong case for the function name, or specified the return type or parameter types incorrectly.
- You may not have specified the [/DLL](../../build/reference/dll-build-a-dll.md) option when building a DLL.
- You may have specified the name of the entry point function incorrectly when you used the [/ENTRY](../../build/reference/entry-entry-point-symbol.md) linker option.
- If you are using the [LIB](../../build/reference/lib-reference.md) tool to build a DLL, you may have specified a .def file. If so, remove the .def file from the build.

When building an app, the linker looks for an entry point function to call to start your code. This is the function that is called after the app is loaded and the runtime is initialized. You must supply an entry point function for an app, or your app can't run. An entry point is optional for a DLL. By default, the linker looks for an entry point function that has one of several specific names and signatures, such as `int main(int, char**)`. You can specify another function name as the entry point by using the /ENTRY linker option.

## Example

The following sample generates LNK1561:

```cpp
// LNK1561.cpp
// LNK1561 expected
int i;
// add a main function to resolve this error
```
