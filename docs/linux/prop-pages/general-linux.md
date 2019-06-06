---
title: "General Properties (Linux C++ Project)| Microsoft Docs"
ms.date: "06/07/2019"
ms.assetid: 56c800a9-3df9-4196-87b2-81adb00e4767
---
# General Properties (Linux C++)

Property | Description | Choices
--- | ---| ---
Output Directory | Specifies a relative path to the output file directory; can include environment variables.
Intermediate Directory | Specifies a relative path to the intermediate file directory; can include environment variables.
Target Name | Specifies a file name that this project will generate.
Target Extension | Specifies a file extension that this project will generate. (Example: .a)
Extensions to Delete on Clean | Semi-colon delimited wildcard specification for which files in the intermediate directory to delete on clean or rebuild.
Build Log File | Specifies the build log file to write to when build logging is enabled.
Platform Toolset | Specifies the toolset used for building the current configuration; If not set, the default toolset is used
Remote Build Machine | The target machine or device to use for remote build, deploy and debug. **Visual Studio 2019 version 16.1** A different machine for debugging can be specified in the [Debugging](debugging-linux.md) page.
Remote Build Root Directory | Specifies a path to a directory on the remote machine or device.
Remote Build Project Directory | Specifies a path to a directory on the remote machine or device for the project.
Configuration Type | Specifies the type of output this configuration generates. | **Dynamic Library (.so)** - Dynamic Library (.so)<br>**Static library (.a)** - Static Library (.a)<br>**Application (.out)** - Application (.out)<br>**Makefile** - Makefile<br>
Use of STL | Specifies which C++ Standard Library to use for this configuration. | **Shared GNU Standard C++ Library**<br>**Static GNU Standard C++ Library (-static)**<br>
