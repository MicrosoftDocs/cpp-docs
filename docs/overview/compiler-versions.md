---
title: "Microsoft C++ (MSVC) compiler versioning"
description: "Visual Studio includes a Microsoft C++ (MSVC) compiler. Learn about the versioning system used for the compiler."
ms.date: 05/28/2026
ms.service: "visual-cpp"
ms.subservice: "tools"
helpviewer_keywords: ["Visual C++, platforms supported", "platforms [C++]"]
#customer intent: As a C++ developer using Visual Studio, I need to be aware of different versions of the Microsoft C++ compiler for consistency in my organization's production process.
---
# Microsoft C++ (MSVC) compiler versioning

The Microsoft C++ (MSVC) compiler version consists of four fields:

- M: major version (two digits)
- N: minor version (two digits)
- B: build version (five digits)
- R: revision version

Microsoft-specific compiler macros encode these fields as follows:

- `_MSC_VER` = MMNN
- `_MSC_FULL_VER` = MMNNBBBBB
- `_MSC_BUILD` = R

For example, the compiler version for Visual Studio 2022 version 17.9.0 is 19.39.33519:

- The major version is 19
- The minor version is 39
- The build version is 33519
- The revision version is 0

The macros reflect these values like this:

- `_MSC_VER = 1939`
- `_MSC_FULL_VER = 193933519`
- `_MSC_BUILD` (the revision) is 0

> [!NOTE]
> Visual Studio 2019 versions 16.8 and 16.9 share the same major and minor versions, and so have the same value for `_MSC_VER`. This is also true for Visual Studio 2019 versions 16.10 and 16.11. To distinguish them, use `_MSC_FULL_VER` as described in [Service releases starting with Visual Studio 2017](#service-releases-starting-with-visual-studio-2017).

## Visual Studio channels

All MSVC Build Tools are available through the Visual Studio Installer.

The [Visual Studio Stable Channel](https://visualstudio.microsoft.com) gets monthly updates and includes the latest supported MSVC Build Tools. The [Visual Studio Insiders Channel](https://visualstudio.microsoft.com/insiders) updates more often, so you can try upcoming MSVC changes sooner. For more information about the release cadence, see [Visual Studio 2026 release rhythm](/visualstudio/releases/2026/release-rhythm) and [Visual Studio Insiders release notes](/visualstudio/releases/2026/release-notes-insiders).

Each Visual Studio update receives updates to all of the MSVC build toolsets:
- The **preview** toolset receives new features and fixes that the development team completed since the previous update.
- The **default** and **older in-support** toolsets receive only targeted bug fixes.

Visual Studio Insiders users get early access to MSVC releases:
- On the Insiders Channel, preview toolsets update approximately weekly.
- On the Insiders Channel, new toolsets are available as release candidates about a month before they reach the Stable Channel, giving Insiders users time to validate the toolset and report issues.

### Install specific MSVC toolsets

- To install only the default MSVC toolset, install the `Desktop development with C++` workload.
- To install the preview toolset, run the Visual Studio Installer and select **MSVC Build Tools for &lt;arch&gt; (Preview)**. For more information, see [MSVC Build Tools Preview](https://aka.ms/msvc/preview).
- To install an older in-support 14.5x toolset, run the Visual Studio Installer, open the **Individual Components** tab, and select the specific 14.5x toolset.
- To restore a previously installed toolset after an upgrade—for example, when 14.50 is replaced by 14.51—add the older toolset back from the **Individual Components** tab.
- To install only the Build Tools without the full Visual Studio IDE, use the [Visual Studio Stable Build Tools SKU](https://aka.ms/vs/stable/vs_BuildTools.exe).
- Some out-of-support toolsets (labeled **(Out of support)**) may also be available in the Visual Studio Installer. These toolsets don't receive any updates and may be removed in the future. We strongly recommend moving to a supported version.

## Version macros

Recall that the version number consists of four fields:

- M: major version (two digits)
- N: minor version (two digits)
- B: build version (five digits)
- R: revision version

[`_MSC_VER`](../preprocessor/predefined-macros.md) distinguishes between major and minor releases. It has the form: MMNN.

[`_MSC_FULL_VER`](../preprocessor/predefined-macros.md) represents the major, minor, and build version of the compiler. It has the form: MMNNBBBBB. Use it to distinguish between different versions of the compiler, including servicing releases. For more information about Visual Studio 2019 versions 16.8, 16.9, 16.10 and 16.11, see [Service releases starting with Visual Studio 2017](#service-releases-starting-with-visual-studio-2017).

**[`_MSC_BUILD`](../preprocessor/predefined-macros.md)** represents the revision version of the compiler. It has the form: R. Use it to distinguish between compiler revisions.

When the major version changed between Visual Studio 2013 and Visual Studio 2015, `_MSC_VER` reflects the change by going from 1800 to 1900.

An example of a minor change is from Visual Studio 2022 version 17.1 to Visual Studio 2022 version 17.2. In that case, `_MSC_VER` changed from 1931 to 1932.

The following table lists the Visual Studio version that corresponds to each MSVC compiler (`_MSC_VER`) and MSVC Build Tools release, together with support status. EOL means end of life.

| Visual Studio version | `_MSC_VER` | MSVC Build Tools version | Support | More info |
|--|--|--|--|--|
| Visual Studio 6.0 | 1200 | 6.0 | EOL | [Visual Studio lifecycle policy](/visualstudio/releases/2026/servicing-vs#support-for-older-versions) |
| Visual Studio .NET 2002 (7.0) | 1300 | 7.0 | EOL | [Visual Studio lifecycle policy](/visualstudio/releases/2026/servicing-vs#support-for-older-versions) |
| Visual Studio .NET 2003 (7.1) | 1310 | 7.1 | EOL | [Visual Studio lifecycle policy](/visualstudio/releases/2026/servicing-vs#support-for-older-versions) |
| Visual Studio 2005 (8.0) | 1400 | 8.0 | EOL | [Visual Studio lifecycle policy](/visualstudio/releases/2026/servicing-vs#support-for-older-versions) |
| Visual Studio 2008 (9.0) | 1500 | 9.0 | EOL | [Visual Studio lifecycle policy](/visualstudio/releases/2026/servicing-vs#support-for-older-versions) |
| Visual Studio 2010 (10.0) | 1600 | 10.0 | EOL | [Visual Studio lifecycle policy](/visualstudio/releases/2026/servicing-vs#support-for-older-versions) |
| Visual Studio 2012 (11.0) | 1700 | 11.0 | EOL | [Visual Studio lifecycle policy](/visualstudio/releases/2026/servicing-vs#support-for-older-versions) |
| Visual Studio 2013 (12.0) | 1800 | 12.0 | EOL | [Visual Studio lifecycle policy](/visualstudio/releases/2026/servicing-vs#support-for-older-versions) |
| Visual Studio 2015 (14.0) | 1900 | 14.0 | EOL | [Visual Studio lifecycle policy](/visualstudio/releases/2026/servicing-vs#support-for-older-versions) |
| Visual Studio 2017 RTW (15.0) | 1910 | 14.10 | EOL | [Visual Studio 2017 lifecycle](/lifecycle/products/visual-studio-2017) |
| Visual Studio 2017 version 15.3 | 1911 | 14.11 | EOL | [Visual Studio 2017 lifecycle](/lifecycle/products/visual-studio-2017) |
| Visual Studio 2017 version 15.5 | 1912 | 14.12 | EOL | [Visual Studio 2017 lifecycle](/lifecycle/products/visual-studio-2017) |
| Visual Studio 2017 version 15.6 | 1913 | 14.13 | EOL | [Visual Studio 2017 lifecycle](/lifecycle/products/visual-studio-2017) |
| Visual Studio 2017 version 15.7 | 1914 | 14.14 | EOL | [Visual Studio 2017 lifecycle](/lifecycle/products/visual-studio-2017) |
| Visual Studio 2017 version 15.8 | 1915 | 14.15 | EOL | [Visual Studio 2017 lifecycle](/lifecycle/products/visual-studio-2017) |
| Visual Studio 2017 version 15.9 | 1916 | 14.16 | Apr 13, 2027 | [Visual Studio 2017 lifecycle](/lifecycle/products/visual-studio-2017) |
| Visual Studio 2019 RTW (16.0) | 1920 | 14.20 | EOL | [Visual Studio 2019 lifecycle](/lifecycle/products/visual-studio-2019) |
| Visual Studio 2019 version 16.1 | 1921 | 14.21 | EOL | [Visual Studio 2019 lifecycle](/lifecycle/products/visual-studio-2019) |
| Visual Studio 2019 version 16.2 | 1922 | 14.22 | EOL | [Visual Studio 2019 lifecycle](/lifecycle/products/visual-studio-2019) |
| Visual Studio 2019 version 16.3 | 1923 | 14.23 | EOL | [Visual Studio 2019 lifecycle](/lifecycle/products/visual-studio-2019) |
| Visual Studio 2019 version 16.4 | 1924 | 14.24 | EOL | [Visual Studio 2019 lifecycle](/lifecycle/products/visual-studio-2019) |
| Visual Studio 2019 version 16.5 | 1925 | 14.25 | EOL | [Visual Studio 2019 lifecycle](/lifecycle/products/visual-studio-2019) |
| Visual Studio 2019 version 16.6 | 1926 | 14.26 | EOL | [Visual Studio 2019 lifecycle](/lifecycle/products/visual-studio-2019) |
| Visual Studio 2019 version 16.7 | 1927 | 14.27 | EOL | [Visual Studio 2019 lifecycle](/lifecycle/products/visual-studio-2019) |
| Visual Studio 2019 version 16.8, 16.9 <sup>a</sup> | 1928 | 14.28 | EOL | [Visual Studio 2019 lifecycle](/lifecycle/products/visual-studio-2019) |
| Visual Studio 2019 version 16.10, 16.11 <sup>b</sup> | 1929 | 14.29 | Apr 10, 2029 | [Visual Studio 2019 lifecycle](/lifecycle/products/visual-studio-2019) |
| Visual Studio 2022 RTW 17.0 | 1930 | 14.30 | EOL | [Visual Studio 2022 lifecycle](/lifecycle/products/visual-studio-2022) |
| Visual Studio 2022 version 17.1 | 1931 | 14.31 | EOL | [Visual Studio 2022 lifecycle](/lifecycle/products/visual-studio-2022) |
| Visual Studio 2022 version 17.2 | 1932 | 14.32 | EOL | [Visual Studio 2022 lifecycle](/lifecycle/products/visual-studio-2022) |
| Visual Studio 2022 version 17.3 | 1933 | 14.33 | EOL | [Visual Studio 2022 lifecycle](/lifecycle/products/visual-studio-2022) |
| Visual Studio 2022 version 17.4 | 1934 | 14.34 | EOL | [Visual Studio 2022 lifecycle](/lifecycle/products/visual-studio-2022) |
| Visual Studio 2022 version 17.5 | 1935 | 14.35 | EOL | [Visual Studio 2022 lifecycle](/lifecycle/products/visual-studio-2022) |
| Visual Studio 2022 version 17.6 | 1936 | 14.36 | EOL | [Visual Studio 2022 lifecycle](/lifecycle/products/visual-studio-2022) |
| Visual Studio 2022 version 17.7 | 1937 | 14.37 | EOL | [Visual Studio 2022 lifecycle](/lifecycle/products/visual-studio-2022) |
| Visual Studio 2022 version 17.8 | 1938 | 14.38 | EOL | [Visual Studio 2022 lifecycle](/lifecycle/products/visual-studio-2022) |
| Visual Studio 2022 version 17.9 | 1939 | 14.39 | EOL | [Visual Studio 2022 lifecycle](/lifecycle/products/visual-studio-2022) |
| Visual Studio 2022 version 17.10 | 1940 | 14.40 | EOL | [Visual Studio 2022 lifecycle](/lifecycle/products/visual-studio-2022) |
| Visual Studio 2022 version 17.11 | 1941 | 14.41 | EOL | [Visual Studio 2022 lifecycle](/lifecycle/products/visual-studio-2022) |
| Visual Studio 2022 version 17.12 | 1942 | 14.42 | Jul 14, 2026 | [Visual Studio 2022 lifecycle](/lifecycle/products/visual-studio-2022) |
| Visual Studio 2022 version 17.13 | 1943 | 14.43 | EOL | [Visual Studio 2022 lifecycle](/lifecycle/products/visual-studio-2022) |
| Visual Studio 2022 version 17.14 | 1944 | 14.44 | Jan 13, 2032 | [Visual Studio 2022 lifecycle](/lifecycle/products/visual-studio-2022) |

The following table lists MSVC Build Tools versions for Visual Studio 2026 and later. Starting with Visual Studio 2026, MSVC versioning is decoupled from Visual Studio versioning. EOL (end of life) dates are defined by the [MSVC lifecycle policy](https://aka.ms/msvc/lifecycle).

| MSVC Build Tools version | `_MSC_VER` | Support | EOL date | More info |
|--|--|--|--|--|
| 14.50 | 1950 | Long-term | Nov 2028 | [What's New for C++ developers in Visual Studio 2026 version 18.0](https://devblogs.microsoft.com/cppblog/whats-new-for-cpp-developers-in-visual-studio-2026-version-18-0/) |
| 14.51 | 1951 | Standard | Feb 2027 | [MSVC lifecycle policy](https://aka.ms/msvc/lifecycle) |
| 14.52 | 1952 | Standard | Preview<sup>c</sup> | [MSVC lifecycle policy](https://aka.ms/msvc/lifecycle) |

<sup>a</sup> Visual Studio 2019 versions 16.8 and 16.9 share the same major and minor versions, and so have the same value for `_MSC_VER`. To distinguish them, use `_MSC_FULL_VER`. The minimum value of `_MSC_FULL_VER` for Visual Studio 2019 version 16.8 is 192829333. The minimum value of `_MSC_FULL_VER` for Visual Studio 2019 version 16.9 is 192829910.

<sup>b</sup> Visual Studio 2019 versions 16.10 and 16.11 share the same major and minor versions, and so have the same value for `_MSC_VER`. To distinguish them, use `_MSC_FULL_VER`. The minimum value of `_MSC_FULL_VER` for Visual Studio 2019 version 16.10 is 192929917. The minimum value of `_MSC_FULL_VER` for Visual Studio 2019 version 16.11 is 192930129.

<sup>c</sup> MSVC Build Tools version 14.52 is in preview. The EOL date will be established upon general availability.

## A brief history of Microsoft C++ compiler versioning

### Visual Studio 6.0 through Visual Studio 2015 (14.0)

- For major releases, `_MSC_VER` increases by 100. `_MSC_FULL_VER` increases by 10,000,000.
- For minor releases, `_MSC_VER` increases by 10. `_MSC_FULL_VER` increases by 1,000,000.

   >[!Note]
   > Visual Studio .NET 2003 was considered a minor release.

### Visual Studio 2017 to Visual Studio 2022

- For major releases, the minor version increases by 10.
- For minor releases, the minor version increases by 1 starting with Visual Studio 2017 version 15.3.

### Visual Studio 2026 and later

The MSVC build tools that ship with Visual Studio 2026 and later start at version 14.50, and `_MSC_VER` starts at 1950. A new MSVC version—14.51/1951, 14.52/1952, and so on, ships every six months. Support follows the [MSVC lifecycle policy](https://aka.ms/msvc/lifecycle).

This versioning system differs from earlier Visual Studio releases because MSVC versioning is now separate from Visual Studio versioning. That means the compiler minor version can stay the same across multiple Visual Studio updates.

At any given time, the Visual Studio Installer can offer several MSVC versions:

- A preview toolset with the newest changes
- The current default toolset
- Earlier toolsets that are still in support

For example, as of May 2026:

- **14.52** is the preview toolset and gets regular feature and fix updates.
- **14.51** is the default toolset released in May 2026, with 9 months of support.
- **14.50** is the toolset released in November 2025, with 3 years of support.

By November 2026, we expect **14.53** to become the new preview toolset, **14.52** to become the default toolset, and **14.51** and **14.50** to remain in support under the [MSVC lifecycle policy](https://aka.ms/msvc/lifecycle).

Microsoft changed to this model for three reasons:
- It shortens the time between MSVC feature development and preview availability from months to a week or so.
- It keeps the MSVC release cadence aligned with Visual Studio and long-term servicing releases aligned with .NET Long Term Support (LTS) releases.
- It reduces the complexity of servicing older compilers.

### Service releases starting with Visual Studio 2017

Use `_MSC_FULL_VER` to distinguish servicing releases. The build field (the BBBBB in the MMNNBBBBB version number) typically increases by 1.

For example, `_MSC_FULL_VER` is useful to distinguish Visual Studio 2019 version 16.8 from 16.9, and Visual Studio 2019 version 16.10 from 16.11. Those versions share the same major and minor versions, so they have the same value for `_MSC_VER`.

To distinguish these versions, use `_MSC_FULL_VER`.\
The minimum value of `_MSC_FULL_VER` for Visual Studio 2019 version 16.8 is 192829333.\
The minimum value of `_MSC_FULL_VER` for Visual Studio 2019 version 16.9 is 192829910.

## See also

- [Install the Microsoft C++ (MSVC) Build Tools](acquire-msvc.md)
- [`_MSC_VER`](../preprocessor/predefined-macros.md)
- [Visual C++ compiler version blog post](https://devblogs.microsoft.com/cppblog/visual-c-compiler-version/)
