---
title: "RelogW"
description: "The C++ Build Insights SDK RelogW function reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "RelogW", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# RelogW

::: moniker range="<=vs-2015"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and above. To see the documentation for these versions, set the Visual Studio version selector control for this article to Visual Studio 2017 or Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

The `RelogW` function is used to read MSVC events from an input Event Tracing for Windows (ETW) trace and write them into a new, modified ETW trace.

## Syntax

```cpp
enum RESULT_CODE RelogW(
    const wchar_t*          inputLogFile,
    const wchar_t*          outputLogFile,
    const RELOG_DESCRIPTOR* relogDescriptor);
```

### Parameters

*inputLogFile*\
The input ETW trace that you wish to read events from.

*outputLogFile*\
The file in which to write the new events.

*relogDescriptor*\
Pointer to a [RELOG_DESCRIPTOR](../other-types/relog-descriptor-struct.md) object. Use this object to configure the relogging session.

### Return Value

A result code from the [RESULT_CODE](../other-types/result-code-enum.md) enum.

::: moniker-end
