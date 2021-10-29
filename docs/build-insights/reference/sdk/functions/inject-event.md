---
title: "InjectEvent"
description: "The C++ Build Insights SDK InjectEvent function reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "InjectEvent", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# InjectEvent

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `InjectEvent` function is called within a relogger implementing the [IRelogger](../other-types/irelogger-class.md) interface. It's used to write an Event Tracing for Windows (ETW) event in the output trace file of a relogging session.

## Syntax

```cpp
void InjectEvent(
    const void* relogSession,
    LPCGUID providerId,
    PCEVENT_DESCRIPTOR eventDescriptor,
    unsigned long processId,
    unsigned long threadId,
    unsigned short processorIndex,
    long long timestamp,
    unsigned char* data,
    unsigned long byteCount);
```

### Parameters

*relogSession*\
A pointer to the relogging session. A relogging session is provided to reloggers that implement the `IRelogger` interface. For more information, see [IRelogger](../other-types/irelogger-class.md).

*providerId*\
An Event Tracing for Windows (ETW) provider GUID under which the ETW event gets relogged.

*eventDescriptor*\
The ETW event descriptor for the ETW event that's relogged.

*processId*\
The process identifier (PID) for the ETW event that's relogged.

*threadId*\
The thread identifier (TID) for the ETW event that's relogged.

*processorIndex*\
The processor index for the ETW event that's relogged.

*timestamp*\
The timestamp for the ETW event that's relogged.

*data*\
A pointer to the data that should be included in the relogged ETW event.

*byteCount*\
The size of the data, in bytes, pointed to by *data*.

## Remarks

For more information on ETW concepts, such as *provider GUID* and *event descriptor*, see the [ETW documentation](/windows/win32/etw/about-event-tracing). For details on how to start a relogging session with the C++ Build Insights SDK, see [Relog](relog.md).

::: moniker-end
