---
title: "No Linkage | Microsoft Docs"
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
helpviewer_keywords: 
  - "no linkage"
  - "linkage [C++], none"
ms.assetid: 5a413082-1034-4e04-b76b-8d14668bf434
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# No Linkage
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [No Linkage](https://docs.microsoft.com/cpp/c-language/no-linkage).  
  
If a declaration for an identifier within a block does not include the `extern` storage-class specifier, the identifier has no linkage and is unique to the function.  
  
 The following identifiers have no linkage:  
  
-   An identifier declared to be anything other than an object or a function  
  
-   An identifier declared to be a function parameter  
  
-   A block-scope identifier for an object declared without the `extern` storage-class specifier  
  
 If an identifier has no linkage, declaring the same name again (in a declarator or type specifier) in the same scope level generates a symbol redefinition error.  
  
## See Also  
 [Using extern to Specify Linkage](../cpp/using-extern-to-specify-linkage.md)





