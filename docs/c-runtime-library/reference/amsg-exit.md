---
title: "_amsg_exit | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["_amsg_exit"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
apitype: "DLLExport"
f1_keywords: ["_amsg_exit"]
dev_langs: ["C++"]
helpviewer_keywords: ["_amsg_exit"]
ms.assetid: 146d4faf-d763-43a4-b264-12711196456b
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _amsg_exit

Emits a specified runtime error message and then exits your application with error code 255.

## Syntax

```cpp
void _amsg_exit ( int rterrnum );
```

### Parameters

*rterrnum*<br/>
The identification number of a system-defined runtime error message.

## Remarks

This function emits the runtime error message to **stderr** for console applications, or displays the message in a message box for Windows applications. In debug mode, you can choose to invoke the debugger before exiting.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|_amsg_exit|internal.h|