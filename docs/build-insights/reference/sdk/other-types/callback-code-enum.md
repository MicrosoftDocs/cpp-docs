---
title: "CALLBACK_CODE enum"
description: "The C++ Build Insights SDK CALLBACK_CODE enum reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "CALLBACK_CODE", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# CALLBACK_CODE enum

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `CALLBACK_CODE` enum is used control the flow of an analysis or relogging session. Return a CALLBACK_CODE value from the functions in [ANALYSIS_CALLBACKS](analysis-callbacks-struct.md) or [RELOG_CALLBACKS](relog-callbacks-struct.md) to control what should happen next.

## Members

| Name | Value | Description |
|--|--|--|
| `CALLBACK_CODE_ANALYSIS_SUCCESS` | 1 (0x00000001) | Continue the current analysis or relogging session normally. |
| `CALLBACK_CODE_ANALYSIS_FAILURE` | 2 (0x00000002) | Cancel the current analysis or relogging session and signal an error. |
| `CALLBACK_CODE_ANALYSIS_CANCEL` | 4 (0x00000004) | Cancel the current analysis or relogging session. |

::: moniker-end
