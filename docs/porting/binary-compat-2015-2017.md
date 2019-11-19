---
title: "C++ binary compatibility 2015-2019"
description: "Describes how binary compatibility works between compiled C++ files in Visual Studio 2015, 2017, and 2019. One Microsoft Visual C++ Redistributable package works for all three versions."
ms.date: "11/18/2019"
helpviewer_keywords: ["binary compatibility, Visual C++"]
ms.assetid: 591580f6-3181-4bbe-8ac3-f4fbaca949e6
---
# C++ binary compatibility between Visual Studio 2015, 2017, and 2019

The Microsoft C++ (MSVC) compiler toolsets in Visual Studio 2013 and earlier don't guarantee binary compatibility across versions. You can't link object files, static libraries, dynamic libraries, and executables built by different versions. The ABIs, object formats, and runtime libraries are incompatible.

We've changed this behavior in Visual Studio 2015, 2017, and 2019. The runtime libraries and apps compiled by any of these versions of the compiler are binary-compatible. It's reflected in the C++ toolset major number, which is 14 for all three versions. (The toolset version is v140 for Visual Studio 2015, v141 for 2017, and v142 for 2019). Say you have third-party libraries built by Visual Studio 2015. You can still use them in an application built by Visual Studio 2017 or 2019. There's no need to recompile with a matching toolset. The latest version of the Microsoft Visual C++ Redistributable package (the Redistributable) works for all of them.

There are three important restrictions on binary compatibility:

- You can mix binaries built by different versions of the toolset. However, you must use a toolset at least as recent as the most recent binary to link your app. Here's an example: you can link an app compiled using the 2017 toolset to a static library compiled using 2019, if they're linked using the 2019 toolset.

- The Redistributable your app uses has a similar binary-compatibility restriction. When you mix binaries built by different supported versions of the toolset, the Redistributable version must be at least as new as the latest toolset used by any app component.

- Static libraries or object files compiled using the [/GL (Whole program optimization)](../build/reference/gl-whole-program-optimization.md) compiler switch *aren't* binary-compatible across versions. All object files and libraries compiled using `/GL` must use exactly the same toolset for the compile and the final link.

## Upgrade the Microsoft Visual C++ Redistributable from Visual Studio 2015 or 2017 to Visual Studio 2019

We've kept the Microsoft Visual C++ Redistributable major version number the same for Visual Studio 2015, 2017, and 2019. That means only one instance of the Redistributable can be installed at a time. A newer version overwrites any older version that's already installed. For example, one app may install the Redistributable from Visual Studio 2015. Then, another app installs the Redistributable from Visual Studio 2019. The 2019 version overwrites the older version, but because they're binary-compatible, the earlier app still works fine. We make sure the latest version of the Redistributable has all the newest features, security updates, and bug fixes. That's why we always recommend you upgrade to the latest available version.

Similarly, you can't install an older Redistributable when a newer version is already installed. The installer reports an error if you try. You'll see an error like this if you install the 2015 or 2017 Redistributable on a machine that already has the 2019 version:

```Output
0x80070666 - Another version of this product is already installed. Installation of this version cannot continue. To configure or remove the existing version of this product, use Add/Remove Programs on the Control Panel.
```

This error is by design. We recommend you keep the newest version installed. Make sure your installer can recover from this error silently.

## See also

[Visual C++ change history](../porting/visual-cpp-change-history-2003-2015.md)\
[The latest supported Visual C++ Redistributable downloads](https://support.microsoft.com/help/2977003/the-latest-supported-visual-c-downloads)
