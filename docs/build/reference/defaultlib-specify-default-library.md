---
title: "/DEFAULTLIB (Specify Default Library) | Microsoft Docs"
ms.custom: ""
ms.date: "05/29/2018"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["VC.Project.VCLinkerTool.DefaultLibraries", "/defaultlib"]
dev_langs: ["C++"]
helpviewer_keywords: ["-DEFAULTLIB linker option", "DEFAULTLIB linker option", "/DEFAULTLIB linker option", "libraries, adding to list of"]
ms.assetid: 6af7ff49-c170-4a13-97e2-2b9ae2de20c9
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# /DEFAULTLIB (Specify Default Library)

Specify a default library to search to resolve external references.

## Syntax

> **/DEFAULTLIB**:_library_

### Arguments

|Argument|Description|
|-|-|
*library*|The name of a library to search when resolving external references.

## Remarks

The **/DEFAULTLIB** option adds one *library* to the list of libraries that LINK searches when resolving references. A library specified with **/DEFAULTLIB** is searched after libraries specified explicitly on the command line and before default libraries named in .obj files.

When used without arguments, the [/NODEFAULTLIB (Ignore All Default Libraries)](../../build/reference/nodefaultlib-ignore-libraries.md) option overrides all **/DEFAULTLIB**:*library* options. The **/NODEFAULTLIB**:*library* option overrides **/DEFAULTLIB**:*library* when the same *library* name is specified in both.

### To set this linker option in the Visual Studio development environment

1. Open the project **Property Pages** dialog box. For more information, see [Working with Project Properties](../../ide/working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Command Line** property page.

1. In **Additional Options**, enter a **/DEFAULTLIB**:*library* option for each library to search. Choose **OK** to save your changes.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## See also

- [Setting Linker Options](../../build/reference/setting-linker-options.md)
- [Linker Options](../../build/reference/linker-options.md)
