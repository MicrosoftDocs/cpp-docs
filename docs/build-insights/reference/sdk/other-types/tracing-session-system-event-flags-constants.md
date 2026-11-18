---
title: "TRACING_SESSION_SYSTEM_EVENT_FLAGS constants"
description: "The C++ Build Insights SDK TRACING_SESSION_SYSTEM_EVENT_FLAGS constants reference."
ms.date: "11/10/2026"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "TRACING_SESSION_SYSTEM_EVENT_FLAGS", "throughput analysis", "build time analysis", "vcperf.exe"]
ms.topic: reference
---
# TRACING_SESSION_SYSTEM_EVENT_FLAGS constants

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `TRACING_SESSION_SYSTEM_EVENT_FLAGS` constants describe which system events to collect during a trace. Use them to initialize the `SystemEventFlags` field of [TRACING_SESSION_OPTIONS](tracing-session-options-struct.md) or [TRACING_SESSION_OPTIONS_V2](tracing-session-options-v2-struct.md).

## Syntax

```cpp
static const unsigned long long
    TRACING_SESSION_SYSTEM_EVENT_FLAGS_CPU_SAMPLES  = 0x2ULL;

static const unsigned long long
    TRACING_SESSION_SYSTEM_EVENT_FLAGS_ALL          = 0xFFFFFFFFFFFFFFFFULL;
```

## Members

| Name | Events turned on by this flag |
|--|--|
| `TRACING_SESSION_SYSTEM_EVENT_FLAGS_CPU_SAMPLES` | CPU samples. Collecting these events requires administrator privileges. |
| `TRACING_SESSION_SYSTEM_EVENT_FLAGS_ALL` | This flag turns on all system events. |

::: moniker-end
