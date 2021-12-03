---
description: "Learn more about: XDCMake Reference"
title: "XDCMake Reference"
ms.date: 12/03/2021
f1_keywords: ["xdcmake"]
helpviewer_keywords: ["xdcmake program"]
ms.assetid: 14e65747-d000-4343-854b-8393bf01cbac
---
# XDCMake Reference

The xdcmake.exe program compiles XDC files into an XML file. An XDC file is created by the MSVC compiler for each source code file when source code is compiled with [`/doc`](doc-process-documentation-comments-c-cpp.md) and when the source code file contains documentation comments marked up with XML tags.

## To use xdcmake.exe in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **XML Document Comments** property page.

1. Enter options in the property page.

> [!NOTE]
> xdcmake.exe options at the command line differ from the options when xdcmake.exe is used in the development environment (property pages). For information on using xdcmake.exe in the development environment, see [XML Document Generator Tool Property Pages](xml-document-generator-tool-property-pages.md).

## Syntax

`xdcmake input_filename options`

## Parameters

*`input_filename`*\
The file name of the XDC files used as input to xdcmake.exe. Specify one or more XDC files or use `*.xdc` to use all XDC files in the current directory.

*`options`*\
You can supply zero or more of the following options:

| Option | Description |
|--|--|
| `/?`, `/help` | Display help for xdcmake.exe. |
| `/assembly:filename` | Lets you specify the value of the `<assembly>` tag in the XML file.  By default, the value of the `<assembly>` tag is the same as the filename of the XML file. |
| `/nologo` | Suppress copyright message. |
| `/out:filename` | Lets you specify the name of the XML file.  By default, the name of the XML file is the filename of the first XDC file processed by xdcmake.exe. |

## Remarks

Visual Studio invokes xdcmake.exe automatically when building a project. You can also invoke xdcmake.exe at the command line.

For more information on adding documentation comments to source code files, see [Recommended tags for documentation comments](recommended-tags-for-documentation-comments-visual-cpp.md).

## See also

[XML documentation](xml-documentation-visual-cpp.md)
