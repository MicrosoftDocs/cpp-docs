---
title: "FILE_TYPE_CODE enum"
description: "The C++ Build Insights SDK FILE_TYPE_CODE enum reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "FILE_TYPE_CODE", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# FILE_TYPE_CODE enum

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `FILE_TYPE_CODE` enum describes the type of a file.

## Members

| Name | Value | Description |
|--|--|--|
| `FILE_TYPE_CODE_OTHER` | 0 (0x00000000) | A file type not listed in this enum. |
| `FILE_TYPE_CODE_OBJ` | 1 (0x00000001) | An object (\*.obj) file. |
| `FILE_TYPE_CODE_EXECUTABLE_IMAGE` | 2 (0x00000002) | An executable (\*.exe) or DLL (\*.dll) file. |
| `FILE_TYPE_CODE_LIB` | 3 (0x00000003) | A static library (*.lib) file. |
| `FILE_TYPE_CODE_IMP_LIB` | 4 (0x00000004) | An import library (*.lib) |
| `FILE_TYPE_CODE_EXP` | 5 (0x00000005) | An export (*.exp) file. |

## Remarks

::: moniker-end
