---
title: "_outp, _outpw, _outpd | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_outpd"
  - "_outp"
  - "_outpw"
apilocation: 
  - "msvcrt.dll"
  - "msvcr100.dll"
  - "msvcr120.dll"
  - "msvcr90.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr80.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_outpw"
  - "_outpd"
  - "_outp"
  - "outpd"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "outpw function"
  - "words"
  - "_outpd function"
  - "outpd function"
  - "outp function"
  - "ports, writing bytes at"
  - "bytes, writing to ports"
  - "words, writing to ports"
  - "double words"
  - "double words, writing to ports"
  - "_outpw function"
  - "_outp function"
ms.assetid: c200fe22-41f6-46fd-b0be-ebb805b35181
caps.latest.revision: 16
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
# _outp, _outpw, _outpd
Outputs, at a port, a byte (`_outp`), a word (`_outpw`), or a double word (`_outpd`).  
  
> [!IMPORTANT]
>  These functions are obsolete. Beginning in Visual Studio 2015, they are not available in the CRT.  
  
> [!IMPORTANT]
>  This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
  
      int _outp(  
unsigned short port,  
int databyte   
);  
unsigned short _outpw(  
unsigned short port,  
unsigned short dataword   
);  
unsigned long _outpd(  
unsigned short port,  
unsigned long dataword   
);  
```  
  
#### Parameters  
 *port*  
 Port number.  
  
 *databyte, dataword*  
 Output values.  
  
## Return Value  
 The functions return the data output. There is no error return.  
  
## Remarks  
 The `_outp`, `_outpw`, and `_outpd` functions write a byte, a word, and a double word, respectively, to the specified output port. The *port* argument can be any unsigned integer in the range 0 – 65,535; *databyte* can be any integer in the range 0 – 255; and *dataword* can be any value in the range of an integer, an unsigned short integer, and an unsigned long integer, respectively.  
  
 Because these functions write directly to an I/O port, they cannot be used in user code in Windows NT, Windows 2000, Windows XP, and Windows Server 2003. For information about using I/O ports in these operating systems, search for "Serial Communications in Win32" at MSDN.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_outp`|\<conio.h>|  
|`_outpw`|\<conio.h>|  
|`_outpd`|\<conio.h>|  
  
 For more compatibility information, see [Compatibility](../c-runtime-library/compatibility.md).  
  
## Libraries  
 All versions of the [C run-time libraries](../c-runtime-library/crt-library-features.md).  
  
## See Also  
 [Console and Port I/O](../c-runtime-library/console-and-port-i-o.md)   
 [_inp, _inpw, _inpd](../c-runtime-library/inp-inpw-inpd.md)