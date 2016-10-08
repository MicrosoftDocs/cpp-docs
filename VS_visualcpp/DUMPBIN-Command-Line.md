---
title: "DUMPBIN Command Line"
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
ms.assetid: e6ad17d3-965d-41aa-9dfd-75bb073718d4
caps.latest.revision: 8
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
# DUMPBIN Command Line
To run DUMPBIN, use the following syntax:  
  
```  
DUMPBIN [options] files...  
```  
  
 Specify one or more binary files, along with any options required to control the information. DUMPBIN displays the information to standard output. You can either redirect it to a file or use the /OUT option to specify a file name for the output.  
  
 When you run DUMPBIN on a file without specifying an option, DUMPBIN displays the /SUMMARY output.  
  
 When you type the command `dumpbin` without any other command-line input, DUMPBIN displays a usage statement that summarizes its options.  
  
## See Also  
 [C/C++ Build Tools](../VS_visualcpp/C-C---Build-Tools.md)   
 [DUMPBIN Reference](../VS_visualcpp/DUMPBIN-Reference.md)