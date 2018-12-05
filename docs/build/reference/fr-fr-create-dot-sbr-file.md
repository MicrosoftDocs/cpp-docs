---
title: "/FR, /Fr (Create .Sbr File)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCCLWCECompilerTool.BrowseInformation", "VC.Project.VCCLCompilerTool.BrowseInformation", "/fr", "VC.Project.VCCLCompilerTool.BrowseInformationFile", "VC.Project.VCCLWCECompilerTool.BrowseInformationFile"]
helpviewer_keywords: ["/FR compiler option [C++]", "-FR compiler option [C++]", "FR compiler option [C++]", "symbolic browser information"]
ms.assetid: 3fd8f88b-3924-4feb-9393-287036a28896
---
# /FR, /Fr (Create .Sbr File)

Creates .sbr files.

## Syntax

```
/FR[pathname[\filename]]
/Fr[pathname[\filename]]
```

## Remarks

During the build process, the Microsoft Browse Information File Maintenance Utility (BSCMAKE) uses these files to create a .BSC file, which is used to display browse information.

**/FR** creates an .sbr file with complete symbolic information.

**/Fr** creates an .sbr file without information on local variables.

If you do not specify `filename`, the .sbr file gets the same base name as the source file.

**/Fr** is deprecated; use **/FR** instead. For more information, see Deprecated and Removed Compiler Options in [Compiler Options Listed by Category](../../build/reference/compiler-options-listed-by-category.md).

> [!NOTE]
>  Do not change the .sbr extension. BSCMAKE requires the intermediary files to have that extension.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../working-with-project-properties.md).

1. In the navigation pane, choose the **C/C++**, **Browse Information** property page.

1. Modify the **Browse Information File** or **Enable Browse Information** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.BrowseInformation%2A> and <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.BrowseInformationFile%2A>.

## See Also

[Output-File (/F) Options](../../build/reference/output-file-f-options.md)<br/>
[Compiler Options](../../build/reference/compiler-options.md)<br/>
[Setting Compiler Options](../../build/reference/setting-compiler-options.md)<br/>
[Specifying the Pathname](../../build/reference/specifying-the-pathname.md)