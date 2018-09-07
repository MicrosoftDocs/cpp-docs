---
title: "_local_unwind2 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "conceptual"
apiname: ["_local_unwind2"]
apilocation: ["msvcr110_clr0400.dll", "msvcrt.dll", "msvcr100.dll", "msvcr110.dll", "msvcr80.dll", "msvcr90.dll", "msvcr120.dll"]
apitype: "DLLExport"
f1_keywords: ["_local_unwind2", "local_unwind2"]
dev_langs: ["C++"]
helpviewer_keywords: ["_local_unwind2 function", "local_unwind2 function"]
ms.assetid: 44f1fa82-e01e-490f-a6e6-18fc6811c28c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _local_unwind2
Internal CRT Function. Runs all termination handlers that are listed in the indicated scope table.  
  
## Syntax  
  
```  
void _local_unwind2(  
   PEXCEPTION_REGISTRATION xr,  
   int stop  
);  
```  
  
#### Parameters  
 [in] `xr`  
 A registration record that is associated with one scope table.  
  
 [in] `stop`  
 The lexical level that indicates where `_local_unwind2` should stop.  
  
## Remarks  
 This method is used only by the run-time environment. Do not call the method in your code.  
  
 When this method executes termination handlers, it starts at the current lexical level and works its way up in lexical levels until it reaches the level that is indicated by `stop`. It does not execute termination handlers at the level that is indicated by `stop`.  
  
## See Also  
 [Alphabetical Function Reference](../c-runtime-library/reference/crt-alphabetical-function-reference.md)