---
title: "/Zc:trigraphs (Trigraphs Substitution) | Microsoft Docs"
ms.custom: ""
ms.date: "03/06/2018"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["/Zc"]
dev_langs: ["C++"]
helpviewer_keywords: ["-Zc compiler options (C++)", "/Zc compiler options (C++)", "Conformance compiler options", "Zc compiler options (C++)"]
ms.assetid: e3d6058f-400d-4966-a3aa-800cfdf69cbf
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# /Zc:trigraphs (Trigraphs Substitution)

When **/Zc:trigraphs** is specified, the compiler replaces a trigraph character sequence by using a corresponding punctuation character.

## Syntax

> **/Zc:trigraphs**[**-**]  

## Remarks

A *trigraph* consists of two consecutive question marks ("??") followed by a unique third character. The C language standard supports trigraphs for source files that use a character set that does not contain convenient graphic representations for some punctuation characters. For example, when trigraphs are enabled, the compiler replaces the "??=" trigraph by using the '#' character. Through C++14, trigraphs are supported as in C. The C++17 standard removes trigraphs from the C++ language. In C++ code, the **/Zc:trigraphs** compiler option enables substitution of trigraph sequences by the corresponding punctuation character. **/Zc:trigraphs-** disables trigraph substitution.

The **/Zc:trigraphs** option is off by default, and the option is not affected when the [/permissive-](permissive-standards-conformance.md) option is specified.

For a list of C/C++ trigraphs, and an example that shows how to use trigraphs, see [Trigraphs](../../c-language/trigraphs.md).

## To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Modify the **Additional Options** property to include **/Zc:trigraphs** or **/Zc:trigraphs-** and then choose **OK**.

## See also

[/Zc (Conformance)](../../build/reference/zc-conformance.md)<br/>
[Trigraphs](../../c-language/trigraphs.md)<br/>
