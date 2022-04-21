---
title: "RESULT_CODE enum"
description: "The C++ Build Insights SDK RESULT_CODE enum reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "RESULT_CODE", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# RESULT_CODE enum

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `RESULT_CODE` enum describes success and failure conditions.

## Members

| Name | Value | Description |
|--|--|--|
| `RESULT_CODE_SUCCESS` | 0 (0x00000000) | The operation was successful. |
| `RESULT_CODE_FAILURE_ANALYSIS_ERROR` | 1 (0x00000001) | One of your callback functions in [ANALYSIS_DESCRIPTOR](analysis-descriptor-struct.md) or [RELOG_DESCRIPTOR](relog-descriptor-struct.md) returned the `CALLBACK_CODE_ANALYSIS_FAILURE` value. This value is a member of the [CALLBACK_CODE](callback-code-enum.md) enum. |
| `RESULT_CODE_FAILURE_CANCELLED` | 2 (0x00000002) | One of your callback functions in [ANALYSIS_DESCRIPTOR](analysis-descriptor-struct.md) or [RELOG_DESCRIPTOR](relog-descriptor-struct.md) returned the `CALLBACK_CODE_ANALYSIS_CANCEL` value. This value is a member of the [CALLBACK_CODE](callback-code-enum.md) enum. |
| `RESULT_CODE_FAILURE_INVALID_INPUT_LOG_FILE` | 3 (0x00000003) | The input Event Tracing for Windows (ETW) trace specified is invalid. |
| `RESULT_CODE_FAILURE_INVALID_OUTPUT_LOG_FILE` | 4 (0x00000004) | The output ETW trace specified is invalid. |
| `RESULT_CODE_FAILURE_MISSING_ANALYSIS_CALLBACK` | 5 (0x00000005) | The [ANALYSIS_CALLBACKS](analysis-callbacks-struct.md) structure was not initialized correctly. |
| `RESULT_CODE_FAILURE_MISSING_RELOG_CALLBACK` | 6 (0x00000006) | The [RELOG_CALLBACKS](relog-callbacks-struct.md) structure was not initialized correctly. |
| `RESULT_CODE_FAILURE_OPEN_INPUT_TRACE` | 7 (0x00000007) | Failed to open the input ETW trace. |
| `RESULT_CODE_FAILURE_PROCESS_TRACE` | 8 (0x00000008) | An error occurred while processing the input ETW trace. |
| `RESULT_CODE_FAILURE_START_RELOGGER` | 9 (0x00000009) | An error occurred when trying to start the relogging session. |
| `RESULT_CODE_FAILURE_DROPPED_EVENTS` | 10 (0x0000000A) | The input ETW trace is missing important events. |
| `RESULT_CODE_FAILURE_UNSUPPORTED_OS` | 11 (0x0000000B) | You are using C++ Build Insights on an unsupported version of Windows. |
| `RESULT_CODE_FAILURE_INVALID_TRACING_SESSION_NAME` | 12 (0x0000000C) | The provided session name is invalid. |
| `RESULT_CODE_FAILURE_INSUFFICIENT_PRIVILEGES` | 13 (0x0000000D) | This operation requires administrator privileges. |
| `RESULT_CODE_FAILURE_GENERATE_GUID` | 14 (0x0000000E) | An error occurred while generating a GUID. |
| `RESULT_CODE_FAILURE_OBTAINING_TEMP_DIRECTORY` | 15 (0x0000000F) | An error occurred while trying to determine the temporary directory path. |
| `RESULT_CODE_FAILURE_CREATE_TEMPORARY_DIRECTORY` | 16 (0x00000010) | An error occurred while trying to create a temporary directory for the tracing session being started. |
| `RESULT_CODE_FAILURE_START_SYSTEM_TRACE` | 17 (0x00000011) | An error occurred when trying to start the system trace. |
| `RESULT_CODE_FAILURE_START_MSVC_TRACE` | 18 (0x00000012) | An error occurred when trying to start the MSVC trace. |
| `RESULT_CODE_FAILURE_STOP_MSVC_TRACE` | 19 (0x00000013) | An error occurred when trying to stop the MSVC trace. |
| `RESULT_CODE_FAILURE_STOP_SYSTEM_TRACE` | 20 (0x00000014) | An error occurred when trying to start the system trace. |
| `RESULT_CODE_FAILURE_SESSION_DIRECTORY_RESOLUTION` | 21 (0x00000015) | A trace was stopped but the tracing session's temporary directory cannot be found. |
| `RESULT_CODE_FAILURE_MSVC_TRACE_FILE_NOT_FOUND` | 22 (0x00000016) | The trace file for the MSVC trace being stopped cannot be found. |
| `RESULT_CODE_FAILURE_MERGE_TRACES` | 23 (0x00000017) | An error occurred when merging traces using Kernel Trace Control. |
| `RESULT_CODE_FAILURE_UNKNOWN_ERROR` | 24 (0x00000018) | An unknown error occurred. |

::: moniker-end
