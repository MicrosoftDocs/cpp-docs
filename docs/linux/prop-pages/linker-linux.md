---
description: "Learn more about: Linker Properties (Linux C++)"
title: "Linker Properties (Linux C++)"
ms.date: "06/07/2019"
ms.assetid: a0243a94-8164-425b-b2fe-b84ff363d546
---
# Linker Properties (Linux C++)

::: moniker range="msvc-140"

Linux support is available in Visual Studio 2017 and later.

::: moniker-end

::: moniker range=">=msvc-150"

## General

| Property | Description | Choices |
|--|--|--|
| Output File | The option overrides the default name and location of the program that the linker creates. (-o) |
| Show Progress | Prints Linker Progress Messages. |
| Version | The -version option tells the linker to put a version number in the header of the executable. |
| Enable Verbose Output | The -verbose option tells the linker to output verbose messages for debugging. |
| Trace | The --trace option tells the linker to output the input files as are processed. |
| Trace Symbols | Print the list of files in which a symbol appears. (--trace-symbol=symbol) |
| Print Map | The --print-map option tells the linker to output a link map. |
| Report Unresolved Symbol References | This option when enabled will report unresolved symbol references. |
| Optimize For Memory Usage | Optimize for memory usage, by rereading the symbol tables as necessary. |
| Shared Library Search Path | Allows the user to populate the shared library search path. (-rpath-link=path) |
| Additional Library Directories | Allows the user to override the environmental library path. (-L folder). |
| Linker | Specifies the program to invoke during linking, or the path to the linker on the remote system. |
| Link Timeout | Remote linking timeout, in milliseconds. |
| Copy Output | Specifies whether to copy the build output file from the remote system to the local machine. |

## Input

| Property | Description | Choices |
|--|--|--|
| Ignore Specific Default Libraries | Specifies one or more names of default libraries to ignore. (--exclude-libs lib,lib) |
| Ignore Default Libraries | Ignore default libraries and only search libraries explicitly specified. |
| Force Undefined Symbol References | Force symbol to be entered in the output file as an undefined symbol. (-u symbol --undefined=symbol) |
| Library Dependencies | This option allows specifying additional libraries to be  added to the linker command line. The additional library will be added to the end of the linker command line  prefixed with 'lib' and end with the '.a' extension.  (-lFILE) |
| Additional Dependencies | Specifies additional items to add to the link command line. |

## Debugging

| Property | Description | Choices |
|--|--|--|
| Debugger Symbol Information | Debugger symbol information from the output file. | **Include All**<br>**Omit Debugger Symbol Information Only**<br>**Omit All Symbol Information**<br> |
| Map File Name | The Map option tells the linker to create a map file with the user specified name. (-Map=) |

## Advanced

| Property | Description | Choices |
|--|--|--|
| Mark Variables ReadOnly After Relocation | This option marks variables read-only after relocation. |
| Enable Immediate Function Binding | This option marks object for immediate function binding. |
| Do Not Require Executable Stack | This option marks output as not requiring executable stack. |
| Whole Archive | Whole Archive uses all code from Sources and Additional Dependencies. |

::: moniker-end
