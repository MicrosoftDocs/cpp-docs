---
title: "Including Quoted Filenames | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
ms.assetid: 789a047e-ea38-4c99-b71d-a2ad9c81daee
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Including Quoted Filenames
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Including Quoted Filenames](https://docs.microsoft.com/cpp/c-language/including-quoted-filenames).  
  
ANSI 3.8.2** The support for quoted names for includable source files  
  
 If you specify a complete, unambiguous path specification for the include file between two sets of double quotation marks (" "), the preprocessor searches only that path specification and ignores the standard directories.  
  
 For include files specified as [#include](../preprocessor/hash-include-directive-c-cpp.md) "path-spec", directory searching begins with the directories of the parent file, then proceeds through the directories of any grandparent files. Thus, searching begins relative to the directory containing the source file currently being processed. If there is no grandparent file and the file has not been found, the search continues as if the filename were enclosed in angle brackets.  
  
## See Also  
 [Preprocessing Directives](../c-language/preprocessing-directives.md)





