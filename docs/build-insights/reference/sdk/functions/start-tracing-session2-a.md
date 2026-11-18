---
title: "StartTracingSession2A"
description: "Start a C++ Build Insights trace with a narrow session name and configurable ETW enable properties."
ms.date: "11/10/2026"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "StartTracingSession2A", "ETW", "build time analysis"]
---

# StartTracingSession2A

::: moniker range="<=msvc-140"

The C++ Build Insights SDK works with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later.

::: moniker-end
::: moniker range=">=msvc-150"

The `StartTracingSession2A` function starts a tracing session with configurable Event Tracing for Windows (ETW) enable properties. It requires version 1.6.0 or later of the `Microsoft.Cpp.BuildInsights` NuGet package. Executables that call this function must have administrator privileges.

## Syntax

```cpp
enum RESULT_CODE StartTracingSession2A(
    const char*                       sessionName,
    const TRACING_SESSION_OPTIONS_V2* options);
```

### Parameters

*sessionName*\
The name of the tracing session to start, as a narrow string. Use the same name when you call [StopTracingSessionA](stop-tracing-session-a.md) or another stop function.

*options*\
A pointer to a [TRACING_SESSION_OPTIONS_V2 structure](../other-types/tracing-session-options-v2-struct.md) object. Use it to select events and set enable-property flags for the MSVC provider.

### Return value

A result code from the [RESULT_CODE enum](../other-types/result-code-enum.md) enum.

::: moniker-end
