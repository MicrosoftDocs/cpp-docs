---
description: "Learn more about: /NOLOGO (Suppress Startup Banner) (Linker)"
title: "/NOLOGO (Suppress Startup Banner) (Linker)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCLinkerTool.SuppressStartupBanner", "/nologo"]
helpviewer_keywords: ["suppress startup banner linker option", "-NOLOGO linker option", "/NOLOGO linker option", "copyright message", "version numbers, preventing linker display", "banners, suppressing startup", "NOLOGO linker option"]
ms.assetid: 3b20dddd-eca6-4545-a331-9f70bf720197
---
# /NOLOGO (Suppress Startup Banner) (Linker)

```
/NOLOGO
```

## Remarks

The /NOLOGO option prevents display of the copyright message and version number.

This option also suppresses echoing of command files. For details, see [LINK Command Files](linking.md).

By default, this information is sent by the linker to the Output window. On the command line, it is sent to standard output and can be redirected to a file.

### To set this linker option in the Visual Studio development environment

1. This option should only be used from the command line.

### To set this linker option programmatically

1. This linker option cannot be changed programmatically.

## See also

[MSVC linker reference](linking.md)<br/>
[MSVC Linker Options](linker-options.md)
