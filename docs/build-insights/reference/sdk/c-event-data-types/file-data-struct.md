---
title: "FILE_DATA structure"
description: "The C++ Build Insights SDK FILE_DATA structure reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "FILE_DATA", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# FILE_DATA structure

::: moniker range="<=vs-2015"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and above. To see the documentation for these versions, set the Visual Studio version selector control for this article to Visual Studio 2017 or Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

The `FILE_DATA` structure describes a file input or output.

## Syntax

```cpp
typedef struct FILE_DATA_TAG
{
    const wchar_t*      Path;
    int                 TypeCode;

} FILE_DATA;
```

## Members

|  |  |
|--|--|
| `Path` | The file's absolute path |
| `TypeCode` | A code describing the type of the file. For more information, see [FILE_TYPE_CODE](file-type-code-enum.md). |

::: moniker-end
