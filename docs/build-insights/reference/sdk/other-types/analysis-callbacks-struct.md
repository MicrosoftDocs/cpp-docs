---
title: "ANALYSIS_CALLBACKS structure"
description: "The C++ Build Insights SDK ANALYSIS_CALLBACKS structure reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "ANALYSIS_CALLBACKS", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# ANALYSIS_CALLBACKS structure

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `ANALYSIS_CALLBACKS` structure is used when initializing an [ANALYSIS_DESCRIPTOR](analysis-descriptor-struct.md) or [RELOG_DESCRIPTOR](relog-descriptor-struct.md) object. It specifies which functions to call during the analysis or relogging of an Event Tracing for Windows (ETW) trace.

## Syntax

```cpp
typedef struct ANALYSIS_CALLBACKS_TAG
{
    OnAnalysisEventFunc     OnStartActivity;
    OnAnalysisEventFunc     OnStopActivity;
    OnAnalysisEventFunc     OnSimpleEvent;
    OnTraceInfoFunc         OnTraceInfo;
    OnBeginEndPassFunc      OnBeginAnalysis;
    OnBeginEndPassFunc      OnEndAnalysis;
    OnBeginEndPassFunc      OnBeginAnalysisPass;
    OnBeginEndPassFunc      OnEndAnalysisPass;
} ANALYSIS_CALLBACKS;
```

## Members

| Name | Description |
|--|--|
| `OnStartActivity` | Called to process an activity start event. |
| `OnStopActivity` | Called to process an activity stop event. |
| `OnSimpleEvent` | Called to process a simple event. |
| `OnTraceInfo` | For analysis sessions, called at the beginning of each analysis pass. For relogging sessions, called at the beginning of each analysis pass, and again at the beginning of the relogging pass. This function is only called after OnBeginAnalysisPass has been called. |
| `OnBeginAnalysis` | For analysis sessions, called before any analysis pass has begun. For relogging sessions, called twice before the analysis phase has begun: once to announce the start of the relogging session, and once more to announce the beginning of the analysis phase. |
| `OnEndAnalysis` | For analysis sessions, this function is called after all analysis passes have ended. For relogging sessions, this function is called when all analysis passes of the analysis phase have ended. Then, it's called again after the relogging pass has ended. |
| `OnBeginAnalysisPass` | Called when beginning an analysis pass or the relogging pass, before processing any event. |
| `OnEndAnalysisPass` | Called when ending an analysis pass or the relogging pass, after processing all events. |

## Remarks

The analysis phase of a relogging session is considered part of the relogging session, and may contain multiple analysis passes. For this reason, `OnBeginAnalysis` is called twice in a row at the beginning of a relogging session. `OnEndAnalysis` is called at the end of the analysis phase, before starting the relogging phase, and once again at the end of the relogging phase. The relogging phase always contains a single relogging pass.

It's possible for analyzers to be part of both the analysis and the relogging phase of a relogging session. These analyzers can determine which phase is currently ongoing by keeping track of the OnBeginAnalysis and `OnEndAnalysis` call pairs. Two `OnBeginAnalysis` calls without any `OnEndAnalysis` call means the analysis phase is ongoing. Two `OnBeginAnalysis` calls and one `OnEndAnalysis` call means the relogging phase is ongoing. Two OnBeginAnalysis and two `OnEndAnalysis` calls means both phases have ended.

All members of the `ANALYSIS_CALLBACKS` structure must point to a valid function. For more information on the accepted function signatures, see [OnAnalysisEventFunc](on-analysis-event-func-typedef.md), [OnTraceInfoFunc](on-trace-info-func-typedef.md), and [OnBeginEndPassFunc](on-begin-end-pass-func-typedef.md).

::: moniker-end
