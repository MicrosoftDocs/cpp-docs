---
title: "BSCMAKE Error BK1503"
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
ms.topic: error-reference
ms.assetid: e6582344-b91e-486f-baf3-4f9028d83c3b
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
# BSCMAKE Error BK1503
cannot write to file 'filename' [: reason]  
  
 BSCMAKE combines the .sbr files generated during compilation into one browser database. If the resulting browser database exceeds 64 MB, or if the number of input (.sbr) files exceeds 4092, this error will be emitted.  
  
 If the problem is caused by more than 4092 .sbr files, you must reduce the number of input files. From within Visual Studio, this can be accomplished by [/FR](../VS_visualcpp/-FR---Fr--Create-.Sbr-File-.md) your entire project, then recheck on a file by file basis.  
  
 If the problem is caused by a .bsc file larger than 64MB, reducing the number of .sbr files as input will decrease the size of the resulting .bsc file. In addition, the amount of browse information may be reduced through the use of the /Em (Exclude Macro Expanded Symbols), /El (Exclude Local Variables), and /Es (Exclude System Files).  
  
## See Also  
 [BSCMAKE Options](../VS_visualcpp/BSCMAKE-Options.md)