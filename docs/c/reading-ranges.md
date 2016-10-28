---
title: "Reading Ranges"
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
  - "C"
ms.assetid: 99de29ce-ab14-46f4-97e1-2081fd996b53
caps.latest.revision: 6
ms.author: "mithom"
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
# Reading Ranges
**ANSI 4.9.6.2** The interpretation of a dash (–) character that is neither the first nor the last character in the scanlist for % [ conversion in the `fscanf` function  
  
 The following line  
  
```  
fscanf( fileptr, "%[A-Z]", strptr);  
```  
  
 reads any number of characters in the range A–Z into the string to which `strptr` points.  
  
## See Also  
 [Library Functions](../c/library-functions.md)