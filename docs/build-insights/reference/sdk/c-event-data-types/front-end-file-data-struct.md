---
title: "FRONT_END_FILE_DATA structure"
description: "The C++ Build Insights SDK FRONT_END_FILE_DATA structure reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "FRONT_END_FILE_DATA", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# FRONT_END_FILE_DATA structure

::: moniker range="<=vs-2015"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and above. To see the documentation for these versions, set the Visual Studio version selector control for this article to Visual Studio 2017 or Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

The `FRONT_END_FILE_DATA` structure describes the processing of a file by the compiler front end.

## Syntax

```cpp
typedef struct FRONT_END_FILE_DATA_TAG
{
    const char*         Path;

} FRONT_END_FILE_DATA;
```

## Members

|  |  |
|--|--|
| `Path` | The file's absolute path, encoded in UTF-8. |

::: moniker-end
