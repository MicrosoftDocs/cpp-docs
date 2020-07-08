---
title: "/HEAP"
description: "The MSVC linker or EDITBIN /HEAP option sets the total heap size, and optionally the size of additional heap blocks."
ms.date: 07/07/2020
f1_keywords: ["/heap"]
helpviewer_keywords: ["heap allocation, setting heap size", "HEAP editbin option", "-HEAP editbin option", "/HEAP editbin option"]
ms.assetid: 6ce759b5-75b7-44ff-a5fd-3a83a0ba9a48
---
# `/HEAP`

Sets the size of the heap in bytes. This option only applies to executable files.

## Syntax

> **`/HEAP:`**_`reserve`_\[**`,`**_`commit`_]

## Remarks

The *`reserve`* argument specifies the total initial heap allocation in virtual memory. The **`/HEAP`** linker or [EDITBIN](editbin-reference.md) option rounds up the specified value to the nearest multiple of 4 bytes. By default, the heap size is 1 MB.

The optional *`commit`* argument is subject to interpretation by the operating system. On a Windows operating system, it specifies the initial amount of physical memory to allocate. It also specifies how much more memory to allocate when the heap is expanded. Committed virtual memory causes space to be reserved in the paging file. A higher *`commit`* value allows the system to allocate memory less often when the app needs more heap space but increases the memory requirements and possibly the app startup duration. The *`commit`* value must be less than or equal to the *`reserve`* value. The default value is 4 KB.

Specify the *`reserve`* and *`commit`* values in decimal, C-language hexadecimal, or octal notation. For example, a value of 1 MB can be specified as 1048576 in decimal, or as 0x100000 in hexadecimal, or as 04000000 in octal. The default values are equivalent to the option **`/HEAP:1048576,4096`**.

### Example

This example link command creates an executable *main.exe* that has heap reserve of 2 MB. The initial heap and later heap expansions come in blocks of 64 KB:

**`link /heap:0x200000,0x10000 main.obj`**

### To set this linker option in Visual Studio

1. Open the project **Property Pages** dialog box. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **System** property page.

1. Set the **Heap Reserve Size** and **Heap Commit Size** properties, then choose **OK** or **Apply** to save your changes.

## See also

[EDITBIN options](editbin-options.md)\
[MSVC linker options](linker-options.md)
