---
title: "INVOCATION_VERSION_DATA structure"
description: "The C++ Build Insights SDK INVOCATION_VERSION_DATA structure reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "INVOCATION_VERSION_DATA", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# INVOCATION_VERSION_DATA structure

::: moniker range="<=vs-2015"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and above. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=vs-2017"

The `INVOCATION_VERSION_DATA` structure describes a version number as a group of integral values.

## Syntax

```cpp
typedef struct INVOCATION_VERSION_DATA_TAG
{
    unsigned short VersionMajor;
    unsigned short VersionMinor;
    unsigned short BuildNumberMajor;
    unsigned short BuildNumberMinor;

} INVOCATION_VERSION_DATA;
```

## Members

|  |  |
|--|--|
| `VersionMajor` | The version's major number. |
| `VersionMinor` | The version's minor number. |
| `BuildNumberMajor` | The build's major number. |
| `BuildNumberMinor` | The build's minor number. |

::: moniker-end
