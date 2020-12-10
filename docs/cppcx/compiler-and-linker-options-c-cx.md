---
description: "Learn more about: Compiler and Linker options (C++/CX)"
title: "Compiler and Linker options (C++/CX)"
ms.date: "01/22/2017"
ms.assetid: ecfadce8-3a3f-40cc-bb01-b4731f8d2fcb
---
# Compiler and Linker options (C++/CX)

An environment variable, C++/CX compiler options, and linker options support the building of apps for the Windows Runtime.

## Library path

The %LIBPATH% environment variable specifies the default path to search for .winmd files.

## Compiler options

|Option|Description|
|------------|-----------------|
|[/ZW](../build/reference/zw-windows-runtime-compilation.md)<br /><br /> /ZW:nostdlib|Enables Windows Runtime language extensions.<br /><br /> The `nostdlib` parameter prevents the compiler from using the standard, predefined search path to find assembly and .winmd files.<br /><br /> The **/ZW** compiler option implicitly specifies the following compiler options:<br /><br />- **/FI** vccorlib.h, which forces inclusion of the vccorlib.h header file that defines many types that are required by the compiler.<br />- [/FU](../build/reference/fu-name-forced-hash-using-file.md) Windows.winmd, which forces inclusion of the Windows.winmd metadata file that's provided by the operating system and defines many types in the Windows Runtime.<br />- **/FU** Platform.winmd, which forces inclusion of the Platform.winmd metadata file that's provided by the compiler and defines most types in the Platform family of namespaces.|
|[/AI](../build/reference/ai-specify-metadata-directories.md) *dir*|Adds a directory, which is specified by the *dir* parameter, to the search path that the compiler uses to find assembly and .winmd files.|
|**/FU**  *file*|Forces the inclusion of the specified module, or .winmd file. That is, you don't have to specify `#using`*file* in your source code. The compiler automatically forces the inclusion of its own Windows metadata file, Platform.winmd.|
|/D "WINAPI_FAMILY=2"|Creates a definition that enables the use of a subset of the Win32 SDK that's compatible with the Windows Runtime.|

## Linker options

|Option|Description|
|------------|-----------------|
|/APPCONTAINER[:NO]|Marks the executable as runnable in the appcontainer (only).|
|/WINMD[:{NO&#124;ONLY}]|Emits a .winmd file and an associated binary file. This option must be passed to the linker for a .winmd to be emitted.<br /><br /> **NO**—Doesn't emit a .winmd file, but does emit a binary file.<br /><br /> **ONLY**—Emits a .winmd file, but doesn't emit a binary file.|
|/WINMDFILE:*filename*|The name of the .winmd file to emit, instead of the default .winmd file name. If multiple file names are specified on the command line, the last name is used.|
|/WINMDDELAYSIGN[:NO]|Partially signs the .winmd file and places the public key in the binary.<br /><br /> **NO**—(Default) Doesn't sign the .winmd file.<br /><br /> /WINMDDELAYSIGN has no effect unless /WINMDKEYFILE or /WINMDKEYCONTAINER is also specified.|
|/WINMDKEYCONTAINER:*name*|Specifies a key container to sign an assembly. The *name* parameter corresponds to the key container that's used to sign the metadata file.|
|/WINMDKEYFILE:*filename*|Specifies a key or a key pair to sign the assembly. The *filename* parameter corresponds to the key that's used to sign the metadata file.|

### Remarks

When you use **/ZW**, the compiler automatically links to the DLL version of the C Runtime (CRT). Linking to the static library version is not allowed, and any use of CRT functions that are not allowed in a Universal Windows Platform app will cause a compile-time error.

## See also

[Building apps and libraries](../cppcx/building-apps-and-libraries-c-cx.md)
