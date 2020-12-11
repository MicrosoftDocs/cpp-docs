---
description: "Learn more about: /IGNORE (Ignore Specific Warnings)"
title: "/IGNORE (Ignore Specific Warnings)"
ms.date: "11/04/2016"
f1_keywords: ["/OVERWRITE"]
helpviewer_keywords: ["/IGNORE linker option"]
ms.assetid: 37e77387-8838-4697-898f-d376ac641124
---
# /IGNORE (Ignore Specific Warnings)

```
/IGNORE:warning[,warning]
```

## Parameters

*warning*<br/>
The number of the linker warning to suppress, in the range 4000 to 4999.

## Remarks

By default, LINK reports all warnings. Specify **/IGNORE:**`warning` to tell the linker to suppress a specific warning number. To ignore multiple warnings, separate the warning numbers with commas.

The linker does not allow some warnings to be ignored. This table lists the warnings that are not suppressed by **/IGNORE**:

| Linker Warning | Message |
|--------------------|-|
|LNK4017|`keyword` statement not supported for the target platform; ignored|
|[LNK4044](../../error-messages/tool-errors/linker-tools-warning-lnk4044.md)|unrecognized option '`option`'; ignored|
|LNK4062|'`option`' not compatible with '`architecture`' target machine; option ignored|
|[LNK4075](../../error-messages/tool-errors/linker-tools-warning-lnk4075.md)|ignoring "`option1`" due to "`option2`" specification|
|[LNK4086](../../error-messages/tool-errors/linker-tools-warning-lnk4086.md)|entrypoint '`function`' is not __stdcall with '`number`' bytes of arguments; image may not run|
|LNK4088|image being generated due to /FORCE option; image may not run|
|[LNK4105](../../error-messages/tool-errors/linker-tools-warning-lnk4105.md)|no argument specified with option '`option`'; ignoring switch|
|LNK4203|error reading program database '`filename`'; linking object as if no debug info|
|[LNK4204](../../error-messages/tool-errors/linker-tools-warning-lnk4204.md)|'`filename`' is missing debugging information for referencing module; linking object as if no debug info|
|[LNK4205](../../error-messages/tool-errors/linker-tools-warning-lnk4205.md)|'`filename`' is missing current debugging information for referencing module; linking object as if no debug info|
|[LNK4206](../../error-messages/tool-errors/linker-tools-warning-lnk4206.md)|precompiled type information not found; '`filename`' not linked or overwritten; linking object as if no debug info|
|LNK4207|'`filename`' compiled /Yc /Yu /Z7; cannot create PDB; recompile with /Zi; linking object as if no debug info|
|LNK4208|incompatible PDB format in '`filename`'; delete and rebuild; linking object as if no debug info|
|LNK4209|debugging information corrupt; recompile module; linking object as if no debug info|
|[LNK4224](../../error-messages/tool-errors/linker-tools-warning-lnk4224.md)|`option` is no longer supported; ignored|
|LNK4228|'`option`' invalid for a DLL; ignored|
|[LNK4229](../../error-messages/tool-errors/linker-tools-warning-lnk4229.md)|invalid directive /`directive` found; ignored|

In general, linker warnings that can't be ignored represent build failures, command line errors or configuration errors that you should fix.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. In the **Linker** folder, select the **Command Line** property page.

1. Modify the **Additional Options** property.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.
