---
description: "Learn more about: Compiler Error C2220"
title: "Compiler Error C2220"
ms.date: "11/04/2016"
f1_keywords: ["C2220"]
helpviewer_keywords: ["C2220"]
ms.assetid: d610802c-64d7-40ad-a2a6-0ed0b6815a6c
---
# Compiler Error C2220

warning treated as error - no object file generated

[/WX](../../build/reference/compiler-option-warning-level.md) tells the compiler to treat all warnings as errors. Because an error occurred, no object or executable file was generated.

This error only appears when the **/WX** flag is set and a warning occurs during compilation. To fix this error, you must eliminate every warning in your project.

### To fix, use one of the following techniques

- Fix the problems that cause warnings in your project.

- Compile at a lower warning level—for example, use **/W3** instead of **/W4**.

- Use a [warning](../../preprocessor/warning.md) pragma to disable or suppress a specific warning.

- Don't use **/WX** to compile.
