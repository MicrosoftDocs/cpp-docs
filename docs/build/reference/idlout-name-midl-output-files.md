---
description: "Learn more about: /IDLOUT (Name MIDL Output Files)"
title: "/IDLOUT (Name MIDL Output Files)"
ms.date: "11/04/2016"
f1_keywords: ["/idlout", "VC.Project.VCLinkerTool.MergedIDLBaseFileName"]
helpviewer_keywords: ["MIDL, output file names", ".idl files, path", "MIDL", "/IDLOUT linker option", "IDL files, path", "-IDLOUT linker option", "IDLOUT linker option"]
ms.assetid: 10d00a6a-85b4-4de1-8732-e422c6931509
---
# /IDLOUT (Name MIDL Output Files)

```
/IDLOUT:[path\]filename
```

## Parameters

*path*<br/>
An absolute or relative path specification. By specifying a path, you affect only the location of an .idl file; all other files are placed in the project directory.

*filename*<br/>
Specifies the name of the .idl file created by the MIDL compiler. No file extension is assumed; specify *filename*.idl if you want an .idl extension.

## Remarks

The /IDLOUT option specifies the name and extension of the .idl file.

The MIDL compiler is called by the MSVC linker when linking projects that have the [module](../../windows/attributes/module-cpp.md) attribute.

/IDLOUT also specifies the file names of the other output files associated with the MIDL compiler:

- *filename*.tlb

- *filename*_p.c

- *filename*_i.c

- *filename*.h

*filename* is the parameter that you pass to /IDLOUT. If [/TLBOUT](tlbout-name-dot-tlb-file.md) is specified, the .tlb file will get its name from /TLBOUT *filename*.

If you specify neither /IDLOUT nor /TLBOUT, the linker will create vc70.tlb, vc70.idl, vc70_p.c, vc70_i.c, and vc70.h.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Click the **Linker** folder.

1. Click the **Embedded IDL** property page.

1. Modify the **Merge IDL Base File Name** property.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.MergedIDLBaseFileName%2A>.

## See also

[MSVC linker reference](linking.md)<br/>
[MSVC Linker Options](linker-options.md)<br/>
[/IGNOREIDL (Don't Process Attributes into MIDL)](ignoreidl-don-t-process-attributes-into-midl.md)<br/>
[/MIDL (Specify MIDL Command Line Options)](midl-specify-midl-command-line-options.md)<br/>
[Building an Attributed Program](../../windows/attributes/cpp-attributes-com-net.md)
