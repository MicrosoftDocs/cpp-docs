---
title: "/ERRORREPORT (dumpbin.exe)"
description: "Reference for the Microsoft DUMPBIN utility /ERRORREPORT command-line option."
ms.date: "02/09/2020"
f1_keywords: ["/ERRORREPORT_dumpbin"]
helpviewer_keywords: ["-ERRORREPORT dumpbin option", "ERRORREPORT dumpbin option", "/ERRORREPORT dumpbin option"]
ms.assetid: 51178c43-4f95-4fda-8f97-50a257d1c948
---
# /ERRORREPORT (dumpbin.exe)

> [!NOTE]
> The /ERRORREPORT option is deprecated. Starting in Windows Vista, error reporting is controlled by [Windows Error Reporting (WER)](/windows/win32/wer/windows-error-reporting) settings.

## Syntax

> **/ERRORREPORT**\[**NONE** \| **PROMPT** \| **QUEUE** \| **SEND** ]

## Remarks

The **/ERRORREPORT** arguments are overridden by the Windows Error Reporting service settings. DUMPBIN automatically sends reports of internal errors to Microsoft, if reporting is enabled by Windows Error Reporting. No report is sent if disabled by Windows Error Reporting.

## See also

[DUMPBIN Options](dumpbin-options.md)
