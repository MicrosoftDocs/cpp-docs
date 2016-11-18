---
title: "-execution-charset (Set Execution Character Set) | Microsoft Docs"
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
  - "execution-charset"
  - "/execution-charset"
dev_langs: 
  - "C"
  - "C++"
helpviewer_keywords: 
  - "/execution-charset compiler option"
  - "-execution-charset compiler option"
ms.assetid: 0e02f487-2236-45bc-95f3-5760933a8f96
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# /execution-charset (Set Execution Character Set)
Lets you specify the execution character set for your executable.  
  
## Syntax  
  
```  
/execution-charset:[IANA_name|.CPID]  
```  
  
## Arguments  
 **IANA_name**  
 The IANA-defined character set name.  
  
 **CPID**  
 The code page identifier.  
  
## Remarks  
 You can use the **/execution-charset** option to specify an execution character set. The execution character set is the encoding used for the text of your program that is input to the compilation phase after all preprocessing steps. This character set is used for the internal representation of any string or character literals in the compiled code. Set this option to specify the extended execution character set to use when your source files include characters that are not representable in the basic execution character set. You can use either the IANA or ISO character set name, or a dot (.) followed by a 3 to 5 digit decimal code page identifier to specify the character set to use. For a list of supported code page identifiers and character set names, see [Code Page Identifiers](http://msdn.microsoft.com/en-us/5d6fc86a-f205-4d14-bb7c-ecd71682e0fe).  
  
 By default, Visual Studio detects a byte-order mark to determine if the source file is in an encoded Unicode format, for example, UTF-16 or UTF-8. If no byte-order mark is found, it assumes the source file is encoded using the current user code page, unless you have specified a character set name or code page by using the **/source-charset** option or the **/utf-8** option. Visual Studio allows you to save your C++ source code by using any of several character encodings. For information about source and execution character sets, see [Character Sets](../../cpp/character-sets2.md) in the language documentation.  
  
 If you want to set both the source character set and the execution character set to UTF-8, you can use the **/utf-8** compiler option as a shortcut. It is equivalent to specifying **/source-charset:utf-8 /execution-charset:utf-8** on the command line. Any of these options also enables the **/validate-charset** option by default.  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project **Property Pages** dialog box. For more information, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Expand the **Configuration Properties**, **C/C++**, **Command Line** folder.  
  
3.  In **Advanced Options**, add the **/execution-charset** option, and specify your preferred encoding.  
  
4.  Choose **OK** to save your changes.  
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)   
 [/source-charset (Set Source Character Set)](../../build/reference/source-charset-set-source-character-set.md)   
 [/utf-8 (Set Source and Executable character sets to UTF-8)](../../build/reference/utf-8-set-source-and-executable-character-sets-to-utf-8.md)   
 [/validate-charset (Validate for compatible characters)](../../build/reference/validate-charset-validate-for-compatible-characters.md)