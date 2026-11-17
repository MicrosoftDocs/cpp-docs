---
title: "StartTracingSession2"
description: "Start a C++ Build Insights trace with configurable ETW enable properties."
ms.date: "11/10/2026"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "StartTracingSession2", "ETW", "build time analysis"]
---

# StartTracingSession2

::: moniker range="<=msvc-140"

The C++ Build Insights SDK works with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later.

::: moniker-end
::: moniker range=">=msvc-150"

The `StartTracingSession2` C++ function starts a tracing session with configurable Event Tracing for Windows (ETW) enable properties. It requires version 1.6.0 or later of the `Microsoft.Cpp.BuildInsights` NuGet package. Executables that call this function must have administrator privileges.

## Syntax

```cpp
RESULT_CODE StartTracingSession2(
    const char*                       sessionName,
    const TRACING_SESSION_OPTIONS_V2& options);

RESULT_CODE StartTracingSession2(
    const wchar_t*                    sessionName,
    const TRACING_SESSION_OPTIONS_V2& options);
```

### Parameters

*sessionName*\
The name of the tracing session to start. Use the same name when you call [StopTracingSession](stop-tracing-session.md) or another stop function.

*options*\
A reference to a [TRACING_SESSION_OPTIONS_V2 structure](../other-types/tracing-session-options-v2-struct.md) object. Use it to select events and set enable-property flags for the MSVC provider.

### Return value

A result code from the [RESULT_CODE enum](../other-types/result-code-enum.md) enum.

## Example

The following function starts a host trace that can collect MSVC events from process-isolated Windows containers. Use a Windows SDK that defines `EVENT_ENABLE_PROPERTY_ENABLE_SILOS` in `<evntcons.h>`.

```cpp
#include <Windows.h>
#include <evntcons.h>
#include <CppBuildInsights.hpp>

using namespace Microsoft::Cpp::BuildInsights;

RESULT_CODE StartContainerBuildTrace()
{
    TRACING_SESSION_OPTIONS_V2 options{};
    options.EnablePropertyFlags = EVENT_ENABLE_PROPERTY_ENABLE_SILOS;

    return StartTracingSession2(L"ContainerBuild", options);
}
```

Check the result before you run the build. When the build finishes, stop the trace by using the same session name. These zero-initialized event-selection fields collect the required MSVC events without starting a separate system trace. To select more MSVC or system events, set the corresponding fields in `options`.

## See also

- [StopTracingSession](stop-tracing-session.md)

::: moniker-end
