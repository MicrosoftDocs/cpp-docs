---
title: "@ (Specify a Compiler Response File) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "@"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "response files, C/C++ compiler"
  - "@ compiler option"
  - "cl.exe compiler, specifying response files"
ms.assetid: 400fffee-909d-4f60-bf76-45833e822685
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# @ (Specify a Compiler Response File)
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [@ (Specify a Compiler Response File)](https://docs.microsoft.com/cpp/build/reference/at-specify-a-compiler-response-file).  
  
  
Specifies a compiler response file.  
  
## Syntax  
  
```  
@response_file  
```  
  
## Arguments  
 `response_file`  
 A text file containing compiler commands.  
  
## Remarks  
 A response file can contain any commands that you would specify on the command line. This can be useful if your command-line arguments exceed 127 characters.  
  
 It is not possible to specify the **@** option from within a response file. That is, a response file cannot embed another response file.  
  
 From the command line you can specify as many response file options (for example, `@respfile.1 @respfile.2`) as you want.  
  
### To set this compiler option in the Visual Studio development environment  
  
-   A response file cannot be specified from within the development environment and must be specified at the command line.  
  
### To set this compiler option programmatically  
  
-   This compiler option cannot be changed programmatically.  
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)

