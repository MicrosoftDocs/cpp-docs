---
title: "Linker Property Pages | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.RegisterOutput"
  - "VC.Project.VCLinkerTool.IgnoreImportLibrary"
  - "VC.Project.VCLinkerTool.UseLibraryDependencyInputs"
  - "VC.Project.VCLinkerTool.LinkLibraryDependencies"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "per-user redirection"
  - "Linker property pages"
ms.assetid: 7e7671e5-a35a-4e67-9bdb-661d75c4d11e
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Linker Property Pages
This topic discusses the following properties on the **General** linker property page:  
  
 **Ignore Import Library**  
 Tells the linker not to try to link any .lib output generated from this build into any dependent project. This allows the project system to handle .dll files that do not produce a .lib file when built. If a project depends on another project that produces a DLL, the project system automatically will link the .lib file produced by that child project. This may not be needed by projects that are producing COM DLLs or resource-only DLLs; these DLLs do not have any meaningful exports. If a DLL has no exports, the linker will not generate a .lib file. If no export .lib file is present on the disk, and the project system tells the linker to link with this (missing) DLL, the link will fail.  
  
 Use **Ignore Import Library** to resolve this problem. When set to `Yes`, the project system will ignore the presence or absence of that .lib file and cause any project that depends on this project to not link with the nonexistent .lib file.  
  
 To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.IgnoreImportLibrary%2A>.  
  
 **Register Output**  
 Run regsvr32.exe /s $(TargetPath), which is valid only on .dll projects. For .exe projects, this property is ignored. If you want to register an .exe output, set a postbuild event on the configuration to do the custom registration that is always required for registered .exe files.  
  
 To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.RegisterOutput%2A>.  
  
 **Per-user Redirection**  
 Registration in [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] has traditionally been done in HKEY_CLASSES_ROOT (HKCR). With [!INCLUDE[wiprlhext](../c-runtime-library/reference/includes/wiprlhext_md.md)], to access HKCR you must run [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] in elevated mode. Developers do not always want to run in elevated mode but still must work with registration. Per-user redirection allows you to register without having to run in this mode.  
  
 Per-user redirection will force any writes to HKCR to be redirected to HKEY_CURRENT_USER (HKCU). If per-user redirection is turned off, it can cause [Project Build Error PRJ0050](../error-messages/tool-errors/project-build-error-prj0050.md) when the program tries to write to HKCR.  
  
 **Link Library Dependencies**  
 Gives you the choice of linking in the .lib files that are produced by dependent projects. Typically, you will want to link in the .lib file.  
  
 You can also specify a .obj file by providing the file name and relative path, for example **..\\..\MyLibProject\MyObjFile.obj**. If the source code for the .obj file #includes a precompiled header, for example pch.h, then pch.obj file is located in the same folder as **MyObjFile.obj** and you must also add **pch.obj** as an additional dependency.  
  
 **Use Library Dependency Inputs**  
 In a large project, when a dependent project produces a .lib file, incremental linking is disabled. If there are many dependent projects that produce .lib files, building the application can take a long time. When this property is set to `Yes`, the project system links in the .obj files for .libs produced by dependent projects, thus enabling incremental linking.  
  
 For information about how to access the **General** linker property page, see [Working with Project Properties](../ide/working-with-project-properties.md).  
  
## See Also  
 [VC++ Directories, Projects and Solutions, Options Dialog Box](http://msdn.microsoft.com/en-us/e027448b-c811-4c3d-8531-4325ad3f6e02)   
 [Property Pages](../ide/property-pages-visual-cpp.md)