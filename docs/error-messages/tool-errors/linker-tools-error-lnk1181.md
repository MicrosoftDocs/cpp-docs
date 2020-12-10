---
description: "Learn more about: Linker Tools Error LNK1181"
title: "Linker Tools Error LNK1181"
ms.date: "08/22/2018"
f1_keywords: ["LNK1181"]
helpviewer_keywords: ["LNK1181"]
ms.assetid: 984b0db6-e331-4284-b2a7-a212fe96c486
---
# Linker Tools Error LNK1181

cannot open input file 'filename'

The linker could not find `filename` because it does not exist or the path was not found.

Some common causes for error LNK1181 include:

- `filename` is referenced as an additional dependency on the linker line, but the file does not exist.

- A **/LIBPATH** statement that specifies the directory containing `filename` is missing.

To resolve the above issues, ensure any files referenced on the linker line are present on the system.  Also ensure there is a **/LIBPATH** statement for each directory containing a linker-dependent file.

For more information, see [.lib Files as Linker Input](../../build/reference/dot-lib-files-as-linker-input.md).

Another possible cause for LNK1181 is that a long file name with embedded spaces was not enclosed in quotation marks.  In that case, the linker will only recognize a file name up to the first space, and then assume a file extension of .obj.  The solution to this situation is to enclose the long file name (path plus file name) in quotation marks.

Compiling with the [/P (Preprocess to a File)](../../build/reference/p-preprocess-to-a-file.md) option can result in LNK1181 because that option suppresses the creation of .obj files.

## See also

[/LIBPATH (Additional Libpath)](../../build/reference/libpath-additional-libpath.md)
