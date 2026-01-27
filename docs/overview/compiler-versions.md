---
description: "Learn more about Microsoft C++ compiler versioning."
title: "Microsoft C++ (MSVC) compiler versioning"
ms.date: 02/12/2025
ms.service: "visual-cpp"
ms.subservice: "tools"
helpviewer_keywords: ["Visual C++, platforms supported", "platforms [C++]"]
---
# Microsoft C++ (MSVC) compiler versioning

The Microsoft C++ (MSVC) compiler version consists of four fields:

M - major version (two digits)\
N - minor version (two digits)\
B - build version (five digits)\
R - revision version

Microsoft-specific compiler macros encode these fields as follows:

`_MSC_VER` = MMNN\
`_MSC_FULL_VER` = MMNNBBBBB\
`_MSC_BUILD` = R

For example, the compiler version for Visual Studio 2022 version 17.9.0 is 19.39.33519:
- The major version is 19
- The minor version is 39
- The build version is 33519
- The revision version is 0

The macros reflect these values like this:
- `_MSC_VER = 1939`
- `_MSC_FULL_VER = 193933519`
- `_MSC_BUILD` (the revision) is 0.

>[!Note]
>Visual Studio 2019 versions 16.8 and 16.9 share the same major and minor versions, and so have the same value for `_MSC_VER`. As do Visual Studio 2019 versions 16.10 and 16.11. To distinguish them, use `_MSC_FULL_VER` as described in [Service releases starting with Visual Studio 2017](#service-releases-starting-with-visual-studio-2017).

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

- The compiler minor version is no longer incremented in relation to Visual Studio version updates.
- The minor version increments by 1 with each new MSVC release.
- Not every new Visual Studio version will ship a new MSVC compiler version.

### Service releases starting with Visual Studio 2017

Servicing releases are distinguished by `_MSC_FULL_VER`. The build field (the BBBBB in the MMNNBBBBB version number) typically increases by 1.

For example, two cases where `_MSC_FULL_VER` is useful is to distinguish Visual Studio 2019 version 16.8 from 16.9, and Visual Studio 2019 version 16.10 from 16.11. That's because those versions share the same major and minor versions, and so have the same value for `_MSC_VER`.

To distinguish these versions, use `_MSC_FULL_VER`.\
The minimum value of `_MSC_FULL_VER` for Visual Studio 2019 version 16.8 is 192829333.\
The minimum value of `_MSC_FULL_VER` for Visual Studio 2019 version 16.9 is 192829910.

## Version macros

Recall that the version number consists of four fields:

M - major version (two digits)\
N - minor version (two digits)\
B - build version (five digits)\
R - revision version

**[`_MSC_VER`](../preprocessor/predefined-macros.md)** distinguishes between major and minor releases. It has the form: MMNN.

**[`_MSC_FULL_VER`](../preprocessor/predefined-macros.md)** represents the major, minor, and build version of the compiler. It has the form: MMNNBBBBB. Use it to distinguish between different versions of the compiler, including servicing releases. For more information about Visual Studio 2019 versions 16.8, 16.9, 16.10 and 16.11, see [Service releases starting with Visual Studio 2017](#service-releases-starting-with-visual-studio-2017).

**[`_MSC_BUILD`](../preprocessor/predefined-macros.md)** represents the build version of the compiler. It has the form: R. Use it to distinguish between servicing releases.

When the major version changed between Visual Studio 2013 and Visual Studio 2015, `_MSC_VER` reflected the change by going from 1800 to 1900.

An example of a minor change is from Visual Studio 2022 version 17.1 to Visual Studio 2022 version 17.2. In that case, `_MSC_VER` changed from 1931 to 1932.

The following table lists the Visual Studio version corresponding to each Microsoft C++ compiler (`_MSC_VER`) and MSVC Build Tools release:

| Visual Studio version | `_MSC_VER` | MSVC Build Tools version |
|--|--|--|
| Visual Studio 6.0 | 1200 | 6.0 |
| Visual Studio .NET 2002 (7.0) | 1300 | 7.0 |
| Visual Studio .NET 2003 (7.1) | 1310 | 7.1 |
| Visual Studio 2005 (8.0) | 1400 | 8.0 |
| Visual Studio 2008 (9.0) | 1500 | 9.0 |
| Visual Studio 2010 (10.0) | 1600 | 10.0 |
| Visual Studio 2012 (11.0) | 1700 | 11.0 |
| Visual Studio 2013 (12.0) | 1800 | 12.0 |
| Visual Studio 2015 (14.0) | 1900 | 14.0 |
| Visual Studio 2017 RTW (15.0) | 1910 | 14.10 |
| Visual Studio 2017 version 15.3 | 1911 | 14.11 |
| Visual Studio 2017 version 15.5 | 1912 | 14.12 |
| Visual Studio 2017 version 15.6 | 1913 | 14.13 |
| Visual Studio 2017 version 15.7 | 1914 | 14.14 |
| Visual Studio 2017 version 15.8 | 1915 | 14.15 |
| Visual Studio 2017 version 15.9 | 1916 | 14.16 |
| Visual Studio 2019 RTW 16.0 | 1920 | 14.20 |
| Visual Studio 2019 version 16.1 | 1921 | 14.21 |
| Visual Studio 2019 version 16.2 | 1922 | 14.22 |
| Visual Studio 2019 version 16.3 | 1923 | 14.23 |
| Visual Studio 2019 version 16.4 | 1924 | 14.24 |
| Visual Studio 2019 version 16.5 | 1925 | 14.25 |
| Visual Studio 2019 version 16.6 | 1926 | 14.26 |
| Visual Studio 2019 version 16.7 | 1927 | 14.27 |
| Visual Studio 2019 version 16.8, 16.9 <sup>a</sup> | 1928 | 14.28 |
| Visual Studio 2019 version 16.10, 16.11 <sup>b</sup> | 1929 | 14.29 |
| Visual Studio 2022 RTW 17.0 | 1930 | 14.30 |
| Visual Studio 2022 version 17.1 | 1931 | 14.31 |
| Visual Studio 2022 version 17.2 | 1932 | 14.32 |
| Visual Studio 2022 version 17.3 | 1933 | 14.33 |
| Visual Studio 2022 version 17.4 | 1934 | 14.34 |
| Visual Studio 2022 version 17.5 | 1935 | 14.35 |
| Visual Studio 2022 version 17.6 | 1936 | 14.36 |
| Visual Studio 2022 version 17.7 | 1937 | 14.37 |
| Visual Studio 2022 version 17.8 | 1938 | 14.38 |
| Visual Studio 2022 version 17.9 | 1939 | 14.39 |
| Visual Studio 2022 version 17.10 | 1940 | 14.40 |
| Visual Studio 2022 version 17.11 | 1941 | 14.41 |
| Visual Studio 2022 version 17.12 | 1942 | 14.42 |
| Visual Studio 2022 version 17.13 | 1943 | 14.43 |
| Visual Studio 2022 version 17.14 | 1944 | 14.44 |

<sup>a</sup> Visual Studio 2019 versions 16.8 and 16.9 share the same major and minor versions (and so have the same value for `_MSC_VER`). To distinguish them, use `_MSC_FULL_VER`. The minimum value of `_MSC_FULL_VER` for Visual Studio 2019 version 16.8 is 192829333. The minimum value of `_MSC_FULL_VER` for Visual Studio 2019 version 16.9 is 192829910.

<sup>b</sup> Visual Studio 2019 versions 16.10 and 16.11 share the same major and minor versions (and so have the same value for `_MSC_VER`). To distinguish them, use `_MSC_FULL_VER`. The minimum value of `_MSC_FULL_VER` for Visual Studio 2019 version 16.10 is 192929917. The minimum value of `_MSC_FULL_VER` for Visual Studio 2019 version 16.11 is 192930129.

## See also

[`_MSC_VER`](../preprocessor/predefined-macros.md)\
[Visual C++ compiler version blog post](https://devblogs.microsoft.com/cppblog/visual-c-compiler-version/)
