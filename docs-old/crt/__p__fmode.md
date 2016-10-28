---
title: "__p__fmode"
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
  
 File translation mode specifies either `binary` or `text` translation for [_open](../crt/_open--_wopen.md) and [_pipe](../crt/_pipe.md) I/O operations. For more information, see [_fmode](../crt/_fmode.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|__p\__fmode|stdlib.h|