---
title: "RELOG_RETENTION_SYSTEM_EVENT_FLAGS constants"
description: "The C++ Build Insights SDK RELOG_RETENTION_SYSTEM_EVENT_FLAGS constants reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "RELOG_RETENTION_SYSTEM_EVENT_FLAGS", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# RELOG_RETENTION_SYSTEM_EVENT_FLAGS constants

::: moniker range="<=vs-2015"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and above. To see the documentation for these versions, set the Visual Studio version selector control for this article to Visual Studio 2017 or Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

The `RELOG_RETENTION_SYSTEM_EVENT_FLAGS` constants are used to describe which system events to keep in a relogged trace. Use them to initialize the [RELOG_DESCRIPTOR](relog-descriptor-struct.md) structure's `SystemEventsRetentionFlags` field.

## Syntax

```cpp
static const unsigned long long
    RELOG_RETENTION_SYSTEM_EVENT_FLAGS_CPU_SAMPLES = 0x1ULL;

static const unsigned long long
    RELOG_RETENTION_SYSTEM_EVENT_FLAGS_ALL         = 0xFFFFFFFFFFFFFFFFULL;
```

## Members

|  |  |
|--|--|
| `RELOG_RETENTION_SYSTEM_EVENT_FLAGS_CPU_SAMPLES` | Keep CPU sample system events in a relogged trace. |
| `RELOG_RETENTION_SYSTEM_EVENT_FLAGS_ALL` | Keep all system events in a relogged trace. |

## Remarks

::: moniker-end
