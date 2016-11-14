---
title: "_set_app_type | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_set_app_type"
apilocation: 
  - "api-ms-win-crt-runtime-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_set_app_type"
  - "corecrt_startup/_set_app_type"
dev_langs: 
  - "C++"
ms.assetid: 1e7fe786-b587-4116-8c05-f7d762350100
caps.latest.revision: 3
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _set_app_type
An internal function used at startup to tell the CRT whether the app is a console app or a GUI app.  
  
## Syntax  
  
```cpp
typedef enum _crt_app_type
{
    _crt_unknown_app,
    _crt_console_app,
    _crt_gui_app
} _crt_app_type;

void __cdecl _set_app_type(
    _crt_app_type appType
    ); 
```  
  
## Parameters  
 `appType`  
 A value that indicates the application type. The possible values are:  
  
|Value|Description|  
|----------------|-----------------|  
|_crt_unknown_app|Unknown application type.|  
|_crt_console_app|Console (command-line) application.|  
|_crt_gui_app|GUI (Windows) application.|  
  
## Remarks  
 Normally, you do not need to call this function. It is part of the C runtime startup code that executes before `main` is called in your app.
 
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|_set_app_type|process.h|

