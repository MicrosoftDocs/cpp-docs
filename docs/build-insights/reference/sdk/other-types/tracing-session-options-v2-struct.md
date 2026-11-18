---
title: "TRACING_SESSION_OPTIONS_V2 structure"
description: "Configure event selection and ETW enable properties for a C++ Build Insights tracing session."
ms.date: "11/10/2026"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "TRACING_SESSION_OPTIONS_V2", "ETW", "build time analysis"]
---

# TRACING_SESSION_OPTIONS_V2 structure

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later.

::: moniker-end
::: moniker range=">=msvc-150"

The `TRACING_SESSION_OPTIONS_V2` structure selects events and configures Event Tracing for Windows (ETW) enable properties when you start a trace. It's available in version 1.6.0 or later of the `Microsoft.Cpp.BuildInsights` NuGet package.

## Syntax

```cpp
typedef struct TRACING_SESSION_OPTIONS_V2_TAG
{
    unsigned long long SystemEventFlags;
    unsigned long long MsvcEventFlags;
    unsigned long EnablePropertyFlags;
} TRACING_SESSION_OPTIONS_V2;
```

## Members

| Name | Description |
|--|--|
| `SystemEventFlags` | A bitmask that selects system events. For more information, see [TRACING_SESSION_SYSTEM_EVENT_FLAGS constants](tracing-session-system-event-flags-constants.md). |
| `MsvcEventFlags` | A bitmask that selects MSVC events. For more information, see [TRACING_SESSION_MSVC_EVENT_FLAGS](tracing-session-msvc-event-flags-constants.md). |
| `EnablePropertyFlags` | A bitmask of Windows ETW `EVENT_ENABLE_PROPERTY_*` flags passed to ETW when enabling the MSVC provider. Set it to zero for the default behavior. These flags are independent of the system and MSVC event-selection masks. For more information, see the `EnableProperty` parameter of [EnableTraceEx](/windows/win32/api/evntrace/nf-evntrace-enabletraceex). |

::: moniker-end
