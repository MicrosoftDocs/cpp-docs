---
description: "Learn more about: Linker tools error LNK1107"
title: "Linker tools error LNK1107"
ms.date: 12/10/2021
f1_keywords: ["LNK1107"]
helpviewer_keywords: ["LNK1107"]
---
# Linker tools error LNK1107

> invalid or corrupt file: cannot read at location *address*

The tool couldn't read the file. The file may be corrupt, or have an unexpected file type.

## Remarks

LNK1107 can occur if a file passed to the linker or related tools is corrupt. To resolve this issue, rebuild the file.

LNK1107 can also occur if your build process puts an unexpected file type in the list of files passed to the tool. The linker and related tools expect to work on specific file types. For example, the linker can use object files, library files, compiled resources, and manifests to create an executable. It can't create an executable by using source files or DLLs. To resolve this issue, verify that your build process passes only the expected file types to the tool. For example, pass *`.obj`*, *`.lib`*, and *`.res`* files, not *`.cpp`*, *`.h`*, *`.dll`*, or *`.rc`* files.

LNK1107 can also occur if you attempt to pass a .NET executable module (A *`.dll`* or *`.netmodule`* file created with [`/clr:noAssembly`](../../build/reference/clr-common-language-runtime-compilation.md) or  [`/NOASSEMBLY`](../../build/reference/noassembly-create-a-msil-module.md)) to the linker. To resolve this issue, pass the *`.obj`* file instead.

## Example

Compile this sample by using **`cl /clr /LD LNK1107.cpp`**:

```cpp
// LNK1107.cpp
// compile with: /clr /LD
public ref class MyClass {
public:
   void Test(){}
};
```

If you then specify **`link LNK1107.dll`** on the command line, you'll get LNK1107.  To resolve the error, specify **`link LNK1107.obj`** instead.
