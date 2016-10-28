---
title: "Creating an .Sbr File"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SBR files"
  - "BSCMAKE, input files"
  - ".sbr files"
  - "source browser files"
  - "local symbols in browse information"
  - "symbols"
ms.assetid: bdb4b93c-a88a-441a-84fd-01087d03be25
caps.latest.revision: 7
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
# Creating an .Sbr File
The input files for BSCMAKE are .sbr files. The compiler creates an .sbr file for each object file (.obj) it compiles. When you build or update your browse information file, all .sbr files for your project must be available on disk.  
  
 To create an .sbr file with all possible information, specify [/FR](../buildref/-fr---fr--create-.sbr-file-.md).  
  
 To create an .sbr file that doesn't contain local symbols, specify [/Fr](../buildref/-fr---fr--create-.sbr-file-.md). If the .sbr files contain local symbols, you can still omit them from the .bsc file by using BSCMAKE's [/El option](../buildref/bscmake-options.md)`.`  
  
 You can create an .sbr file without performing a full compile. For example, you can specify the /Zs option to the compiler to perform a syntax check and still generate an .sbr file if you specify /FR or /Fr.  
  
 The build process can be more efficient if the .sbr files are first packed to remove unreferenced definitions. The compiler automatically packs .sbr files.  
  
## See Also  
 [Building a .Bsc File](../buildref/building-a-.bsc-file.md)