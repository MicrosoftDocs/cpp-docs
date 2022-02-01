---
title: "/ZH (Hash algorithm for calculation of file checksum in debug info)"
description: "Use the /ZH compiler option to enable MD5, SHA-1, or SHA-256 source file checksums in debug info"
ms.date: 02/01/2022
f1_keywords: ["/ZH", "/ZH:MD5", "/ZH:SHA1", "/ZH:SHA_256"]
helpviewer_keywords: ["/ZH", "/ZH:MD5", "/ZH:SHA1", "/ZH:SHA_256", "/ZH compiler option", "/ZH:MD5 compiler option", "/ZH:SHA1 compiler option", "/ZH:SHA_256 compiler option", "Hash algorithm for file checksum in debug info"]
---
# `/ZH` (Hash algorithm for calculation of file checksum in debug info)

Specifies which cryptographic hash algorithm to use to generate a checksum of each source file.

## Syntax

> **`/ZH:MD5`**\
> **`/ZH:SHA1`**\
> **`/ZH:SHA_256`**

## Arguments

**`/ZH:MD5`**\
Use an MD5 hash for the checksum. This option is the default in Visual Studio 2019.

**`/ZH:SHA1`**\
Use an SHA-1 hash for the checksum.

**`/ZH:SHA_256`**\
Use an SHA-256 hash for the checksum. This option is the default in Visual Studio 2022 version 17.0 and later.

## Remarks

PDB files store a checksum for each source file, compiled into the object code in the associated executable. The checksum allows the debugger to verify that the source code it loads matches the executable. The compiler and debugger support MD5, SHA-1, and SHA-256 hash algorithms. By default, in Visual Studio 2019 the compiler uses an MD5 hash to generate the checksum. To specify this hash algorithm explicitly, use the **`/ZH:MD5`** option.

Because of a risk of collision problems in MD5 and SHA-1, Microsoft recommends you use the **`/ZH:SHA_256`** option. The SHA-256 hash might result in a small increase in compile times. The **`/ZH:SHA_256`** option is the default in Visual Studio 2022 version 17.0 and later.

When more than one **`/ZH`** option is specified, the last option is used.

The **`/ZH`** option is available in Visual Studio 2019 version 16.4 and later.

### To set this compiler option in the Visual Studio development environment

1. Open the **Property Pages** dialog box for the project. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Set the **Configuration** drop-down to **All Configurations**. Set the **Platform** drop-down to **All Platforms**.

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Modify the **Additional options** property to add a **`/ZH:MD5`**, **`/ZH:SHA1`**, or **`/ZH:SHA_256`** option, and then choose **OK**.

## See also

[Compiler options](compiler-options.md)\
[Source server](/windows/win32/debug/source-server-and-source-indexing)
