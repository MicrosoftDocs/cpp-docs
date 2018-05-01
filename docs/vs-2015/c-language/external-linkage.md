---
title: "External Linkage | Microsoft Docs"
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
  - "linkage [C++], external"
  - "external linkage, about external linkage"
  - "external linkage"
ms.assetid: a6f8ea69-b405-4cdd-bf12-ad5462b73183
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# External Linkage
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [External Linkage](https://docs.microsoft.com/cpp/c-language/external-linkage).  
  
If the first declaration at file-scope level for an identifier does not use the **static** storage-class specifier, the object has external linkage.  
  
 If the declaration of an identifier for a function has no *storage-class-specifier*, its linkage is determined exactly as if it were declared with the *storage-class-specifier* `extern`. If the declaration of an identifier for an object has file scope and no *storage-class-specifier*, its linkage is external.  
  
 An identifier's name with external linkage designates the same function or data object as does any other declaration for the same name with external linkage. The two declarations can be in the same translation unit or in different translation units. If the object or function also has global lifetime, the object or function is shared by the entire program.  
  
## See Also  
 [Using extern to Specify Linkage](../cpp/using-extern-to-specify-linkage.md)





