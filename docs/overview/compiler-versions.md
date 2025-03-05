---
description: "Learn more about Microsoft Visual C++ compiler versioning."
title: "Microsoft Visual C++ compiler versioning (Visual C++)"
ms.date: 02/12/2025
ms.service: "visual-cpp"
ms.subservice: "tools"
helpviewer_keywords: ["Visual C++, platforms supported", "platforms [C++]"]
---
# Microsoft Visual C++ compiler versioning

The Microsoft Visual C++ compiler version consists of four fields:

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
>Visual Studio 2019 16.8 and 16.9 share the same major and minor versions, and so have the same value for `_MSC_VER`. As do Visual Studio 2019 16.10 and 16.11. To distinguish them, use `_MSC_FULL_VER` as described in [Service releases starting with Visual Studio 2017](#service-releases-starting-with-visual-studio-2017).

## A brief history of Visual C++ compiler versioning

### Visual Studio 6.0 through Visual Studio 2015 (14.0)

- For major releases, `_MSC_VER` increases by 100. `_MSC_FULL_VER` increases by 10,000,000.
- For minor releases, `_MSC_VER` increases by 10. `_MSC_FULL_VER` increases by 1,000,000.

   >[!Note]
   > Visual Studio .NET 2003 was considered a minor release.

### Visual Studio 2017 and later

- For major releases, the minor version increases by 10.
- For minor releases, the minor version increases by 1 starting with Visual Studio 2017 version 15.3.

### Service releases starting with Visual Studio 2017

Servicing releases are distinguished by `_MSC_FULL_VER`. The build field (the BBBBB in the MMNNBBBBB version number) typically increases by 1.

For example, two cases where `_MSC_FULL_VER` is useful is to distinguish Visual Studio 2019 16.8 from 16.9, and Visual Studio 2019 16.10 from 16.11. That's because those versions share the same major and minor versions, and so have the same value for `_MSC_VER`.

To distinguish these versions, use `_MSC_FULL_VER`.\
The minimum value of `_MSC_FULL_VER` for Visual Studio 2019 16.8 is 192829333.\
The minimum value of `_MSC_FULL_VER` for Visual Studio 2019 16.9 is 192829910.

## Version macros

Recall that the version number consists of four fields:

M - major version (two digits)\
N - minor version (two digits)\
B - build version (five digits)\
R - revision version

**[`_MSC_VER`](../preprocessor/predefined-macros.md)** distinguishes between major and minor releases. It has the form: MMNN.

**[`_MSC_FULL_VER`](../preprocessor/predefined-macros.md)** represents the major, minor, and build version of the compiler. It has the form: MMNNBBBBB. Use it to distinguish between different versions of the compiler, including servicing releases. For more information about Visual Studio 2019 16.8, 16.9, 16.10 and 16.11, see [Service releases starting with Visual Studio 2017](#service-releases-starting-with-visual-studio-2017).

**[`_MSC_BUILD`](../preprocessor/predefined-macros.md)** represents the build version of the compiler. It has the form: R. Use it to distinguish between servicing releases.

When the major version changed between Visual Studio 2013 and Visual Studio 2015, `_MSC_VER` reflected the change by going from 1800 to 1900.

An example of a minor change is from Visual Studio 2022 17.1 to Visual Studio 2022 17.2. In that case, `_MSC_VER` changed from 1931 to 1932.

The following table lists the Visual C++ compiler `_MSC_VER` for each Visual Studio release:

| Visual Studio version | `_MSC_VER` |
|--|--|
| Visual Studio 6.0 | 1200 |
| Visual Studio .NET 2002 (7.0) | 1300 |
| Visual Studio .NET 2003 (7.1) | 1310 |
| Visual Studio 2005 (8.0) | 1400 |
| Visual Studio 2008 (9.0) | 1500 |
| Visual Studio 2010 (10.0) | 1600 |
| Visual Studio 2012 (11.0) | 1700 |
| Visual Studio 2013 (12.0) | 1800 |
| Visual Studio 2015 (14.0) | 1900 |
| Visual Studio 2017 RTW (15.0) | 1910 |
| Visual Studio 2017 version 15.3 | 1911 |
| Visual Studio 2017 version 15.5 | 1912 |
| Visual Studio 2017 version 15.6 | 1913 |
| Visual Studio 2017 version 15.7 | 1914 |
| Visual Studio 2017 version 15.8 | 1915 |
| Visual Studio 2017 version 15.9 | 1916 |
| Visual Studio 2019 RTW 16.0 | 1920 |
| Visual Studio 2019 version 16.1 | 1921 |
| Visual Studio 2019 version 16.2 | 1922 |
| Visual Studio 2019 version 16.3 | 1923 |
| Visual Studio 2019 version 16.4 | 1924 |
| Visual Studio 2019 version 16.5 | 1925 |
| Visual Studio 2019 version 16.6 | 1926 |
| Visual Studio 2019 version 16.7 | 1927 |
| Visual Studio 2019 version 16.8, 16.9 <sup>a</sup> | 1928 |
| Visual Studio 2019 version 16.10, 16.11 <sup>b</sup> | 1929 |
| Visual Studio 2022 RTW 17.0 | 1930 |
| Visual Studio 2022 version 17.1 | 1931 |
| Visual Studio 2022 version 17.2 | 1932 |
| Visual Studio 2022 version 17.3 | 1933 |
| Visual Studio 2022 version 17.4 | 1934 |
| Visual Studio 2022 version 17.5 | 1935 |
| Visual Studio 2022 version 17.6 | 1936 |
| Visual Studio 2022 version 17.7 | 1937 |
| Visual Studio 2022 version 17.8 | 1938 |
| Visual Studio 2022 version 17.9 | 1939 |
| Visual Studio 2022 version 17.10 | 1940 |
| Visual Studio 2022 version 17.11 | 1941 |
| Visual Studio 2022 version 17.12 | 1942 |
| Visual Studio 2022 version 17.13 | 1943 |
| Visual Studio 2022 version 17.14 | 1944 |

<sup>a</sup> Visual Studio 2019 16.8 and 16.9 share the same major and minor versions (and so have the same value for `_MSC_VER`). To distinguish them, use `_MSC_FULL_VER`. The minimum value of `_MSC_FULL_VER` for Visual Studio 2019 16.8 is 192829333. The minimum value of `_MSC_FULL_VER` for Visual Studio 2019 16.9 is 192829910.

<sup>b</sup> Visual Studio 2019 16.10 and 16.11 share the same major and minor versions (and so have the same value for `_MSC_VER`). To distinguish them, use `_MSC_FULL_VER`. The minimum value of `_MSC_FULL_VER` for Visual Studio 2019 16.10 is 192929917. The minimum value of `_MSC_FULL_VER` for Visual Studio 2019 16.11 is 192930129.

## See also

[`_MSC_VER`](../preprocessor/predefined-macros.md)\
[Visual C++ compiler version blog post](https://devblogs.microsoft.com/cppblog/visual-c-compiler-version/)
