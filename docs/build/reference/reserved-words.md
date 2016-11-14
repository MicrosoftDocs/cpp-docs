---
title: "Reserved Words | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "code"
  - "CONFORMING"
  - "DISCARDABLE"
  - "Description"
  - "base"
  - "APPLOADER"
  - "Data"
  - "DYNAMIC"
  - "DEV386"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".def files [C++], reserved words"
  - "def files [C++], reserved words"
  - "linker [C++], reserved words"
  - "reserved words [C++]"
ms.assetid: 9b9f49e5-0739-45ab-a37e-81e3915ceb25
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
# Reserved Words
The following words are reserved by the linker. These names can be used as arguments in [module-definition statements](../../build/reference/module-definition-dot-def-files.md) only if the name is enclosed in double quotation marks ("").  
  
||||  
|-|-|-|  
|**APPLOADER**1|**INITINSTANCE**2|**PRELOAD**|  
|**BASE**|**IOPL**|**PRIVATE**|  
|**CODE**|**LIBRARY**1|**PROTMODE**2|  
|**CONFORMING**|**LOADONCALL**1|**PURE**1|  
|**DATA**|**LONGNAMES**2|**READONLY**|  
|**DESCRIPTION**|`MOVABLE`1|**READWRITE**|  
|**DEV386**|**MOVEABLE**1|**REALMODE**1|  
|**DISCARDABLE**|**MULTIPLE**|**RESIDENT**|  
|**DYNAMIC**|**NAME**|**RESIDENTNAME**1|  
|**EXECUTE-ONLY**|**NEWFILES**2|**SECTIONS**|  
|**EXECUTEONLY**|`NODATA`1|**SEGMENTS**|  
|**EXECUTEREAD**|**NOIOPL**1|**SHARED**|  
|**EXETYPE**|**NONAME**|**SINGLE**|  
|**EXPORTS**|**NONCONFORMING**1|**STACKSIZE**|  
|**FIXED**1|**NONDISCARDABLE**|**STUB**|  
|**FUNCTIONS**2|**NONE**|**VERSION**|  
|**HEAPSIZE**|**NONSHARED**|**WINDOWAPI**|  
|**IMPORTS**|**NOTWINDOWCOMPAT**1|**WINDOWCOMPAT**|  
|**IMPURE**1|**OBJECTS**|**WINDOWS**|  
|**INCLUDE**2|**OLD**1||  
  
 1 The linker emits a warning ("ignored") when it encounters this term. However, the word is still reserved.  
  
 2 The linker ignores this word but emits no warning.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)