---
description: "Learn more about: /MANIFESTUAC (Embeds UAC information in manifest)"
title: "/MANIFESTUAC (Embeds UAC information in manifest)"
ms.date: "06/12/2020"
f1_keywords: ["VC.Project.VCLinkerTool.UACUIAccess", "VC.Project.VCLinkerTool.UACExecutionLevel", "VC.Project.VCLinkerTool.EnableUAC"]
helpviewer_keywords: ["/MANIFESTUAC linker option", "MANIFESTUAC linker option", "-MANIFESTUAC linker option"]
ms.assetid: 2d243c39-fa13-493c-b56f-d0d972a1603a
---
# /MANIFESTUAC (Embeds UAC information in manifest)

Specifies whether User Account Control (UAC) information is embedded in the program manifest.

## Syntax

> **`/MANIFESTUAC`**\
> **`/MANIFESTUAC:NO`**\
> **`/MANIFESTUAC:`**_`level`_\
> **`/MANIFESTUAC:`**_`uiAccess`_\
> **`/MANIFESTUAC:`**_`fragment`_

### Parameters

**`NO`**<br/>
The linker doesn't embed UAC information in the program manifest.

*`level`*<br/>
**`level=`** followed by one of **`'asInvoker'`**, **`'highestAvailable'`**, or **`'requireAdministrator'`**. Defaults to **`'asInvoker'`**. For more information, see the [Remarks](#remarks) section.

*`uiAccess`*<br/>
**`uiAccess='true'`** if you want the application to bypass user interface protection levels and drive input to higher-permission windows on the desktop; otherwise, **`uiAccess='false'`**. Defaults to **`uiAccess='false'`**. Set this argument to **`uiAccess='true'`** only for user interface accessibility applications.

*`fragment`*<br/>
A string that contains the *`level`* and *`uiAccess`* values. May optionally be enclosed in double quotes. For more information, see the [Remarks](#remarks) section.

## Remarks

If you specify multiple **`/MANIFESTUAC`** options on the command-line, the last one entered takes precedence.

The choices for **`/MANIFESTUAC:`**_`level`_ are as follows:

- **`level='asInvoker'`**: The application runs at the same permission level as the process that started it. You can elevate the application to a higher permission level by selecting **Run as Administrator**.

- **`level='highestAvailable'`**: The application runs at the highest permission level that it can. If the user who starts the application is a member of the Administrators group, this option is the same as **`level='requireAdministrator'`**. If the highest available permission level is higher than the level of the opening process, the system prompts for credentials.

- **`level='requireAdministrator'`**: The application runs using administrator permissions. The user who starts the application must be a member of the Administrators group. If the opening process isn't running with administrative permissions, the system prompts for credentials.

You can specify both the *`level`* and *`uiAccess`* values in one step by using the **`/MANIFESTUAC:`**_`fragment`_ option. The fragment must be in the following form:

> **`/MANIFESTUAC:`** \[ **`"`** ] **`level=`** { **`'asInvoker'`** | **`'highestAvailable'`** | **`'requireAdministrator'`** } **`uiAccess=`** { **`'true'`** | **`'false'`** } \[ **`"`** ]

For example:

**`/MANIFESTUAC:"level='highestAvailable' uiAccess='true'"`**

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Manifest File** property page.

1. Modify the **Enable User Account Control (UAC)**, **UAC Execution Level**, and **UAC Bypass UI Protection** properties.

### To set this linker option programmatically

1. See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.EnableUAC%2A>, <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.UACExecutionLevel%2A>, and <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.UACUIAccess%2A>.

## See also

[MSVC linker reference](linking.md)<br/>
[MSVC Linker Options](linker-options.md)
