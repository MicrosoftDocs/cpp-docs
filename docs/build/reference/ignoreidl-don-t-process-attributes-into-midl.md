---
description: "Learn more about: /IGNOREIDL (Don&#39;t Process Attributes into MIDL)"
title: "/IGNOREIDL (Don&#39;t Process Attributes into MIDL)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCLinkerTool.IgnoreEmbeddedIDL", "/ignoreidl"]
helpviewer_keywords: ["IGNOREIDL linker option", "-IGNOREIDL linker option", "/IGNOREIDL linker option"]
ms.assetid: 29514098-6a1c-4317-af2f-1dc268972780
---
# /IGNOREIDL (Don&#39;t Process Attributes into MIDL)

```
/IGNOREIDL
```

## Remarks

The /IGNOREIDL option specifies that any [IDL attributes](../../windows/attributes/idl-attributes.md) in source code should not be processed into an .idl file.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Click the **Linker** folder.

1. Click the **Embedded IDL** property page.

1. Modify the **Ignore Embedded IDL** property.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.IgnoreEmbeddedIDL%2A>.

## See also

[MSVC linker reference](linking.md)<br/>
[MSVC Linker Options](linker-options.md)<br/>
[/IDLOUT (Name MIDL Output Files)](idlout-name-midl-output-files.md)<br/>
[/TLBOUT (Name .TLB File)](tlbout-name-dot-tlb-file.md)<br/>
[/MIDL (Specify MIDL Command Line Options)](midl-specify-midl-command-line-options.md)<br/>
[Building an Attributed Program](../../windows/attributes/cpp-attributes-com-net.md)
