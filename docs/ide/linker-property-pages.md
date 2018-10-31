---
title: "Linker Property Pages"
ms.date: "11/21/2017"
f1_keywords: ["VC.Project.VCLinkerTool.RegisterOutput", "VC.Project.VCLinkerTool.OVERWRITEImportLibrary", "VC.Project.VCLinkerTool.UseLibraryDependencyInputs", "VC.Project.VCLinkerTool.LinkLibraryDependencies"]
helpviewer_keywords: ["per-user redirection", "Linker property pages"]
ms.assetid: 7e7671e5-a35a-4e67-9bdb-661d75c4d11e
---
# Linker Property Pages

This topic discusses the following properties on the **General** linker property page. For the Linux version of this page, see [Linker Properties (Linux C++)](../linux/prop-pages/linker-linux.md).

## General page properties

### Ignore Import Library

This property tells the linker not to link any .lib output generated from this build into any dependent project. This allows the project system to handle .dll files that do not produce a .lib file when built. If a project depends on another project that produces a DLL, the project system automatically links the .lib file produced by that child project. This may not be needed by projects that are producing COM DLLs or resource-only DLLs; these DLLs do not have any meaningful exports. If a DLL has no exports, the linker does not generate a .lib file. If no export .lib file is present on the disk, and the project system tells the linker to link with this (missing) DLL, the link fails. Use the **Ignore Import Library** property to resolve this problem. When set to **Yes**, the project system ignores the presence or absence of that .lib file and causes any project that depends on this project to not link with the nonexistent .lib file.

To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.IgnoreImportLibrary%2A>.

### Register Output

Runs `regsvr32.exe /s $(TargetPath)` on the build output, which is valid only on .dll projects. For .exe projects, this property is ignored. To register an .exe output, set a postbuild event on the configuration to do the custom registration that is always required for registered .exe files.

To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.RegisterOutput%2A>.

### Per-user Redirection

Registration in Visual Studio has traditionally been done in HKEY_CLASSES_ROOT (HKCR). With Windows Vista and later operating systems, to access HKCR you must run Visual Studio in elevated mode. Developers do not always want to run in elevated mode but still must work with registration. Per-user redirection allows you to register without having to run in this mode.

Per-user redirection forces any writes to HKCR to be redirected to HKEY\_CURRENT\_USER (HKCU). If per-user redirection is turned off, it can cause [Project Build Error PRJ0050](../error-messages/tool-errors/project-build-error-prj0050.md) when the program tries to write to HKCR.

### Link Library Dependencies

Specifies whether to link the .lib files that are produced by dependent projects. Typically, you want to link in the .lib files, but this may not be the case for certain DLLs.

You can also specify a .obj file by providing the file name and relative path, for example "..\\..\MyLibProject\MyObjFile.obj". If the source code for the .obj file #includes a precompiled header, for example pch.h, then the pch.obj file is located in the same folder as MyObjFile.obj, and you must also add pch.obj as an additional dependency.

### Use Library Dependency Inputs

In a large project, when a dependent project produces a .lib file, incremental linking is disabled. If there are many dependent projects that produce .lib files, building the application can take a long time. When this property is set to **Yes**, the project system links in the .obj files for .libs produced by dependent projects, thus enabling incremental linking.

For information about how to access the **General** linker property page, see [Working with Project Properties](../ide/working-with-project-properties.md).

## See also

[VC++ Project Settings, Projects and Solutions, Options Dialog Box](/visualstudio/ide/reference/vcpp-project-settings-projects-and-solutions-options-dialog-box)<br>
[Property Pages](../ide/property-pages-visual-cpp.md)