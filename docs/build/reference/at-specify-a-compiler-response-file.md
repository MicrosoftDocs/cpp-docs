---
title: "@ (Specify a Compiler Response File) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["@"]
dev_langs: ["C++"]
helpviewer_keywords: ["response files, C/C++ compiler", "@ compiler option", "cl.exe compiler, specifying response files"]
ms.assetid: 400fffee-909d-4f60-bf76-45833e822685
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# @ (Specify a Compiler Response File)

Specifies a compiler response file.

## Syntax

> **\@**<em>response_file</em>

## Arguments

*response_file*<br/>
A text file containing compiler commands.

## Remarks

A response file can contain any commands that you would specify on the command line. This can be useful if your command-line arguments exceed 127 characters.

It is not possible to specify the **\@** option from within a response file. That is, a response file cannot embed another response file.

From the command line you can specify as many response file options (for example, `@respfile.1 @respfile.2`) as you want.

### To set this compiler option in the Visual Studio development environment

- A response file cannot be specified from within the development environment and must be specified at the command line.

### To set this compiler option programmatically

- This compiler option cannot be changed programmatically.

## See Also

[Compiler Options](../../build/reference/compiler-options.md)<br/>
[Setting Compiler Options](../../build/reference/setting-compiler-options.md)  
