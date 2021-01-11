---
description: "Learn more about: _acmdln, _tcmdln, _wcmdln"
title: "_acmdln, _tcmdln, _wcmdln"
ms.date: "11/04/2016"
api_name: ["_wcmdln", "_acmdln"]
api_location: ["msvcrt.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_acmdln", "acmdln", "_wcmdln", "wcmdln", "_tcmdln", "tcmdln"]
helpviewer_keywords: ["_wcmdln global variable", "wcmdln global variable", "_acmdln global variable", "_tcmdln global variable", "tcmdln global variable", "acmdln global variable"]
ms.assetid: 4fc0a6a0-3f93-420a-a19f-5276061ba539
---
# _acmdln, _tcmdln, _wcmdln

Internal CRT global variable. The command line.

## Syntax

```
char * _acmdln;
wchar_t * _wcmdln;

#ifdef WPRFLAG
   #define _tcmdln _wcmdln
#else
   #define _tcmdln _acmdln
```

## Remarks

These CRT internal variables store the complete command line. They are exposed in the exported symbols for the CRT, but are not intended for use in your code. `_acmdln` stores the data as a character string. `_wcmdln` stores the data as a wide character string. `_tcmdln` can be defined as either `_acmdln` or `_wcmdln`, depending on which is appropriate.

## See also

[Global Variables](../c-runtime-library/global-variables.md)
