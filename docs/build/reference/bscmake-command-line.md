---
title: "BSCMAKE Command Line | Microsoft Docs"
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
  - "BSCMAKE, command line"
ms.assetid: 8006e8cf-8bfe-4c23-868a-b0a25e6bbf0f
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
# BSCMAKE Command Line
To run BSCMAKE, use the following command line syntax:  
  
```  
BSCMAKE [options] sbrfiles  
```  
  
 Options can appear only in the `options` field on the command line.  
  
 The *sbrfiles* field specifies one or more .sbr files created by a compiler or assembler. Separate the names of .sbr files with spaces or tabs. You must specify the extension; there is no default. You can specify a path with the filename, and you can use operating-system wildcards (* and ?).  
  
 During an incremental build, you can specify new .sbr files that were not part of the original build. If you want all contributions to remain in the browse information file, you must specify all .sbr files (including truncated files) that were originally used to create the .bsc file. If you omit an .sbr file, that file's contribution to the browse information file is removed.  
  
 Do not specify a truncated .sbr file for a full build. A full build requires contributions from all specified .sbr files. Before you perform a full build, recompile the project and create a new .sbr file for each empty file.  
  
 The following command runs BSCMAKE to build a file called MAIN.bsc from three .sbr files:  
  
```  
BSCMAKE main.sbr file1.sbr file2.sbr  
```  
  
 For related information, see [BSCMAKE Command File](../../build/reference/bscmake-command-file-response-file.md) and [BSCMAKE Options](../../build/reference/bscmake-options.md).  
  
## See Also  
 [BSCMAKE Reference](../../build/reference/bscmake-reference.md)