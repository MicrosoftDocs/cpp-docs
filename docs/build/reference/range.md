---
description: "Learn more about: /RANGE"
title: "/RANGE"
ms.date: "11/04/2016"
f1_keywords: ["/RANGE"]
helpviewer_keywords: ["/RANGE dumpbin option", "-RANGE dumpbin option"]
ms.assetid: 7eeba266-32be-49cc-a350-96bdf541f98a
---
# /RANGE

Modifies the output of dumpbin when used with other dumpbin options, such as /RAWDATA or /DISASM.

## Syntax

```
/RANGE:vaMin[,vaMax]
```

## Parameters

*vaMin*<br/>
The virtual address at which you want the dumpbin operation to begin.

*vaMax*<br/>
(Optional) The virtual address at which you want the dumpbin operation to end. If not specified, dumpbin will go to the end of the file.

## Remarks

To see the virtual addresses for an image, use the map file for the image (RVA + Base), the **/DISASM** or **/HEADERS** option of dumpbin, or the disassembly window in the Visual Studio debugger.

## Example

In this example, **/range** is used to modify the display of the **/disasm** option. In this example, the starting value is expressed as a decimal number and the ending value is specified as a hex number.

```
dumpbin /disasm /range:4219334,0x004061CD t.exe
```

## See also

[DUMPBIN Options](dumpbin-options.md)
