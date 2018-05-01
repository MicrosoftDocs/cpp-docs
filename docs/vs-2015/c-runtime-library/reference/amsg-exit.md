---
title: "_amsg_exit | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
api_name: 
  - "_amsg_exit"
api_location: 
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
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
f1_keywords: 
  - "_amsg_exit"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_amsg_exit"
ms.assetid: 146d4faf-d763-43a4-b264-12711196456b
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _amsg_exit
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [_amsg_exit](https://docs.microsoft.com/cpp/c-runtime-library/reference/amsg-exit).  
  
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





