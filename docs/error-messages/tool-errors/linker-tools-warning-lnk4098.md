---
title: "Linker Tools Warning LNK4098 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK4098"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4098"
ms.assetid: 1f1b1408-1316-4e34-80f5-6a02f2db0ac1
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Linker Tools Warning LNK4098
defaultlib 'library' conflicts with use of other libs; use /NODEFAULTLIB:library  
  
 You are trying to link with incompatible libraries.  
  
> [!NOTE]
>  The run-time libraries now contain directives to prevent mixing different types. You will receive this warning if you try to use different types or debug and non-debug versions of the run-time library in the same program. For example, if you compiled one file to use one kind of run-time library and another file to use another kind (for example, single-threaded versus multithreaded) and tried to link them, you will get this warning. You should compile all source files to use the same run-time library. See the [Use Run-Time Library](../../build/reference/md-mt-ld-use-run-time-library.md) (**/MD**, **/MT**, **/LD**) compiler options for more information.  
  
 You can use the linker's [/VERBOSE:LIB](../../build/reference/verbose-print-progress-messages.md) switch to determine which libraries the linker is searching. If you receive LNK4098 and want to create an executable file that uses, for example, the single-threaded, non-debug run-time libraries, use the **/VERBOSE:LIB** option to find out which libraries the linker is searching. The linker should print LIBC.lib and not LIBCMT.lib, MSVCRT.lib, LIBCD.lib, LIBCMTD.lib, or MSVCRTD.lib as the libraries searched. You can tell the linker to ignore the incorrect run-time libraries by using [/NODEFAULTLIB](../../build/reference/nodefaultlib-ignore-libraries.md) for each library you want to ignore.  
  
 The table below shows which libraries should be ignored depending on which run-time library you want to use.  
  
|To use this run-time library|Ignore these libraries|  
|-----------------------------------|----------------------------|  
|Single-threaded (libc.lib)|libcmt.lib, msvcrt.lib, libcd.lib, libcmtd.lib, msvcrtd.lib|  
|Multithreaded (libcmt.lib)|libc.lib, msvcrt.lib, libcd.lib, libcmtd.lib, msvcrtd.lib|  
|Multithreaded using DLL (msvcrt.lib)|libc.lib, libcmt.lib, libcd.lib, libcmtd.lib, msvcrtd.lib|  
|Debug Single-threaded (libcd.lib)|libc.lib, libcmt.lib, msvcrt.lib, libcmtd.lib, msvcrtd.lib|  
|Debug Multithreaded (libcmtd.lib)|libc.lib, libcmt.lib, msvcrt.lib, libcd.lib, msvcrtd.lib|  
|Debug Multithreaded using DLL (msvcrtd.lib)|libc.lib, libcmt.lib, msvcrt.lib, libcd.lib, libcmtd.lib|  
  
 For example, if you received this warning and you want to create an executable file that uses the non-debug, single-threaded version of the run-time libraries, you could use the following options with the linker:  
  
```  
/NODEFAULTLIB:libcmt.lib /NODEFAULTLIB:msvcrt.lib /NODEFAULTLIB:libcd.lib /NODEFAULTLIB:libcmtd.lib /NODEFAULTLIB:msvcrtd.lib  
```