---
title: "INVOCATION_DATA structure"
description: "The C++ Build Insights SDK INVOCATION_DATA structure reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "INVOCATION_DATA", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# INVOCATION_DATA structure

::: moniker range="<=vs-2015"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and above. To see the documentation for these versions, set the Visual Studio version selector control for this article to Visual Studio 2017 or Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

The `INVOCATION_DATA` structure describes a compiler or linker invocation.

## Syntax

```cpp
typedef struct INVOCATION_DATA_TAG
{
    int                         MSVCToolCode;

    INVOCATION_VERSION_DATA     ToolVersion;

    const char*                 ToolVersionString;
    const wchar_t*              WorkingDirectory;
    const wchar_t*              ToolPath;

} INVOCATION_DATA;
```

## Members

|  |  |
|--|--|
| `MSVCToolCode` | A code that identifies the invocation's type. For more information, see [MSVC_TOOL_CODE](msvc-tool-code-enum.md). |
| `ToolVersion` | An object that stores the invoked tool's version as a group of integral values. |
| `ToolVersionString` | Describes the invoked tool's version in text form. |
| `WorkingDirectory` | The directory from which the invocation was made. |
| `ToolPath` | The invoked tool's absolute path. |

::: moniker-end
