---
title: "AnalyzeA"
description: "The C++ Build Insights SDK AnalyzeA function reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "AnalyzeA", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# AnalyzeA

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `AnalyzeA` function is used to analyze MSVC events read from an input Event Tracing for Windows (ETW) trace.

## Syntax

```cpp
enum RESULT_CODE AnalyzeA(
    const char*                inputLogFile,
    const ANALYSIS_DESCRIPTOR* analysisDescriptor);
```

### Parameters

*inputLogFile*\
The input ETW trace that you wish to read events from.

*analysisDescriptor*\
Pointer to an [ANALYSIS_DESCRIPTOR](../other-types/analysis-descriptor-struct.md) object. Use this object to configure the analysis.

### Return Value

A result code from the [RESULT_CODE](../other-types/result-code-enum.md) enum.

::: moniker-end
