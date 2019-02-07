---
title: "/WINMD (Generate Windows Metadata)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCLinkerTool.GenerateWindowsMetadata"]
ms.assetid: bcfb4901-411e-4c9e-9f78-23028b6e5fcc
---
# /WINMD (Generate Windows Metadata)

Enables generation of a Windows Runtime Metadata (.winmd) file.

> **/WINMD**\[**:**{**NO**\|**ONLY**}]

## Arguments

**/WINMD**<br/>
The default setting for Universal Windows Platform apps. The linker generates both the binary executable file and the .winmd metadata file.

**/WINMD:NO**<br/>
The linker generates only the binary executable file, but not a .winmd file.

**/WINMD:ONLY**<br/>
The linker generates only the .winmd file, but not the binary executable file.

## Remarks

The **/WINMD** linker option is used for UWP apps and Windows runtime components to control the creation of a Windows Runtime metadata (.winmd) file. A .winmd file is a kind of DLL that contains metadata for Windows runtime types and, in the case of runtime components, the implementations of those types. The metadata follows the [ECMA-335](http://www.ecma-international.org/publications/standards/Ecma-335.htm) standard.

By default, the output file name has the form *binaryname*.winmd. To specify a different file name, use the [/WINMDFILE](../../build/reference/winmdfile-specify-winmd-file.md) option.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Windows Metadata** property page.

1. In the **Generate Windows Metadata** drop-down list box, select the option you want.

## See also

- [Walkthrough: Creating a Simple Windows Runtime component and calling it from JavaScript](/windows/uwp/winrt-components/walkthrough-creating-a-simple-windows-runtime-component-and-calling-it-from-javascript)
- [Introduction to Microsoft Interface Definition Language 3.0](/uwp/midl-3/intro)
- [/WINMDFILE (Specify winmd File)](winmdfile-specify-winmd-file.md)
- [/WINMDKEYFILE (Specify winmd Key File)](winmdkeyfile-specify-winmd-key-file.md)
- [/WINMDKEYCONTAINER (Specify Key Container)](winmdkeycontainer-specify-key-container.md)
- [/WINMDDELAYSIGN (Partially Sign a winmd)](winmddelaysign-partially-sign-a-winmd.md)
- [Setting Linker Options](../../build/reference/setting-linker-options.md)
- [Linker Options](../../build/reference/linker-options.md)
