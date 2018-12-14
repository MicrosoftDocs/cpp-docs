---
title: "XDCMake Reference (C++) - Visual Studio"
ms.date: "12/14/2018"
f1_keywords: ["xdcmake"]
helpviewer_keywords: ["xdcmake program"]
ms.assetid: 14e65747-d000-4343-854b-8393bf01cbac
---
# XDCMake Reference

xdcmake.exe is a program that compiles .xdc files into an .xml file. An .xdc file is created by the Visual C++ compiler for each source code file when source code is compiled with [/doc](doc-process-documentation-comments-c-cpp.md) and when the source code file contains documentation comments marked up with XML tags.

### To use xdcmake.exe in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set compiler and build properties](../working-with-project-properties.md).

1. Open the **Configuration Properties** folder.

1. Click the **XML Document Comments** property page.

> [!NOTE]
>  xdcmake.exe options at the command line differ from the options when xdcmake.exe is used in the development environment (property pages). For information on using xdcmake.exe in the development environment, see [XML Document Generator Tool Property Pages](xml-document-generator-tool-property-pages.md).

## Syntax

xdcmake `input_filename options`

## Parameters

*input_filename*<br/>
The file name of the .xdc files used as input to xdcmake.exe. Specify one or more .xdc files or use *.xdc to use all .xdc files in the current directory.

*options*<br/>
Zero or more of the following:

|Option|Description|
|------------|-----------------|
|/?, /help|Display help for xdcmake.exe.|
|/assembly:*filename*|Lets you specify the value of the \<assembly> tag in the .xml file.  By default, the value of the \<assembly> tag is the same as the filename of the .xml file.|
|/nologo|Suppress copyright message.|
|/out:*filename*|Lets you specify the name of the .xml file.  By default, the name of the .xml file is the filename of the first .xdc file processed by xdcmake.exe.|

## Remarks

Visual Studio will invoke xdcmake.exe automatically when building a project. You can also invoke xdcmake.exe at the command line.

See [Recommended Tags for Documentation Comments](recommended-tags-for-documentation-comments-visual-cpp.md) for more information on adding documentation comments to source code files.

## See Also

[XML Documentation](xml-documentation-visual-cpp.md)