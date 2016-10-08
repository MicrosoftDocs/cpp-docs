---
title: "_amsg_exit"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
apiname: 
  - _amsg_exit
apilocation: 
  - msvcrt.dll
  - msvcr80.dll
  - msvcr90.dll
  - msvcr100.dll
  - msvcr100_clr0400.dll
  - msvcr110.dll
  - msvcr110_clr0400.dll
  - msvcr120.dll
  - msvcr120_clr0400.dll
  - ucrtbase.dll
apitype: DLLExport
ms.assetid: 146d4faf-d763-43a4-b264-12711196456b
caps.latest.revision: 2
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# _amsg_exit
Emits a specified runtime error message and then exits your application with error code 255.  
  
## Syntax  
  
```cpp  
void _amsg_exit (  
   int rterrnum  
   )  
```  
  
#### Parameters  
 `rterrnum`  
 The identification number of a system-defined runtime error message.  
  
## Remarks  
 This function emits the runtime error message to **stderr** for console applications, or displays the message in a message box for Windows applications. In debug mode, you can choose to invoke the debugger before exiting.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|_amsg_exit|internal.h|