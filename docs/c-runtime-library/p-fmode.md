---
title: "__p__fmode | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "__p__fmode"
apilocation: 
  - "msvcr80.dll"
  - "msvcr120.dll"
  - "msvcr90.dll"
  - "msvcrt.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr100.dll"
apitype: "DLLExport"
f1_keywords: 
  - "__p__fmode"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__p__fmode"
ms.assetid: 1daa1394-81eb-43aa-a71b-4cc6acf3207b
caps.latest.revision: 3
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# __p__fmode
Points to the `_fmode` global variable, which specifies the default *file translation mode* for file I/O operations.  
  
## Syntax  
  
```cpp  
int* __p__fmode(  
   );  
```  
  
## Return Value  
 Pointer to the `_fmode` global variable.  
  
## Remarks  
 The `__p__fmode` function is for internal use only, and should not be called from user code.  
  
 File translation mode specifies either `binary` or `text` translation for [_open](../c-runtime-library/reference/open-wopen.md) and [_pipe](../c-runtime-library/reference/pipe.md) I/O operations. For more information, see [_fmode](../c-runtime-library/fmode.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|__p\__fmode|stdlib.h|