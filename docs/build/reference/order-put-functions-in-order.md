---
description: "Learn more about: /ORDER (Put Functions in Order)"
title: "/ORDER (Put Functions in Order)"
ms.date: "09/05/2018"
f1_keywords: ["VC.Project.VCLinkerTool.FunctionOrder", "/order"]
helpviewer_keywords: ["ORDER linker option", "-ORDER linker option", "LINK tool [C++], program optimizing", "/ORDER linker option", "LINK tool [C++], swap tuning", "paging, optimizing"]
ms.assetid: ecf5eb3e-e404-4e86-9a91-4e5ec157261a
---
# /ORDER (Put Functions in Order)

Specify the link order for separately packaged (COMDAT) functions.

## Syntax

> **/ORDER:\@**<em>filename</em>

### Parameters

*filename*<br/>
A text file that specifies the link order for COMDAT functions.

## Remarks

The **/ORDER** compiler option allows you to optimize your program's paging behavior by grouping a function together with the functions it calls. You can also group frequently called functions together. These techniques, known as *swap tuning* or *paging optimization*, increase the probability that a called function is in memory when it is needed and does not have to be paged from disk.

When you compile your source code into an object file, you can tell the compiler to put each function into its own section, called a *COMDAT*, by using the [/Gy (Enable function-level linking)](gy-enable-function-level-linking.md) compiler option. The **/ORDER** linker option tells the linker to place COMDATs into the executable image in the order you specify.

To specify the COMDAT order, create a *response file*, a text file that lists each COMDAT by name, one per line, in the order you want them to be placed by the linker. Pass the name of this file as the *filename* parameter of the **/ORDER** option. For C++ functions, the name of a COMDAT is the decorated form of the function name. Use the undecorated name for C functions, `main`, and for C++ functions declared as `extern "C"`. Function names and decorated names are case sensitive. For more information on decorated names, see [Decorated Names](decorated-names.md).

To find the decorated names of your COMDATs, use the [DUMPBIN](dumpbin-reference.md) tool's [/SYMBOLS](symbols.md) option on the object file. The linker automatically prepends an underscore (**\_**) to function names in the response file unless the name starts with a question mark (**?**) or at sign (**\@**). For example, if a source file, example.cpp, contains functions `int cpp_func(int)`, `extern "C" int c_func(int)` and `int main(void)`, the command `DUMPBIN /SYMBOLS example.obj` lists these decorated names:

```Output
...
088 00000000 SECT1A notype ()    External     | ?cpp_func@@YAHH@Z (int __cdecl cpp_func(int))
089 00000000 SECT22 notype ()    External     | _c_func
08A 00000000 SECT24 notype ()    External     | _main
...
```

In this case, specify the names as `?cpp_func@@YAHH@Z`, `c_func`, and `main` in your response file.

If more than one **/ORDER** option appears in the linker options, the last one specified takes effect.

The **/ORDER** option disables incremental linking. You may see linker warning [LNK4075](../../error-messages/tool-errors/linker-tools-warning-lnk4075.md) when you specify this option if incremental linking is enabled, or if you have specified the [/ZI (Incremental PDB)](z7-zi-zi-debug-information-format.md) compiler option. To silence this warning, you can use the [/INCREMENTAL:NO](incremental-link-incrementally.md) linker option to turn off incremental linking, and use the [/Zi (Generate PDB)](z7-zi-zi-debug-information-format.md) compiler option to generate a PDB without incremental linking.

> [!NOTE]
> LINK cannot order static functions because static function names are not public symbol names. When **/ORDER** is specified, linker warning [LNK4037](../../error-messages/tool-errors/linker-tools-warning-lnk4037.md) is generated for each symbol in the order response file that is either static or not found.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Optimization** property page.

1. Modify the **Function Order** property to contain the name of your response file.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.FunctionOrder%2A>.

## See also

[MSVC linker reference](linking.md)<br/>
[MSVC Linker Options](linker-options.md)
