---
description: "Learn more about: _set_app_type"
title: "_set_app_type"
ms.date: "4/2/2020"
api_name: ["_set_app_type", "_o__set_app_type"]
api_location: ["api-ms-win-crt-runtime-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_set_app_type", "corecrt_startup/_set_app_type"]
ms.assetid: 1e7fe786-b587-4116-8c05-f7d762350100
---
# _set_app_type

An internal function used at startup to tell the CRT whether the app is a console app or a GUI app.

## Syntax

```cpp
typedef enum _crt_app_type
{
    _crt_unknown_app,
    _crt_console_app,
    _crt_gui_app
} _crt_app_type;

void __cdecl _set_app_type(
    _crt_app_type appType
    );
```

## Parameters

*appType*<br/>
A value that indicates the application type. The possible values are:

|Value|Description|
|----------------|-----------------|
|_crt_unknown_app|Unknown application type.|
|_crt_console_app|Console (command-line) application.|
|_crt_gui_app|GUI (Windows) application.|

## Remarks

Normally, you do not need to call this function. It is part of the C runtime startup code that executes before `main` is called in your app.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|_set_app_type|process.h|
