---
title: "/ZH (Hash algorithm for calculation of file checksum in debug info)"
description: "Use the /ZH compiler option to enable MD5, SHA-1, or SHA-256 source file checksums in debug info"
ms.date: "09/16/2019"
f1_keywords: ["/ZH", "/ZH:MD5", "/ZH:SHA1", "/ZH:SHA_256"]
helpviewer_keywords: ["/ZH", "/ZH:MD5", "/ZH:SHA1", "/ZH:SHA_256", "/ZH compiler option", "/ZH:MD5 compiler option", "/ZH:SHA1 compiler option", "/ZH:SHA_256 compiler option", "Hash algorithm for file checksum in debug info"]
---
# /ZH (Hash algorithm for calculation of file checksum in debug info)

Specifies which cryptographic hash algorithm to use to generate a checksum of each source file.

## Syntax

> **/ZH:**{**MD5**|**SHA1**|**SHA_256**}

## Arguments

**/ZH:MD5**\
Use an MD5 hash for the checksum. This option is the default.

**/ZH:SHA1**\
Use an SHA-1 hash for the checksum.

**/ZH:SHA_256**\
Use an SHA-256 hash for the checksum.

## Remarks

PDB files store a checksum for each source file compiled into the object code in the associated executable. The checksum allows the debugger to verify that the source code it loads matches the executable. The compiler and debugger support MD5, SHA-1, and SHA-256 hash algorithms. By default, the compiler uses an MD5 hash to generate the checksum. You can specify this option explicitly by using the **/ZH:MD5** option.

Because of a risk of collision problems in MD5 and SHA-1, Microsoft recommends you use the **/ZH:SHA_256** option. The SHA-256 hash may result in a small increase in compile times.

When more than one **/ZH** option is specified, the last option is used.

The **/ZH** option is available starting in Visual Studio 2019 version 16.4.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Set the **Configuration** drop-down to **All Configurations**.

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Modify the **Additional options** property to add a **/ZH:MD5**, **/ZH:SHA1**, or **/ZH:SHA_256** option, and then choose **OK**.

## See also

[Compiler options](compiler-options.md)\
[Source server](/windows/win32/debug/source-server-and-source-indexing)
