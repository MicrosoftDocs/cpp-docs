---
title: "/ZH (Hash algorithm for calculation of file checksum in debug info)"
description: "Use the /ZH compiler option to enable source file checksums in debug info"
ms.date: 05/25/2026
f1_keywords: ["/ZH", "/ZH:MD5", "/ZH:SHA1", "/ZH:SHA_256", "/ZH:SHA384", "/ZH:SHA512"]
helpviewer_keywords: ["/ZH", "/ZH:MD5", "/ZH:SHA1", "/ZH:SHA_256", "/ZH:SHA384", "/ZH:SHA512", "/ZH compiler option", "/ZH:MD5 compiler option", "/ZH:SHA1 compiler option", "/ZH:SHA_256 compiler option", "/ZH:SHA384 compiler option", "/ZH:SHA512 compiler option", "Hash algorithm for file checksum in debug info"]
---
# `/ZH` (Hash algorithm for calculation of file checksum in debug info)

Specifies which cryptographic hash algorithm to use to generate a checksum of each source file.

> [!NOTE]
> The **`/ZH`** option is available in Visual Studio 2019 version 16.4 and later.

## Syntax

::: moniker range="<=msvc-170"

> **`/ZH:MD5`**\
> **`/ZH:SHA1`**\
> **`/ZH:SHA_256`**

::: moniker-end

::: moniker range=">=msvc-180"

> **`/ZH:MD5`**\
> **`/ZH:SHA1`**\
> **`/ZH:SHA_256`**\
> **`/ZH:SHA384`**\
> **`/ZH:SHA512`**

::: moniker-end

## Arguments

**`/ZH:MD5`**\
Use an MD5 hash for the checksum. This option is the default in Visual Studio 2019.

**`/ZH:SHA1`**\
Use an SHA-1 hash for the checksum.

**`/ZH:SHA_256`**\
Use an SHA-256 hash for the checksum. This option is the default in Visual Studio 2022 version 17.0 and later.

::: moniker range=">=msvc-180"

**`/ZH:SHA384`**\
Use an SHA-384 hash for the checksum.

**`/ZH:SHA512`**\
Use an SHA-512 hash for the checksum.

::: moniker-end

## Remarks

::: moniker range="<=msvc-170"

PDB files store a checksum for each source file, compiled into the object code in the associated executable. The checksum allows the debugger to verify that the source code it loads matches the executable. The compiler and debugger support MD5, SHA-1, and SHA-256 hash algorithms.
Because of a risk of collision problems in MD5 and SHA-1, use the **`/ZH:SHA_256`** option or stronger.

::: moniker-end

::: moniker range=">=msvc-180"

PDB files store a checksum for each source file, compiled into the object code in the associated executable. The checksum allows the debugger to verify that the source code it loads matches the executable. The compiler and debugger support MD5, SHA-1, SHA-256, SHA-384, and SHA-512 hash algorithms.
Because of a risk of collision problems in MD5 and SHA-1, use the **`/ZH:SHA_256`** option or a stronger algorithm. SHA-384 and SHA-512 provide stronger checksums, but they can increase compile time.

> [!NOTE]
> The **`/ZH:SHA384`** and **`/ZH:SHA512`** options aren't supported for IFC (module interface) files. If you compile modules with one of these options, the compiler emits [fatal error C1029](../../error-messages/compiler-errors-1/fatal-error-c1029.md). Use **`/ZH:SHA_256`** or a smaller hash algorithm when you compile C++ modules.

::: moniker-end

When more than one **`/ZH`** option is specified, the last option is used.

### To set this compiler option in the Visual Studio development environment

1. Open the **Property Pages** dialog box for the project. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Set the **Configuration** drop-down to **All Configurations**. Set the **Platform** drop-down to **All Platforms**.

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

::: moniker range=">=msvc-180"

1. Modify the **Additional options** property to add a **`/ZH:MD5`**, **`/ZH:SHA1`**, **`/ZH:SHA_256`**, **`/ZH:SHA384`**, or **`/ZH:SHA512`** option, and then choose **OK**.

::: moniker-end

::: moniker range=">=msvc-160 <=msvc-170"

1. Modify the **Additional options** property to add a **`/ZH:MD5`**, **`/ZH:SHA1`**, or **`/ZH:SHA_256`** option, and then choose **OK**.

::: moniker-end

## See also

[Compiler options](compiler-options.md)\
[Debug Interface Access SDK - IDiaSourceFile::get_checksumType](/visualstudio/debugger/debug-interface-access/idiasourcefile-get-checksumtype)\
[Source server](/windows/win32/debug/source-server-and-source-indexing)
