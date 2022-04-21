---
title: "TRANSLATION_UNIT_TYPE enum"
description: "The C++ Build Insights SDK TRANSLATION_UNIT_TYPE enum reference."
ms.date: "06/10/2021"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "TRANSLATION_UNIT_TYPE", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# TRANSLATION_UNIT_TYPE enum

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `TRANSLATION_UNIT_TYPE` enum.

## Members

| Name | Value | Description |
|--|--|--|
| `TRANSLATION_UNIT_TYPE_MODULE` | 0 (0x00000000) | The type of this translation unit is a module interface. |
| `TRANSLATION_UNIT_TYPE_HEADER_UNIT` | 1 (0x00000001) | The type of this translation unit is a header unit. |
| `TRANSLATION_UNIT_TYPE_PRECOMPILED_HEADER` | 2 (0x00000002) | The type of this translation unit is a precompiled header (PCH). |

## Remarks

Used by the C SDK functions.

::: moniker-end
