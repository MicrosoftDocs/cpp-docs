---
title: "__setusermatherr | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "conceptual"
apiname: ["__setusermatherr"]
apilocation: ["msvcr80.dll", "msvcr90.dll", "msvcrt.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr100.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["__setusermatherr"]
dev_langs: ["C++"]
helpviewer_keywords: ["__setusermatherr"]
ms.assetid: f306818d-381a-4d68-8739-71b92bacb5ea
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
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
 `pf`  
 Pointer to an implementation of `_matherr` that is supplied by the user.  
  
 The type of the `pf` parameter is declared as `typedef int (__cdecl * _HANDLE_MATH_ERROR)(struct _exception *)`.  
  
## Remarks  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|__setusermatherr|matherr.c|