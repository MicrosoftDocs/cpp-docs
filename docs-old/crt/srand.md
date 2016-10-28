---
title: "srand"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
apiname: 
  - "srand"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
  - "api-ms-win-crt-utility-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "srand"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "random starting point"
  - "random starting point, setting"
  - "random numbers, generating"
  - "srand function"
  - "numbers, pseudorandom"
  - "numbers, random"
  - "pseudorandom numbers"
  - "starting points, setting random"
  - "starting points"
ms.assetid: 7bf56dc5-5692-4182-a3c1-18af98d2dd1a
caps.latest.revision: 12
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# srand
Sets the starting seed value for the pseudorandom number generator.  
  
## Syntax  
  
```  
void srand(  
   unsigned int seed   
);  
```  
  
#### Parameters  
 `seed`  
 Seed for pseudorandom number generation  
  
## Remarks  
 The `srand` function sets the starting point for generating a series of pseudorandom integers in the current thread. To reinitialize the generator to create the same sequence of results, call the `srand` function and use the same `seed` argument again. Any other value for `seed` sets the generator to a different starting point in the pseudorandom sequence. `rand` retrieves the pseudorandom numbers that are generated. Calling `rand` before any call to `srand` generates the same sequence as calling `srand` with `seed` passed as 1.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`srand`|\<stdlib.h>|  
  
 For additional compatibility information, see [Compatibility](../crt/compatibility.md) in the Introduction.  
  
## Example  
 See the example for [rand](../crt/rand.md).  
  
## .NET Framework Equivalent  
 [System::Random Class](https://msdn.microsoft.com/en-us/library/system.random.aspx)  
  
## See Also  
 [Floating-Point Support](../crt/floating-point-support.md)   
 [rand](../crt/rand.md)