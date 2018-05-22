---
title: "BSCMAKE Error BK1503 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "BK1503"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BK1503"
ms.assetid: e6582344-b91e-486f-baf3-4f9028d83c3b
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# BSCMAKE Error BK1503
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [BSCMAKE Error BK1503](https://docs.microsoft.com/cpp/error-messages/tool-errors/bscmake-error-bk1503).  
  
  
cannot write to file 'filename' [: reason]  
  
 BSCMAKE combines the .sbr files generated during compilation into one browser database. If the resulting browser database exceeds 64 MB, or if the number of input (.sbr) files exceeds 4092, this error will be emitted.  
  
 If the problem is caused by more than 4092 .sbr files, you must reduce the number of input files. From within Visual Studio, this can be accomplished by [/FR](../../build/reference/fr-fr-create-dot-sbr-file.md) your entire project, then recheck on a file by file basis.  
  
 If the problem is caused by a .bsc file larger than 64MB, reducing the number of .sbr files as input will decrease the size of the resulting .bsc file. In addition, the amount of browse information may be reduced through the use of the /Em (Exclude Macro Expanded Symbols), /El (Exclude Local Variables), and /Es (Exclude System Files).  
  
## See Also  
 [BSCMAKE Options](../../build/reference/bscmake-options.md)

