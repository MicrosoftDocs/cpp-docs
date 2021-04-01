---
description: "Learn more about: Fatal Error C1090 PDB API call failed"
title: "Fatal Error C1090"
ms.date: 04/01/2021
f1_keywords: ["C1090"]
helpviewer_keywords: ["C1090"]
---
# Fatal Error C1090

> PDB API call failed, error code '*error-number*': *message*

An error occurred in processing a PDB file.

Error C1090 is a catch-all for uncommon compiler PDB file errors that aren't reported separately. We only have generic advice for resolving this issue:

- Do a clean operation in your build directories, and then do a full build of your solution.

- Reboot your computer, or check for stray or unresponsive mspdbsrv.exe processes and kill them in TaskManager.

- Turn off antivirus checks in your project directories.

- Use the [`/Zf`](../../build/reference/zf.md) compiler option if using [`/MP`](../../build/reference/mp-build-with-multiple-processes.md) with MSBuild or another parallel build process.

- Try building by using the 64-bit hosted toolset.

For more troubleshooting or workaround information, search for this error on [Developer Community](https://aka.ms/vsfeedback/browsecpp) or [Stack Overflow](https://stackoverflow.com/search?q=C1090).

You can also report the issue on Developer Community. For more information, see [How to report a problem with the Microsoft C++ toolset](../../overview/how-to-report-a-problem-with-the-visual-cpp-toolset.md).
