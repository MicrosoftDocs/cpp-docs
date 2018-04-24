---
title: "_inp, _inpw, _inpd | Microsoft Docs"
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
  - "_inp"
  - "_inpw"
  - "_inpd"
api_location: 
  - "msvcrt.dll"
  - "msvcr120.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr80.dll"
  - "msvcr100.dll"
  - "msvcr90.dll"
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
f1_keywords: 
  - "inpd"
  - "_inp"
  - "_inpw"
  - "_inpd"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "inp function"
  - "inpw function"
  - "ports, I/O routines"
  - "inpd function"
  - "_inp function"
  - "_inpd function"
  - "I/O [CRT], port"
  - "_inpw function"
ms.assetid: 5d9c2e38-fc85-4294-86d5-7282cc02d1b3
caps.latest.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _inp, _inpw, _inpd
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [_inp, _inpw, _inpd](https://docs.microsoft.com/cpp/c-runtime-library/inp-inpw-inpd).  
  
Inputs, from a port, a byte (`_inp`), a word (`_inpw`), or a double word (`_inpd`).  
  
> [!IMPORTANT]
>  These functions are obsolete. Beginning in Visual Studio 2015, they are not available in the CRT.  
  
> [!IMPORTANT]
>  This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
int _inp(   
   unsigned short port   
);  
unsigned short _inpw(   
   unsigned short port   
);  
unsigned long _inpd(   
   unsigned short port   
);  
```  
  
#### Parameters  
 `port`  
 I/O port number.  
  
## Return Value  
 The functions return the byte, word, or double word read from `port`. There is no error return.  
  
## Remarks  
 The `_inp`, `_inpw`, and `_inpd` functions read a byte, a word, and a double word, respectively, from the specified input port. The input value can be any unsigned short integer in the range 0 – 65,535.  
  
 Because these functions read directly from an I/O port, they might not be used in user code in Windows NT, Windows 2000, Windows XP, and Windows Server 2003.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_inp`|\<conio.h>|  
|`_inpw`|\<conio.h>|  
|`_inpd`|\<conio.h>|  
  
 For more compatibility information, see [Compatibility](../c-runtime-library/compatibility.md).  
  
## Libraries  
 All versions of the [C run-time libraries](../c-runtime-library/crt-library-features.md).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Console and Port I/O](../c-runtime-library/console-and-port-i-o.md)   
 [_outp, _outpw, _outpd](../c-runtime-library/outp-outpw-outpd.md)





