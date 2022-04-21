---
title: "TRACING_SESSION_SYSTEM_EVENT_FLAGS constants"
description: "The C++ Build Insights SDK TRACING_SESSION_SYSTEM_EVENT_FLAGS constants reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "TRACING_SESSION_SYSTEM_EVENT_FLAGS", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# TRACING_SESSION_SYSTEM_EVENT_FLAGS constants

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `TRACING_SESSION_SYSTEM_EVENT_FLAGS` constants are used to describe which system events to collect during a trace. Use them to initialize the [TRACING_SESSION_OPTIONS](tracing-session-options-struct.md) structure's `SystemEventFlags` field.

## Syntax

```cpp
static const unsigned long long
    TRACING_SESSION_SYSTEM_EVENT_FLAGS_CONTEXT      = 0x1ULL;

static const unsigned long long
    TRACING_SESSION_SYSTEM_EVENT_FLAGS_CPU_SAMPLES  = 0x2ULL;

static const unsigned long long
    TRACING_SESSION_SYSTEM_EVENT_FLAGS_ALL          = 0xFFFFFFFFFFFFFFFFULL;
```

## Members

| Name | Events turned on by this flag |
|--|--|
| `TRACING_SESSION_SYSTEM_EVENT_FLAGS_CONTEXT` | This flag is activated by default by the C++ Build Insights SDK even if not specified explicitly. It enables basic system events that are required by C++ Build Insights to function properly. The events enabled by this flag provide information about processes, threads, and image loading. You can't disable these events. |
| `TRACING_SESSION_SYSTEM_EVENT_FLAGS_CPU_SAMPLES` | CPU samples |
| `TRACING_SESSION_SYSTEM_EVENT_FLAGS_ALL` | This flag turns on all system events. |

::: moniker-end
