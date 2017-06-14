---
title: "_get_FMA3_enable, _set_FMA3_enable | Microsoft Docs"
ms.custom: ""
ms.date: "6/13/2017"
ms.reviewer: ""
ms.suite: ""
ms.technology:  
  - "cpp-standard-libraries"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_get_FMA3_enable"
  - "_set_FMA3_enable"
apilocation: 
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
  - "api-ms-win-crt-runtime-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_get_FMA3_enable"
  - "_set_FMA3_enable"
  - "math/_get_FMA3_enable"
  - "math/_set_FMA3_enable"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_get_FMA3_enable"
  - "_set_FMA3_enable"
ms.assetid: 4c1dc4bc-e86b-451b-9211-5a2ba6c98ee4
caps.latest.revision: 1
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.mt: 
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
# _get_FMA3_enable, _set_FMA3_enable
Gets or sets a flag that specifies whether the floating-point library functions use AVX FMA3 instructions in .  
  
## Syntax  
  
```  
int _set_FMA3_enable(int flag);
int _get_FMA3_enable();
```  
  
## Return Value  
 A non-zero value if the floating-point library functions are set to use.  
  
## Remarks  
   
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
||C: \<stdlib.h><br /><br /> C++: \<cstdlib> or \<stdlib.h>|  
  
 The  functions are Microsoft specific. For compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## See Also  
