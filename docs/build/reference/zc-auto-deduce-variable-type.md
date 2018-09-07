---
title: "-Zc:auto (Deduce Variable Type) | Microsoft Docs"
ms.custom: ""
ms.date: "02/28/2018"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["/Zc:auto"]
dev_langs: ["C++"]
helpviewer_keywords: ["-Zc compiler options (C++)", "Deduce variable type (C++)", "/Zc compiler options (C++)", "Zc compiler options (C++)"]
ms.assetid: 5f5bc102-44c3-4688-bbe1-080594dcee5c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# /Zc:auto (Deduce Variable Type)

The **/Zc:auto[-]** compiler option tells the compiler how to use the [auto keyword](../../cpp/auto-keyword.md) to declare variables. If you specify the default option, **/Zc:auto**, the compiler deduces the type of the declared variable from its initialization expression. If you specify **/Zc:auto-**, the compiler allocates the variable to the automatic storage class.

## Syntax

> **/Zc:auto**[**-**]  

## Remarks

The C++ standard defines an original and a revised meaning for the `auto` keyword. Before Visual C++ 2010, the keyword declares a variable in the automatic storage class; that is, a variable that has a local lifetime. Starting with Visual C++ 2010, the keyword deduces the type of a variable from the declaration's initialization expression. Use the **/Zc:auto[-]** compiler option to tell the compiler to use the original or revised meaning of the `auto` keyword. The **/Zc:auto** option is on by default. The [/permissive-](permissive-standards-conformance.md) option does not change the default setting of **/Zc:auto**.

The compiler issues an appropriate diagnostic message if your use of the `auto` keyword contradicts the current **/Zc:auto** compiler option. For more information, see [auto Keyword](../../cpp/auto-keyword.md). For more information about conformance issues with Visual C++, see [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).

### To set this compiler option in Visual Studio

1. Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Add **/Zc:auto** or **/Zc:auto-** to the **Additional options:** pane.

## See also

[/Zc (Conformance)](../../build/reference/zc-conformance.md)<br/>
[auto Keyword](../../cpp/auto-keyword.md)
