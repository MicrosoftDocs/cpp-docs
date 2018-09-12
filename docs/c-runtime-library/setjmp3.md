---
title: "_setjmp3 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "conceptual"
apiname: ["_setjmp3"]
apilocation: ["msvcrt.dll", "msvcr90.dll", "msvcr110.dll", "msvcr80.dll", "msvcr110_clr0400.dll", "msvcr100.dll", "msvcr120.dll"]
apitype: "DLLExport"
f1_keywords: ["setjmp3", "_setjmp3"]
dev_langs: ["C++"]
helpviewer_keywords: ["_setjmp3 function", "setjmp3 function"]
ms.assetid: 6129c2f3-8bac-4fdb-a827-44e1eebba500
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _setjmp3
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
`env`<br/>
[out] Address of the buffer for storing state information.  
  
`count`<br/>
[in] The number of additional `DWORD`s of information that are stored in the `optional parameters`.  
  
`optional parameters`<br/>
[in] Additional data pushed down by the `setjmp` intrinsic. The first `DWORD` is a function pointer that is used to unwind extra data and return to a nonvolatile register state. The second `DWORD` is the try level to be restored. Any further data is saved in the generic data array in the `jmp_buf`.  
  
## Return Value  
 Always returns 0.  
  
## Remarks  
 Do not use this function in a C++ program. It is an intrinsic function that does not support C++. For more information about how to use `setjmp`, see [Using setjmp/longjmp](../cpp/using-setjmp-longjmp.md).  
  
## Requirements  
  
## See Also  
 [Alphabetical Function Reference](../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [setjmp](../c-runtime-library/reference/setjmp.md)