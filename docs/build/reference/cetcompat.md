---
description: "Learn more about: /CETCOMPAT (CET Shadow Stack compatible)"
title: "/CETCOMPAT (CET Shadow Stack compatible)"
ms.date: "09/01/2020"
f1_keywords: ["/CETCOMPAT"]
helpviewer_keywords: ["/CETCOMPAT linker option", "/CETCOMPAT"]
---
# /CETCOMPAT (CET Shadow Stack compatible)

Specifies whether to mark an executable image as compatible with Control-flow Enforcement Technology (CET) Shadow Stack.

## Syntax

> **`/CETCOMPAT`**\
> **`/CETCOMPAT:NO`**

## Arguments

**`NO`**<br/>
Specifies that the executable shouldn't be marked compatible with CET Shadow Stack.

## Remarks

Control-flow Enforcement Technology (CET) Shadow Stack is a computer processor feature that provides capabilities to defend against return-oriented programming (ROP) based malware attacks. For more information, see [Intel Control-flow Enforcement Technology Preview](https://software.intel.com/sites/default/files/managed/4d/2a/control-flow-enforcement-technology-preview.pdf).

The **`/CETCOMPAT`** linker option tells the linker to mark the binary as CET Shadow Stack-compatible. **`/CETCOMPAT:NO`** marks the binary as not compatible with CET Shadow Stack. If both options are specified on the command line, the last one specified is used. This switch is currently only applicable to x86 and x64 architectures.

The **`/CETCOMPAT`** option is available beginning in Visual Studio 2019.

### To set the `/CETCOMPAT` linker option in Visual Studio

Starting in Visual Studio 2019 version 16.7:

1. Open the **Property Pages** dialog box for the project. For more information, see [Working with Project Properties](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Advanced** property page.

1. Select the **CET Shadow Stack Compatible** property.

1. In the dropdown control, choose **`Yes (/CETCOMPAT)`** to mark the binary as CET Shadow Stack compatible , or **`No (/CETCOMPAT:NO)`** to mark it as non-compatible.

In previous versions of Visual Studio 2019:

1. Open the **Property Pages** dialog box for the project. For more information, see [Working with Project Properties](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Command Line** property page.

1. In the **Additional Options** edit control, add *`/CETCOMPAT`* to mark the binary as CET Shadow Stack compatible, or *`/CETCOMPAT:NO`* to explicitly mark it as non-compatible.

### To set this linker option programmatically

This option doesn't have a programmatic equivalent.

## See also

[Linker options](linker-options.md)
