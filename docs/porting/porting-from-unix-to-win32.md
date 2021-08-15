---
description: "Learn more about: Running Linux programs on Windows"
title: "Running Linux programs on Windows"
ms.date: "07/31/2019"
helpviewer_keywords: ["Linux [C++], porting to Win32"]
ms.assetid: 3837e4fe-3f96-4f24-b2a1-7be94718a881
---
# Running Linux programs on Windows

To run a Linux program on Windows, you have these options:

- Run the program as-is on the Windows Subsystem for Linux (WSL). In WSL your program executes directly on the machine hardware, not in a virtual machine. WSL also enables direct filesystem calls between Windows and Linux systems, removing the need for SSL transport. WSL is designed as a command-line environment and is not recommended for graphics-intensive applications. For more information, see [Windows Subsystem for Linux Documentation](/windows/wsl/about).
- Run the program as-is in a Linux virtual machine or Docker container, either on your local machine or on Azure. For more information, see [Virtual Machines](https://azure.microsoft.com/services/virtual-machines/) and [Docker on Azure](/azure/docker/).
- Compile the program using gcc or clang in the [MinGW](http://MinGW.org/) or [MinGW-w64](https://sourceforge.net/p/mingw-w64/wiki2/Home/) environments, which provide a translation layer from Linux to Windows system calls.
- Compile and run the program using gcc or clang in the [Cygwin](https://www.cygwin.com/) environment, which provides a more complete Linux environment on Windows compared to MinGW or MinGW-w64.
- Manually port your code from Linux and compile for Windows using Microsoft C++ (MSVC). This involves refactoring platform-independent code into separate libraries, and then re-writing the Linux-specific code to use Windows-specific code (for example, Win32 or DirectX APIs). For applications that require high performance graphics, this is probably the best option.
