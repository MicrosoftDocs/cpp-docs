---
title: "StartTracingSessionA"
description: "The C++ Build Insights SDK StartTracingSessionA function reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "StartTracingSessionA", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# StartTracingSessionA

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `StartTracingSessionA` function starts a tracing session. Executables calling this function must have administrator privileges.

## Syntax

```cpp
enum RESULT_CODE StartTracingSessionA(
    const char*                    sessionName,
    const TRACING_SESSION_OPTIONS* options);
```

### Parameters

*sessionName*\
The name of the tracing session to start. Use the same name when calling [StopTracingSessionA](stop-tracing-session.md) or any other stop trace function.

*options*\
Pointer to a [TRACING_SESSION_OPTIONS](../other-types/tracing-session-options-struct.md) object. Use this object to select which events should be collected by the tracing session.

### Return Value

A result code from the [RESULT_CODE](../other-types/result-code-enum.md) enum.

::: moniker-end
