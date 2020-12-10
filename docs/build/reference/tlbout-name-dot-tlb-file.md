---
description: "Learn more about: /TLBOUT (Name .TLB File)"
title: "/TLBOUT (Name .TLB File)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCLinkerTool.TypeLibraryFile", "/tlbout"]
helpviewer_keywords: ["tlb files, renaming", "TLBOUT linker option", "/TLBOUT linker option", ".tlb files, renaming", "-TLBOUT linker option"]
ms.assetid: 0df6d078-2e48-46c9-a1a5-02674d85dce8
---
# /TLBOUT (Name .TLB File)

```
/TLBOUT:[path\]filename
```

## Arguments

*path*<br/>
An absolute or relative path specification for where the .tlb file should be created.

*filename*<br/>
Specifies the name of the .tlb file created by the MIDL compiler. No file extension is assumed; specify *filename*.tlb if you want a .tlb extension.

## Remarks

The /TLBOUT option specifies the name and extension of the .tlb file.

The MIDL compiler is called by the MSVC linker when linking projects that have the [module](../../windows/attributes/module-cpp.md) attribute.

If /TLBOUT is not specified, the .tlb file will get its name from [/IDLOUT](idlout-name-midl-output-files.md) *filename*. If /IDLOUT is not specified, the .tlb file will be called vc70.tlb.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Click the **Linker** folder.

1. Click the **Embedded IDL** property page.

1. Modify the **Type Library** property.

### To set this linker option programmatically

1. See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.TypeLibraryFile%2A>.

## See also

[MSVC linker reference](linking.md)<br/>
[MSVC Linker Options](linker-options.md)<br/>
[/IGNOREIDL (Don't Process Attributes into MIDL)](ignoreidl-don-t-process-attributes-into-midl.md)<br/>
[/MIDL (Specify MIDL Command Line Options)](midl-specify-midl-command-line-options.md)<br/>
[Building an Attributed Program](../../windows/attributes/cpp-attributes-com-net.md)
