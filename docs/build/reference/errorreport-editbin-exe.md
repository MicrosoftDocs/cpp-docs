---
title: "/ERRORREPORT (editbin.exe)"
description: "Reference for the Microsoft EDITBIN utility /ERRORREPORT command-line option."
ms.date: "02/09/2020"
f1_keywords: ["/ERRORREPORT_editbin"]
helpviewer_keywords: ["-ERRORREPORT editbin option", "ERRORREPORT editbin option", "/ERRORREPORT editbin option"]
ms.assetid: eca66ac3-b754-4bd7-9dd4-e04fc79a71b6
---
# /ERRORREPORT (editbin.exe)

> [!NOTE]
> The /ERRORREPORT option is deprecated. Starting in Windows Vista, error reporting is controlled by [Windows Error Reporting (WER)](/windows/win32/wer/windows-error-reporting) settings.

## Syntax

> **/ERRORREPORT** \[ **NONE** \| **PROMPT** \| **QUEUE** \| **SEND** ]

## Remarks

The **/ERRORREPORT** arguments are overridden by the Windows Error Reporting service settings. EDITBIN automatically sends reports of internal errors to Microsoft, if reporting is enabled by Windows Error Reporting. No report is sent if disabled by Windows Error Reporting.

## See also

[EDITBIN Options](editbin-options.md)
