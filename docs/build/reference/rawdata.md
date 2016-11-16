---
title: "-RAWDATA | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/rawdata"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RAWDATA dumpbin option"
  - "raw data"
  - "-RAWDATA dumpbin option"
  - "/RAWDATA dumpbin option"
ms.assetid: 41cba845-5e1f-415e-9fe4-604a52235983
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
# /RAWDATA
```  
/RAWDATA[:{1|2|4|8|NONE[,number]]  
```  
  
## Remarks  
 This option displays the raw contents of each section in the file. The arguments control the format of the display, as shown below:  
  
|Argument|Result|  
|--------------|------------|  
|1|The default. Contents are displayed in hexadecimal bytes, and also as ASCII characters if they have a printed representation.|  
|2|Contents are displayed as hexadecimal 2-byte values.|  
|4|Contents are displayed as hexadecimal 4-byte values.|  
|8|Contents are displayed as hexadecimal 8-byte values.|  
|NONE|Raw data is suppressed. This argument is useful to control the output of /ALL.|  
|*Number*|Displayed lines are set to a width that holds `number` values per line.|  
  
 Only the [/HEADERS](../../build/reference/headers.md) DUMPBIN option is available for use on files produced with the [/GL](../../build/reference/gl-whole-program-optimization.md) compiler option.  
  
## See Also  
 [DUMPBIN Options](../../build/reference/dumpbin-options.md)