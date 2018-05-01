---
title: "_setjmp3 | Microsoft Docs"
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
  - "_setjmp3"
api_location: 
  - "msvcrt.dll"
  - "msvcr90.dll"
  - "msvcr110.dll"
  - "msvcr80.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr100.dll"
  - "msvcr120.dll"
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
f1_keywords: 
  - "setjmp3"
  - "_setjmp3"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_setjmp3 function"
  - "setjmp3 function"
ms.assetid: 6129c2f3-8bac-4fdb-a827-44e1eebba500
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _setjmp3
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [_setjmp3](https://docs.microsoft.com/cpp/c-runtime-library/setjmp3).  
  
Internal CRT function. A new implementation of the `setjmp` function.  
  
## Syntax  
  
```  
int _setjmp3(  
   OUT jmp_buf env,  
   int count,  
   (optional parameters)  
);  
```  
  
#### Parameters  
 [out] `env`  
 Address of the buffer for storing state information.  
  
 [in] `count`  
 The number of additional `DWORD`s of information that are stored in the `optional parameters`.  
  
 [in] `optional parameters`  
 Additional data pushed down by the `setjmp` intrinsic. The first `DWORD` is a function pointer that is used to unwind extra data and return to a nonvolatile register state. The second `DWORD` is the try level to be restored. Any further data is saved in the generic data array in the `jmp_buf`.  
  
## Return Value  
 Always returns 0.  
  
## Remarks  
 Do not use this function in a C++ program. It is an intrinsic function that does not support C++. For more information about how to use `setjmp`, see [Using setjmp/longjmp](../cpp/using-setjmp-longjmp.md).  
  
## Requirements  
  
## See Also  
 [Alphabetical Function Reference](../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [setjmp](../c-runtime-library/reference/setjmp.md)





