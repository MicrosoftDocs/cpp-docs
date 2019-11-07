---
title: "C++ binary compatibility between Visual Studio 2015 and Visual Studio 2019"
description: Describes differences in binary compatibility between C++ files in Visual Studio 2015 and Visual Studio 2019.
author: mikeblome
ms.author:
ms.date: "10/17/2019"
ms.topic:
ms.service:
helpviewer_keywords: ["binary compatibility, Visual C++"]
ms.assetid: 591580f6-3181-4bbe-8ac3-f4fbaca949e6
---

# C++ binary compatibility between Visual Studio 2015 and Visual Studio 2019

In Visual Studio 2013 and earlier, binary compatibility isn't guaranteed between object files (OBJs), static libraries (LIBs), dynamic libraries (DLLs), and executables (EXEs) that were built by  different versions of the compiler toolset and runtime libraries.

In Visual Studio 2015 and later, the C++ toolset major number is 14 (v140 for Visual Studio 2015, v141 for Visual Studio 2017, and v142 for Visual Studio 2019). This numbering reflects the fact that both the runtime libraries and the applications compiled with any of these versions of the compiler are binary-compatible. Therefore, if you have a third-party library that was built with Visual Studio 2015, you don't have to recompile it in order to consume it from an application that was built with Visual Studio 2017 or Visual Studio 2019.

The only exception to this rule is that static libraries or object files that are compiled with the `/GL` compiler switch are *not* binary-compatible.

When you mix binaries built with different supported versions of the Microsoft C++ (MSVC) toolset, the Visual C++ redistributable package that your application runs on can't be older than any of the toolset versions used to build your app or any libraries it consumes.

## Upgrade Visual C++ redistributable package from Visual Studio 2015 or 2017 to Visual Studio 2019

Because we have preserved binary compatibility and kept the major version (14) the same for the Visual C++ redistributable package for Visual Studio 2015, 2017, and 2019, only one version of the Visual C++ redistributable package can be installed from those at any one time. A newer version overwrites an older version that's already installed. If you have the Visual C++ redistributable package from Visual Studio 2015 or 2017 and then later install Visual Studio 2019, the 2019 version overwrites the older version. Because we make sure that the latest version has all the newest features and bug fixes (including security fixes), we always recommend that you upgrade to the latest available version.

Similarly, we don't let you install an older version of the Visual C++ redistributable package on a machine where a newer version is already installed. Installing the Visual C++ redistributable package from Visual Studio 2015 or 2017 on a machine that already has the 2019 version triggers an installation failure. The error resembles the following:

```
*0x80070666 - Another version of this product is already installed. Installation of this version cannot continue. To configure or remove the existing version of this product, use Add/Remove Programs on the Control Panel.*.
```

This error is by design. We recommend keeping the newest version installed.

## See also

* [Visual C++ change history](../porting/visual-cpp-change-history-2003-2015.md)
* [The latest supported Visual C++ redistributable downloads](https://support.microsoft.com/en-us/help/2977003/the-latest-supported-visual-c-downloads) 
