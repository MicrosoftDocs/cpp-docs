---
description: "Learn more about: Choosing the Format of .netmodule Input Files"
title: "Choosing the Format of .netmodule Input Files"
ms.date: "11/04/2016"
---
# Choosing the format of .netmodule input files

You can use an MSIL `.obj` file (compiled with [`/clr`](clr-common-language-runtime-compilation.md)) as a `.netmodule` file. `.obj` files contain metadata and native symbols. `.netmodules` only contain metadata.

Pass an MSIL `.obj` file to any other Visual Studio compiler with the `/addmodule` compiler option. Be aware that the `.obj` file becomes part of the resulting assembly and must be shipped with the assembly. For example, Visual C# and Visual Basic have the `/addmodule` compiler option.

> [!NOTE]
> In most cases, you need to pass to the linker the `.obj` file from the compilation that created the .net module. Passing a `.dll` or `.netmodule` MSIL module file to the linker might result in LNK1107.

`.obj` files, along with their associated `.h` files, which you reference via #include in source, allow C++ applications to consume the native types in the module. In a `.netmodule` file, only the managed types can be consumed by a C++ application. If you attempt to pass a `.obj` file to #using, information about native types isn't available. Instead, #include the `.obj` file's `.h` file.

Other Visual Studio compilers can only consume managed types from a module.

Use the following guidance to determine whether you need to use a `.netmodule` or a `.obj` file as module input to the MSVC linker:

- If you're building with a Visual Studio compiler other than Visual C++, produce a `.netmodule` and use the `.netmodule` as input to the linker.

- If you're using the MSVC compiler to produce modules and if the modules will be used to build something other than a library, use the `.obj` files produced by the compiler as module input to the linker. Don't use the `.netmodule` file as input.

- If your modules will be used to build a native (not a managed) library, use `.obj` files as module input to the linker and generate a `.lib` library file.

- If your modules will be used to build a managed library, and if all module input to the linker is verifiable (produced with `/clr:safe`), use `.obj` files as module input to the linker and generate a `.dll` (assembly) or `.netmodule` (module) library file.

- If your modules will be used to build a managed library, and if one or more modules input to the linker are produced with just `/clr`, use `.obj` files as module input to the linker and generate a `.dll` (assembly). If you want to expose managed types from the library and if you also want C++ applications to consume the native types in the library, your library consists of the `.obj` files for the libraries component modules. You also want to ship the `.h` files for each module, so they can be referenced with #include from source code.

## See also

[.netmodule Files as Linker Input](netmodule-files-as-linker-input.md)
