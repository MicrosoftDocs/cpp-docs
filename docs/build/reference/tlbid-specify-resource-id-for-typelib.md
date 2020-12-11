---
description: "Learn more about: /TLBID (Specify Resource ID for TypeLib)"
title: "/TLBID (Specify Resource ID for TypeLib)"
ms.date: "11/04/2016"
f1_keywords: ["/tlbid", "VC.Project.VCLinkerTool.TypeLibraryResourceID"]
helpviewer_keywords: ["tlb files, specifying resource ID", "-TLBID linker option", ".tlb files, specifying resource ID", "/TLBID linker option", "TLBID linker option", "type libraries, specifying resource ID"]
ms.assetid: 434b28a2-4656-4d52-ac82-8b18bf486fb2
---
# /TLBID (Specify Resource ID for TypeLib)

```
/TLBID:id
```

## Arguments

*id*<br/>
A user-specified value for a linker-created type library. It overrides the default resource ID of 1.

## Remarks

When compiling a program that uses attributes, the linker will create a type library. The linker will assign a resource ID of 1 to the type library.

If this resource ID conflicts with one of your existing resources, you can specify another ID with /TLBID. The range of values that you can pass to `id` is 1 to 65535.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Click the **Linker** folder.

1. Click the **Embedded IDL** property page.

1. Modify the **TypeLib Resource ID** property.

### To set this linker option programmatically

1. See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.TypeLibraryResourceID%2A>.

## See also

[MSVC linker reference](linking.md)<br/>
[MSVC Linker Options](linker-options.md)
