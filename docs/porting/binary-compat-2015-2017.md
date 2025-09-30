---
title: "C++ binary compatibility 2015-2022"
description: "Describes how binary compatibility works between compiled C++ files in Visual Studio 2015, 2017, 2019, and 2022. One Microsoft Visual C++ Redistributable package works for all three versions."
ms.date: 03/07/2024
helpviewer_keywords: ["binary compatibility, Visual C++"]
---
# C++ binary compatibility between Visual Studio versions

The Microsoft C++ (MSVC) compiler toolsets in Visual Studio 2013 and earlier don't guarantee binary compatibility across major versions. You can't link object files, static libraries, dynamic libraries, and executables built by different versions of these toolsets. The ABIs, object formats, and runtime libraries are incompatible.

We've changed this behavior in Visual Studio 2015 and later versions. The runtime libraries and apps compiled by any of these versions of the compiler are binary-compatible. It's reflected in the C++ toolset major number, which starts with 14 for all versions since Visual Studio 2015. (The toolset version is v140 for Visual Studio 2015, v141 for 2017, v142 for 2019, and v143 for 2022). Say you have third-party libraries built by Visual Studio 2015. You can still use them in an application built by Visual Studio 2017, 2019, or 2022. There's no need to recompile with a matching toolset. The latest version of the Microsoft Visual C++ Redistributable package (the Redistributable) works for all of them.

## <a name="restrictions"></a> Restrictions on binary compatibility

There are three important restrictions on binary compatibility between the v140, v141, v142, and v143 toolsets and minor numbered version updates:

- Binaries created with different versions of the v140, v141, v142, and v143 toolsets can be combined. The key rule is that the linker should only work with inputs built by a toolset that is the same version (or earlier) as itself. This applies to apps, import libraries, static libraries, and other files as described in [LINK input files](../build/reference/link-input-files.md). In some cases, an import library for an [implicitly linked](../build/linking-an-executable-to-a-dll.md#implicit-linking) DLL built by a later version of the toolset can be linked using an earlier version of the toolset--especially if the import library strictly uses `extern "C"` for the imports/exports. Here are some examples of what this all means:
    - An app compiled with a 2017 toolset (v141, versions 15.0 to 15.9) can be linked to a static library compiled with Visual Studio 2022 version 17.8 (v143), but the linking must be done using a version 17.8 or later toolset.
    - Apps and libraries built using VS 2015, 2017, 2019, or 2022 can be linked together, but the linking must be done using a version of the toolset that is as recent as, or more recent than, the most recent toolset used to build any of the binaries you pass to the linker. For example, given three binaries built with toolsets from VS 2015 version 14.3, VS 2017 version 15.9, and VS 2019 version 16.11, you can link them using any toolset version that is 16.11 or later.
    - If a DLL is built with a newer toolset, the import library can sometimes be used with older toolsets if all of the exports follow the C language calling convention (`extern "C"`). However, the only officially supported case is consuming a newer windows SDK with an older toolset.
- The Redistributable your app uses has a similar binary-compatibility restriction. When you mix binaries built by different supported versions of the toolset, the Redistributable version must be at least as new as the latest toolset used by any app component.
- Static libraries or object files compiled using the [`/GL` (Whole program optimization)](../build/reference/gl-whole-program-optimization.md) compiler switch or linked using [`/LTCG` (Link-time code generation)](../build/reference/ltcg-link-time-code-generation.md) *aren't* binary-compatible across versions, including minor version updates. All object files and libraries compiled using **`/GL`** and **`/LTCG`** must use exactly the same toolset for the compile and the final link. For example, code built by using **`/GL`** in the Visual Studio 2019 version 16.7 toolset can't be linked to code built by using **`/GL`** in the Visual Studio 2019 version 16.8 toolset. The compiler emits [Fatal error C1047](../error-messages/compiler-errors-1/fatal-error-c1047.md).

## Upgrade the Microsoft Visual C++ Redistributable from Visual Studio 2015 and later

We've kept the Microsoft Visual C++ Redistributable major version number the same for Visual Studio 2015, 2017, 2019, and 2022. That means only one instance of the Redistributable can be installed at a time. A newer version overwrites any older version that's already installed. For example, one app may install the Redistributable from Visual Studio 2015. Then, another app installs the Redistributable from Visual Studio 2022. The 2022 version overwrites the older version, but because they're binary-compatible, the earlier app still works fine. We make sure the latest version of the Redistributable has all the newest features, security updates, and bug fixes. That's why we always recommend you upgrade to the latest available version.

Similarly, you can't install an older Redistributable when a newer version is already installed. The installer reports an error if you try. You'll see an error like this if you install the 2017 or 2019 Redistributable on a machine that already has the 2022 version:

```Output
0x80070666 - Another version of this product is already installed. Installation of this version cannot continue. To configure or remove the existing version of this product, use Add/Remove Programs on the Control Panel.
```

This error is by design. We recommend you keep the newest version installed. Make sure your installer can recover from this error silently.

> [!IMPORTANT]
> Runtime library support for Windows XP is no longer available in the latest Visual C++ Redistributable for Visual Studio. The last redistributable to support Windows XP is version 16.7 (file version 14.27.29114.0). If your Windows XP apps are deployed with or updated to a later version of the redistributable, the apps won't run. For more information, and how to get a version of the redistributable that supports Windows XP, see [Configuring programs for Windows XP](../build/configuring-programs-for-windows-xp.md).

## See also

[Visual C++ change history](../porting/visual-cpp-change-history-2003-2015.md)\
[The latest supported Visual C++ Redistributable downloads](../windows/latest-supported-vc-redist.md)\
[How to audit Visual C++ Runtime version usage](../windows/redist-version-auditing.md)\
[Lifecycle FAQ - Visual C++ Redistributable and runtime libraries](/lifecycle/faq/visual-c-faq)
