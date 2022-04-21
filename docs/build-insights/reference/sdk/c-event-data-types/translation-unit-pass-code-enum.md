---
title: "TRANSLATION_UNIT_PASS_CODE enum"
description: "The C++ Build Insights SDK TRANSLATION_UNIT_PASS_CODE enum reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "TRANSLATION_UNIT_PASS_CODE", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# TRANSLATION_UNIT_PASS_CODE enum

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `TRANSLATION_UNIT_PASS_CODE` enum.

## Members

| Name | Value | Description |
|--|--|--|
| `TRANSLATION_UNIT_PASS_CODE_FRONT_END` | 0 (0x00000000) | The front-end pass, responsible for parsing source code and converting it into intermediate language. |
| `TRANSLATION_UNIT_PASS_CODE_BACK_END` | 1 (0x00000001) | The back-end pass, responsible for optimizing intermediate language and converting it into machine code. |

## Remarks

Used by the C SDK functions.

::: moniker-end
