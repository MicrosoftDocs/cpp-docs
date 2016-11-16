---
title: "Return Value of cl.exe | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "cl.exe compiler, return value"
ms.assetid: 7c2d7f33-ee0d-4199-8ef4-75fe2b007670
caps.latest.revision: 8
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
# Return Value of cl.exe
cl.exe returns zero for success (no errors) and non-zero otherwise.  
  
 The return value of cl.exe can be useful if you are compiling from a script, powershell, .cmd, or .bat file. We recommend that you capture the output of the compiler in case there are errors or warnings, so that you can resolve them.  
  
 There are too many possible error exit codes for cl.exe to list them all. You can look up an error code in the winerror.h or ntstatus.h files included in the Windows Software Development Kit in the %ProgramFiles(x86)%\Windows Kits\\`version`\Include\shared\ directory. Error codes returned in decimal must be converted to hexadecimal for search. For example, an error code of -1073741620 converted to hexadecimal is 0xC00000CC. This error is found in ntstatus.h, where the corresponding message is "The specified share name cannot be found on the remote server." For a downloadable list of Windows error codes, see [&#91;MS-ERREF&#93;: Windows Error Codes](http://msdn.microsoft.com/en-us/1bc92ddf-b79e-413c-bbaa-99a5281a6c90).  
  
 You can also use the error lookup utility in Visual Studio to find out what a compiler error message means. In a Visual Studio command shell, enter **errlook.exe** to start the utility; or in the Visual Studio IDE, on the menu bar, choose **Tools**, **Error Lookup**. Enter the error value to find the descriptive text associated with the error. For more information see [ERRLOOK Reference](../../build/reference/errlook-reference.md).  
  
## Remarks  
 The following is a sample .bat file that uses the return value of cl.exe.  
  
```  
echo off  
cl /W4 t.cpp  
@if ERRORLEVEL == 0 (  
   goto good  
)  
  
@if ERRORLEVEL != 0 (  
   goto bad  
)  
  
:good  
   echo "clean compile"  
   echo %ERRORLEVEL%  
   goto end  
  
:bad  
   echo "error or warning"  
   echo %ERRORLEVEL%  
   goto end  
  
:end  
```  
  
## See Also  
 [Compiler Command-Line Syntax](../../build/reference/compiler-command-line-syntax.md)