---
title: "_set_abort_behavior | Microsoft Docs"
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
  - "_set_abort_behavior"
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
  - "api-ms-win-crt-runtime-l1-1-0.dll"
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
f1_keywords: 
  - "_set_abort_behavior"
  - "set_abort_behavior"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "aborting programs"
  - "_set_abort_behavior function"
  - "set_abort_behavior function"
ms.assetid: 43918766-e4ba-4b1f-80e8-1a4a910cd452
caps.latest.revision: 30
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _set_abort_behavior
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [_set_abort_behavior](https://docs.microsoft.com/cpp/c-runtime-library/reference/set-abort-behavior).  
  
Specifies the action to be taken when a program is abnormally terminated.  
  
> [!NOTE]
>  Do not use the `abort` function to shut down a [!INCLUDE[win8_appname_long](../../includes/win8-appname-long-md.md)] app, except in testing or debugging scenarios. Programmatic or UI ways to close a [!INCLUDE[win8_appname_long](../../includes/win8-appname-long-md.md)] app are not permitted according to the [Windows 8 app certification requirements](http://go.microsoft.com/fwlink/?LinkId=262889). For more information, see [Application lifecycle (Windows Store apps)](http://go.microsoft.com/fwlink/?LinkId=262853).  
  
## Syntax  
  
```  
unsigned int _set_abort_behavior(  
   unsigned int flags,  
   unsigned int mask  
);  
```  
  
#### Parameters  
 [in] `flags`  
 New value of the `abort` flags.  
  
 [in] `mask`  
 Mask for the `abort` flags bits to set.  
  
## Return Value  
 The old value of the flags.  
  
## Remarks  
 There are two `abort` flags: `_WRITE_ABORT_MSG` and `_CALL_REPORTFAULT`. `_WRITE_ABORT_MSG` determines whether a helpful text message is printed when a program is abnormally terminated. The message states that the application has called the `abort` function. The default behavior is to print the message. `_CALL_REPORTFAULT`, if set, specifies that a Watson crash dump is generated and reported when `abort` is called. By default, crash dump reporting is enabled in non-DEBUG builds.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_set_abort_behavior`|\<stdlib.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Example  
  
```c  
  
      // crt_set_abort_behavior.c  
// compile with: /TC  
#include <stdlib.h>  
  
int main()  
{  
   printf("Suppressing the abort message. If successful, this message"  
          " will be the only output.\n");  
   // Suppress the abort message  
   _set_abort_behavior( 0, _WRITE_ABORT_MSG);  
   abort();  
}  
```  
  
```Output  
Suppressing the abort message. If successful, this message will be the only output.  
```  
  
## See Also  
 [abort](../../c-runtime-library/reference/abort.md)





