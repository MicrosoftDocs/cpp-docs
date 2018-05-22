---
title: "Including Bracketed Filenames | Microsoft Docs"
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
ms.assetid: 6a4e5411-c35e-48b8-90ef-b37ac324ed94
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Including Bracketed Filenames
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Including Bracketed Filenames](https://docs.microsoft.com/cpp/c-language/including-bracketed-filenames).  
  
ANSI 3.8.2** The method for locating includable source files  
  
 For file specifications enclosed in angle brackets, the preprocessor does not search directories of the parent files. A "parent" file is the file that has the [#include](../preprocessor/hash-include-directive-c-cpp.md) directive in it. Instead, it begins by searching for the file in the directories specified on the compiler command line following /I. If the /I option is not present or fails, the preprocessor uses the INCLUDE environment variable to find any include files within angle brackets. The INCLUDE environment variable can contain multiple paths separated by semicolons (**;**). If more than one directory appears as part of the /I option or within the INCLUDE environment variable, the preprocessor searches them in the order in which they appear.  
  
## See Also  
 [Preprocessing Directives](../c-language/preprocessing-directives.md)





