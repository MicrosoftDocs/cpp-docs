---
description: "Learn more about: Linker Tools Error LNK1123"
title: "Linker Tools Error LNK1123"
ms.date: "12/29/2017"
f1_keywords: ["LNK1123"]
helpviewer_keywords: ["LNK1123"]
---
# Linker Tools Error LNK1123

> failure during conversion to COFF: file invalid or corrupt

Input files must have the Common Object File Format (COFF) format. If an input file is not COFF, the linker automatically tries to convert 32-bit OMF objects to COFF, or runs CVTRES.EXE to convert resource files. This message indicates that the linker could not convert the file. This can also occur when using an incompatible version of CVTRES.EXE from another installation of Visual Studio, the Windows Development Kit, or .NET Framework.

> [!NOTE]
> If you are running an earlier version of Visual Studio, automatic conversion may not be supported.

## To fix the problem

- Apply all service packs and updates for your version of Visual Studio. This is particularly important for Visual Studio 2010.

- Try building with incremental linking disabled. On the menu bar, choose **Project**, **Properties**. In the **Property Pages** dialog box, expand **Configuration Properties**, **Linker**. Change the value of **Enable Incremental Linking** to **No**.

- Verify that the version of CVTRES.EXE found first in your PATH environment variable matches the version of the build tools, or the version of the Platform Toolset, used by your project.

- Try turning off the Embed Manifest option. On the menu bar, choose **Project**, **Properties**. In the **Property Pages** dialog box, expand **Configuration Properties**, **Manifest Tool**, **Input and Output**. Change the value of **Embed Manifest** to **No**.

- Make sure that the file type is valid. For example, make sure that an OMF object is 32-bit and not 16-bit. For more information, see [.Obj Files as Linker Input](../../build/reference/dot-obj-files-as-linker-input.md) and [PE Format](/windows/win32/Debug/pe-format).

- Make sure that the file is not corrupt. Rebuild it, if necessary.

## See also

[.Obj Files as Linker Input](../../build/reference/dot-obj-files-as-linker-input.md)<br/>
[EDITBIN Reference](../../build/reference/editbin-reference.md)<br/>
[DUMPBIN Reference](../../build/reference/dumpbin-reference.md)
