---
description: "Learn more about: /REBASE"
title: "/REBASE"
ms.date: "11/04/2016"
f1_keywords: ["/rebase"]
helpviewer_keywords: ["base addresses [C++]", "-REBASE editbin option", "REBASE editbin option", "DLLs [C++], linking", "executable files [C++], base address", "/REBASE editbin option [C++]"]
ms.assetid: 3f89d874-af5c-485b-974b-fd205f6e1a4b
---
# /REBASE

```
/REBASE[:modifiers]
```

## Remarks

This option sets the base addresses for the specified files. EDITBIN assigns new base addresses in a contiguous address space according to the size of each file rounded up to the nearest 64 KB. For details about base addresses, see the [Base Address](base-base-address.md) (/BASE) linker option.

Specify the program's executable files and DLLs in the *files* argument on the EDITBIN command line in the order in which they are to be based. You can optionally specify one or more *modifiers*, each separated by a comma (**,**):

|Modifier|Action|
|--------------|------------|
|**BASE=**<em>address</em>|Provides a beginning address for reassigning base addresses to the files. Specify *address* in decimal or C-language notation. If BASE is not specified, the default starting base address is 0x400000. If DOWN is used, BASE must be specified, and *address* sets the end of the range of base addresses.|
|**BASEFILE**|Creates a file named COFFBASE.TXT, which is a text file in the format expected by LINK's /BASE option.|
|**DOWN**|Tells EDITBIN to reassign base addresses downward from an ending address. The files are reassigned in the order specified, with the first file located in the highest possible address below the end of the address range. BASE must be used with DOWN to ensure sufficient address space for basing the files. To determine the address space needed by the specified files, run EDITBIN with /REBASE on the files and add 64 KB to the displayed total size.|

## See also

[EDITBIN Options](editbin-options.md)
