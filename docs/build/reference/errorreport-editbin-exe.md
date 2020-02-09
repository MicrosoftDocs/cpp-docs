---
title: "/ERRORREPORT (editbin.exe)"
description: "Reference for the Microsoft EDITBIN utility /ERRORREPORT command-line option."
ms.date: "02/09/2020"
f1_keywords: ["/ERRORREPORT"]
helpviewer_keywords: ["-ERRORREPORT editbin option", "ERRORREPORT editbin option", "/ERRORREPORT editbin option"]
ms.assetid: eca66ac3-b754-4bd7-9dd4-e04fc79a71b6
---
# /ERRORREPORT (editbin.exe)

> [!NOTE]
> The /ERRORREPORT option is deprecated, and has no effect. Starting in Windows Vista, error reporting is controlled by [Windows Error Reporting (WER)](/windows/win32/wer/windows-error-reporting) settings.

## Syntax

> **/ERRORREPORT** \[ **NONE** \| **PROMPT** \| **QUEUE** \| **SEND** ]

## Remarks

EDITBIN automatically sends reports of internal errors to Microsoft, if reporting is enabled by the Windows Error Reporting service settings. The **/ERRORREPORT** option has no effect, and its arguments are ignored.

## See also

[EDITBIN Options](editbin-options.md)
