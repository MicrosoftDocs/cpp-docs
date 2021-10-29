---
title: "StopAndRelogTracingSessionW"
description: "The C++ Build Insights SDK StopAndRelogTracingSessionW function reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "StopAndRelogTracingSessionW", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# StopAndRelogTracingSessionW

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `StopAndRelogTracingSessionW` function stops an ongoing tracing session and saves the resulting trace in a temporary file. A relogging session is then immediately started using the temporary file as an input. The final relogged trace produced by the relogging session is saved in a file specified by the caller. Executables calling this function must have administrator privileges.

## Syntax

```cpp
enum RESULT_CODE StopAndRelogTracingSessionW(
    const wchar_t*              sessionName,
    const wchar_t*              outputLogFile,
    TRACING_SESSION_STATISTICS* statistics,
    const RELOG_DESCRIPTOR*     relogDescriptor);
```

### Parameters

*sessionName*\
The name of the tracing session to stop. Use the same session name as the one passed to [StartTracingSession](start-tracing-session.md), [StartTracingSessionA](start-tracing-session-a.md), or [StartTracingSessionW](start-tracing-session-w.md).

*outputLogFile*\
The file in which to write the relogged trace produced by the relogging session.

*statistics*\
Pointer to a [TRACING_SESSION_STATISTICS](../other-types/tracing-session-statistics-struct.md) object. `StopAndRelogTracingSessionW` writes trace collection statistics in this object before returning.

*analysisDescriptor*\
Pointer to a [RELOG_DESCRIPTOR](../other-types/analysis-descriptor-struct.md) object. Use this object to configure the relogging session that's started by `StopAndRelogTracingSessionW`.

### Return Value

A result code from the [RESULT_CODE](../other-types/result-code-enum.md) enum.

::: moniker-end
