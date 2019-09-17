---
title: "/ZH:SHA_256 (use SHA256 for file checksum in debug info)"
description: "Use the /ZH:SHA_256 compiler option to enable FIPS-compliant SHA-256 source file checksums in debug info"
ms.date: "09/16/2019"
f1_keywords: ["/ZH:SHA_256"]
helpviewer_keywords: ["/ZH:SHA_256", "use SHA256 for file checksum in debug info", "FIPS"]
---
# /ZH:SHA_256 (use SHA256 for file checksum in debug info)

Tells the compiler to generate an SHA-256 checksum (hash) of the source files, to use in the PDB file.

## Syntax

> **/ZH:SHA_256**

## Remarks

PDB files store a checksum for each source file compiled into the object code in the associated executable. That allows the debugger to verify that the source code it loads matches the executable. By default, the compiler uses an MD5 cryptographic hash to generate the checksum. The MD5 algorithm is considered insecure, and isn't allowed in FIPS-compliant software.

The **/ZH:SHA_256** option tells the compiler to use an SHA-256 cryptographic hash for the checksum. The SHA-256 checksum is FIPS-compliant, but it takes more time to calculate on most processors. Our benchmarks on these processors show an approximate 5% longer net compile time. Your experience may vary. Newer processors support SHA-256-specific instructions that are at least as fast as the MD5 calculation.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Set the **Configuration** drop-down to **All Configurations**.

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Modify the **Additional options** property to add **/ZH:SHA_256**, and then choose **OK**.

## See also

[Compiler options](compiler-options.md)\
[Source server](/windows/win32/debug/source-server-and-source-indexing)
