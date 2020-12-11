---
description: "Learn more about: /BASE (Base Address)"
title: "/BASE (Base Address)"
ms.date: "09/05/2018"
f1_keywords: ["/base", "VC.Project.VCLinkerTool.BaseAddress"]
helpviewer_keywords: ["base addresses [C++]", "programs [C++], preventing relocation", "semicolon [C++], specifier", "-BASE linker option", "key address size", "environment variables [C++], LIB", "programs [C++], base address", "LIB environment variable", "BASE linker option", "DLLs [C++], linking", "/BASE linker option", "@ symbol for base address", "executable files [C++], base address", "at sign symbol for base address"]
ms.assetid: 00b9f6fe-0bd2-4772-a69c-7365eb199069
---
# /BASE (Base Address)

Specifies the base address for a program.

## Syntax

> **/BASE:**{*address*[**,**<em>size</em>] | **\@**<em>filename</em>**,**<em>key</em>}

## Remarks

> [!NOTE]
> For security reasons, Microsoft recommends you use the [/DYNAMICBASE](dynamicbase-use-address-space-layout-randomization.md) option instead of specifying base addresses for your executables. This generates an executable image that can be randomly rebased at load time by using the address space layout randomization (ASLR) feature of Windows. The /DYNAMICBASE option is on by default.

The /BASE option sets a base address for the program, overriding the default location for an .exe  or DLL file. The default base address for an .exe file is 0x400000 for 32-bit images or 0x140000000 for 64-bit images. For a DLL, the default base address is 0x10000000 for 32-bit images or 0x180000000 for 64-bit images. On operating systems that do not support address space layout randomization (ASLR), or when the /DYNAMICBASE:NO option was set, the operating system first attempts to load a program at its specified or default base address. If sufficient space is not available there, the system relocates the program. To prevent relocation, use the [/FIXED](fixed-fixed-base-address.md) option.

The linker issues an error if *address* is not a multiple of 64K. You can optionally specify the size of the program; the linker issues a warning if the program can't fit in the size you specified.

On the command line, another way to specify the base address is by using a base address response file. A base address response file is a text file that contains the base addresses and optional sizes of all the DLLs your program will use, and a unique text key for each base address. To specify a base address by using a response file, use an at sign (**\@**) followed by the name of the response file, *filename*, followed by a comma, then the *key* value for the base address to use in the file. The linker looks for *filename* in either the specified path, or if no path is specified, in the directories specified in the LIB environment variable. Each line in *filename* represents one DLL and has the following syntax:

> *key* *address* [*size*] **;** *comment*

The *key* is a string of alphanumeric characters and is not case sensitive. It is usually the name of a DLL, but it need not be. The *key* is followed by a base *address* in C-language, hexadecimal, or decimal notation and an optional maximum *size*. All three arguments are separated by spaces or tabs. The linker issues a warning if the specified *size* is less than the virtual address space required by the program. A *comment* is specified by a semicolon (**;**) and can be on the same or a separate line. The linker ignores all text from the semicolon to the end of the line. This example shows part of such a file:

```
main   0x00010000    0x08000000    ; for PROJECT.exe
one    0x28000000    0x00100000    ; for DLLONE.DLL
two    0x28100000    0x00300000    ; for DLLTWO.DLL
```

If the file that contains these lines is called DLLS.txt, the following example command applies this information:

```
link dlltwo.obj /dll /base:@dlls.txt,two
```

Another way to set the base address is by using the *BASE* argument in a [NAME](name-c-cpp.md) or [LIBRARY](library.md) statement. The /BASE and [/DLL](dll-build-a-dll.md) options together are equivalent to the **LIBRARY** statement.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Advanced** property page.

1. Modify the **Base Address** property.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.BaseAddress%2A>.

## See also

[MSVC linker reference](linking.md)<br/>
[MSVC Linker Options](linker-options.md)
