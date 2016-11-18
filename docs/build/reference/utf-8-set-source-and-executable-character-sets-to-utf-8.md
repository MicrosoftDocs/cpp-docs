---
title: "-utf-8 (Set Source and Executable character sets to UTF-8) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp"
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/utf-8"
dev_langs: 
  - "C"
  - "C++"
helpviewer_keywords: 
  - "/utf-8 compiler option"
ms.assetid: f0e1f3cb-6cae-46eb-9483-04ed13d9b504
caps.latest.revision: 3
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# /utf-8 (Set Source and Executable character sets to UTF-8)
Specifies both the source character set and the execution character set as UTF-8.  
  
## Syntax  
  
```  
/utf-8  
```  
  
## Remarks  
 You can use the **/utf-8** option to specify both the source and execution character sets as encoded by using UTF-8. It is equivalent to specifying **/source-charset:utf-8 /execution-charset:utf-8** on the command line. Any of these options also enables the **/validate-charset** option by default. For a list of supported code page identifiers and character set names, see [Code Page Identifiers](http://msdn.microsoft.com/en-us/5d6fc86a-f205-4d14-bb7c-ecd71682e0fe).  
  
 By default, Visual Studio detects a byte-order mark to determine if the source file is in an encoded Unicode format, for example, UTF-16 or UTF-8. If no byte-order mark is found, it assumes the source file is encoded using the current user code page, unless you have specified a code page by using **/utf-8** or the **/source-charset** option. Visual Studio allows you to save your C++ source code by using any of several character encodings. For information about source and execution character sets, see [Character Sets](../../cpp/character-sets2.md) in the language documentation.  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project **Property Pages** dialog box. For more information, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Expand the **Configuration Properties**, **C/C++**, **Command Line** folder.  
  
3.  In **Advanced Options**, add the **/utf-8** option, and specify your preferred encoding.  
  
4.  Choose **OK** to save your changes.  
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)   
 [/execution-charset (Set Execution Character Set)](../../build/reference/execution-charset-set-execution-character-set.md)   
 [/source-charset (Set Source Character Set)](../../build/reference/source-charset-set-source-character-set.md)   
 [/validate-charset (Validate for compatible characters)](../../build/reference/validate-charset-validate-for-compatible-characters.md)