---
title: "LINK Command Files"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "link"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "syntax, LINK command files"
  - "command files [C++]"
  - "LINK tool [C++]"
  - "text files, passing arguments to LINK"
  - "LINK tool [C++], command-line syntax"
  - "command files [C++], LINK"
ms.assetid: 7154511c-32b9-4e5b-a515-3922fa9de48e
caps.latest.revision: 8
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
# LINK Command Files
You can pass command-line arguments to LINK in the form of a command file. To specify a command file to the linker, use the following syntax:  
  
```  
LINK @commandfile  
```  
  
 The `commandfile` is the name of a text file. No space or tab is allowed between the at sign (@) and the filename. There is no default extension; you must specify the full filename, including any extension. Wildcards cannot be used. You can specify an absolute or relative path with the filename. LINK does not use an environment variable to search for the file.  
  
 In the command file, arguments can be separated by spaces or tabs (as on the command line) and by newline characters.  
  
 You can specify all or part of the command line in a command file. You can use more than one command file in a LINK command. LINK accepts the command-file input as if it were specified in that location on the command line. Command files cannot be nested. LINK echoes the contents of command files, unless the [/NOLOGO](../buildref/-nologo--suppress-startup-banner---linker-.md) option is specified.  
  
## Example  
 The following command to build a DLL passes the names of object files and libraries in separate command files and uses a third command file for specification of the /EXPORTS option:  
  
```  
link /dll @objlist.txt @liblist.txt @exports.txt  
```  
  
## See Also  
 [Setting Linker Options](../buildref/setting-linker-options.md)   
 [Linker Options](../buildref/linker-options.md)