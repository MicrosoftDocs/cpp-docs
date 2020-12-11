---
description: "Learn more about: /MACHINE (Specify Target Platform)"
title: "/MACHINE (Specify Target Platform)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCLinkerTool.TargetMachine", "/machine"]
helpviewer_keywords: ["mapfiles, creating linker", "target platform", "-MACHINE linker option", "/MACHINE linker option", "MACHINE linker option"]
ms.assetid: 8d41bf4b-7e53-4ab9-9085-d852b08d31c2
---
# /MACHINE (Specify Target Platform)

```
/MACHINE:{ARM|EBC|X64|X86}
```

## Remarks

The /MACHINE option specifies the target platform for the program.

Usually, you don't have to specify the /MACHINE option. LINK infers the machine type from the .obj files. However, in some circumstances, LINK cannot determine the machine type and issues a [linker tools error LNK1113](../../error-messages/tool-errors/linker-tools-error-lnk1113.md). If such an error occurs, specify /MACHINE.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Click the **Linker** folder.

1. Click the **Advanced** property page.

1. Modify the **Target Machine** property.

### To set this linker option programmatically

1. See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.TargetMachine%2A>.

## See also

[MSVC linker reference](linking.md)<br/>
[MSVC Linker Options](linker-options.md)
