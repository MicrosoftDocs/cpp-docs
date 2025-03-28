---
description: "Learn more about: /TLBOUT (Name .TLB File)"
title: "/TLBOUT (Name .TLB File)"
ms.date: 03/24/2025
f1_keywords: ["VC.Project.VCLinkerTool.TypeLibraryFile", "/tlbout"]
helpviewer_keywords: ["tlb files, renaming", "TLBOUT linker option", "/TLBOUT linker option", ".tlb files, renaming", "-TLBOUT linker option"]
---
# `/TLBOUT` (Name .TLB File)

```cmd
/TLBOUT:[path\]filename
```

## Arguments

*`path`*\
An absolute or relative path specification for where the .tlb file should be created.

*`filename`*
Specifies the name of the .tlb file created by the MIDL compiler. No file extension is assumed; specify *filename*.tlb if you want a .tlb extension. When expanded, the fully qualified filename must not exceed `MAX_PATH` (260 characters).

## Remarks

The `/TLBOUT` option specifies the name and extension of the .tlb file.

The MIDL compiler is called by the MSVC linker when linking projects that have the [module](../../windows/attributes/module-cpp.md) attribute.

If `/TLBOUT` is not specified, the .tlb file will get its name from [/IDLOUT](idlout-name-midl-output-files.md) *filename*. If /IDLOUT is not specified, the .tlb file will be called vc70.tlb.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Embedded IDL** property page.

1. Modify the **Type Library** property.

### To set this linker option programmatically

1. See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.TypeLibraryFile%2A>.

## See also

[MSVC linker reference](linking.md)\
[MSVC Linker Options](linker-options.md)\
[/IGNOREIDL (Don't Process Attributes into MIDL)](ignoreidl-don-t-process-attributes-into-midl.md)\
[/MIDL (Specify MIDL Command Line Options)](midl-specify-midl-command-line-options.md)\
[Building an Attributed Program](../../windows/attributes/cpp-attributes-com-net.md)
