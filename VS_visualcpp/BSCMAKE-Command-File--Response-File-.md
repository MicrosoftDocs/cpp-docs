---
title: "BSCMAKE Command File (Response File)"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: abdffeea-35c7-4f2d-8c17-7d0d80bac314
caps.latest.revision: 7
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# BSCMAKE Command File (Response File)
You can provide part or all of the command-line input in a command file. Specify the command file using the following syntax:  
  
```  
BSCMAKE @filename  
```  
  
 Only one command file is allowed. You can specify a path with *filename*. Precede *filename* with an at sign (@). BSCMAKE does not assume an extension. You can specify additional *sbrfiles* on the command line after *filename*. The command file is a text file that contains the input to BSCMAKE in the same order as you would specify it on the command line. Separate the command-line arguments with one or more spaces, tabs, or newline characters.  
  
 The following command calls BSCMAKE using a command file:  
  
```  
BSCMAKE @prog1.txt  
```  
  
 The following is a sample command file:  
  
```  
/n /v /o main.bsc /El  
/S (  
toolbox.h  
verdate.h c:\src\inc\screen.h  
)  
file1.sbr file2.sbr file3.sbr file4.sbr  
```  
  
## See Also  
 [BSCMAKE Reference](../VS_visualcpp/BSCMAKE-Reference.md)