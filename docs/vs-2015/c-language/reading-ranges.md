---
title: "Reading Ranges | Microsoft Docs"
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
ms.assetid: 99de29ce-ab14-46f4-97e1-2081fd996b53
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Reading Ranges
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Reading Ranges](https://docs.microsoft.com/cpp/c-language/reading-ranges).  
  
ANSI 4.9.6.2** The interpretation of a dash (–) character that is neither the first nor the last character in the scanlist for % [ conversion in the `fscanf` function  
  
 The following line  
  
```  
fscanf( fileptr, "%[A-Z]", strptr);  
```  
  
 reads any number of characters in the range A–Z into the string to which `strptr` points.  
  
## See Also  
 [Library Functions](../c-language/library-functions.md)





