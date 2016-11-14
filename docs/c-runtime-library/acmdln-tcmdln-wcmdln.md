---
title: "_acmdln, _tcmdln, _wcmdln | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_wcmdln"
  - "_acmdln"
apilocation: 
  - "msvcrt.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_acmdln"
  - "acmdln"
  - "_wcmdln"
  - "wcmdln"
  - "_tcmdln"
  - "tcmdln"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_wcmdln global variable"
  - "wcmdln global variable"
  - "_acmdln global variable"
  - "_tcmdln global variable"
  - "tcmdln global variable"
  - "acmdln global variable"
ms.assetid: 4fc0a6a0-3f93-420a-a19f-5276061ba539
caps.latest.revision: 7
author: "corob-msft"
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
  
## See Also  
 [Global Variables](../c-runtime-library/global-variables.md)