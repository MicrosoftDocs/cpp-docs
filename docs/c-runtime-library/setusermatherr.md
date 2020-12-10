---
description: "Learn more about: __setusermatherr"
title: "__setusermatherr"
ms.date: "11/04/2016"
api_name: ["__setusermatherr"]
api_location: ["msvcr80.dll", "msvcr90.dll", "msvcrt.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr100.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["__setusermatherr"]
helpviewer_keywords: ["__setusermatherr"]
ms.assetid: f306818d-381a-4d68-8739-71b92bacb5ea
---
# __setusermatherr

Specifies a user-supplied rountine to handle math errors, instead of the [_matherr](../c-runtime-library/reference/matherr.md) routine.

## Syntax

```cpp
void __setusermatherr(
   _HANDLE_MATH_ERROR pf
   )
```

#### Parameters

*pf*<br/>
Pointer to an implementation of `_matherr` that is supplied by the user.

The type of the *pf* parameter is declared as `typedef int (__cdecl * _HANDLE_MATH_ERROR)(struct _exception *)`.

## Remarks

## Requirements

|Routine|Required header|
|-------------|---------------------|
|__setusermatherr|matherr.c|
