---
title: "C++ binary compatibility between Visual Studio 2015 and Visual Studio 2019"
ms.date: "10/17/2019"
helpviewer_keywords: ["binary compatibility, Visual C++"]
ms.assetid: 591580f6-3181-4bbe-8ac3-f4fbaca949e6
---
# C++ binary compatibility between Visual Studio 2015 and Visual Studio 2019

In Visual Studio 2013 and earlier, binary compatibility between object files (OBJs), static libraries (LIBs), dynamic libraries (DLLs), and executables (EXEs) built by using different versions of the compiler toolset and runtime libraries was not guaranteed. 

In Visual Studio 2015 and later, the C++ toolset major number is 14 (v140 for Visual Studio 2015, v141 for Visual Studio 2017, and v142 for Visual Studio 2019). This reflects the fact that both the runtime libraries and the applications compiled with any of these versions of the compiler are binary-compatible. This means that if you have third-party library that was built with Visual Studio 2015, you don't have to recompile it in order to consume it from an application that is built with Visual Studio 2017 or Visual Studio 2019.

The only exception to this rule is that static libraries or object files that are compiled with the `/GL` compiler switch are not binary compatible.

When you mix binaries built with different supported versions of the MSVC toolset, the Visual C++ redistributable that your application runs on can't be older than any of the toolset versions used to build your app or any libraries it consumes.

## Upgrade Microsoft Visual C++ Redistributable from Visual Studio 2015 or 2017 to Visual Studio 2019

Because we have preserved binary compatibility and kept the major version (14) the same for the Visual C++ Redistributable for Visual Studio 2015, 2017, and 2019, only one version of the Visual C++ Redistributable can be installed from those at any time. A newer version will overwrite an older one installed. If you have the Visual C++ Redistributable from Visual Studio 2015 or 2017 and then later install 2019, the 2019 version will overwrite an older version. Because we ensure the latest version will have all the newest features and bug fixes, including security fixes, we always recommend upgrading to the latest available version.

Similarly, we don't allow installing an older version of the Visual C++ Redistributable on a machine where a newer one already exists. Installing the Visual C++ Redistributable from Visual Studio 2015 or 2017 on a machine that already has 2019, will result in an installation failure. The error will look something similar to this:

```
*0x80070666 - Another version of this product is already installed. Installation of this version cannot continue. To configure or remove the existing version of this product, use Add/Remove Programs on the Control Panel.*.
```

This error is by design. We recommend keeping the newest one installed.

## See also

* [Visual C++ change history](../porting/visual-cpp-change-history-2003-2015.md)
* [The latest supported Visual C++ Redistributable downloads](https://support.microsoft.com/en-us/help/2977003/the-latest-supported-visual-c-downloads) 
