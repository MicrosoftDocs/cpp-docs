---
description: "Learn more about: Linker Tools Error LNK1318"
title: "Linker Tools Error LNK1318"
ms.date: "05/29/2018"
f1_keywords: ["LNK1318"]
helpviewer_keywords: ["LNK1318"]
---
# Linker Tools Error LNK1318

> Unexpected PDB error; *cause* '*details*'

The linker encountered an unexpected error when opening, reading, or writing to a PDB file.

This error message is produced for uncommon issues in PDB files. The *cause* and *details* represent the information available to the linker when the failure occurred. This may not be very useful, as common errors when dealing with PDB files have separate, more informative error messages.

Because the source of the error is uncommon, there is only generic advice available for resolving this issue:

- Perform a clean operation in your build directories, and then do a full build of your solution.

- Reboot your computer, or check for stray or unresponsive mspdbsrv.exe processes and kill them in TaskManager.

- Turn off antivirus checks in your project directories.

- Use the [/Zf](../../build/reference/zf.md) compiler option if using [/MP](../../build/reference/mp-build-with-multiple-processes.md) with MSBuild or another parallel build process.

- Try building by using the 64-bit hosted toolset.

- Serialize linking to mitigate parallel link issues if needed. This error can be caused if mspdbsrv.exe is launched by one instance of link, and is shut down before another instance of link is done using it. The downside to this fix is that your project builds may take considerably longer to complete.
