---
title: "Character Testing"
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
ms.assetid: 376ba061-bae3-427e-9569-33fa5949a199
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
# Character Testing
**ANSI 4.3.1** The sets of characters tested for by the `isalnum`, `isalpha`, `iscntrl`, `islower`, `isprint`, and `isupper` functions  
  
 The following list describes these functions as they are implemented by the Microsoft C compiler.  
  
|Function|Tests For|  
|--------------|---------------|  
|`isalnum`|Characters 0 – 9, A–Z, a–z ASCII 48–57, 65–90, 97–122|  
|`isalpha`|Characters A–Z, a–z ASCII 65–90, 97–122|  
|`iscntrl`|ASCII 0 –31, 127|  
|`islower`|Characters a–z ASCII 97–122|  
|`isprint`|Characters A–Z, a–z, 0 – 9, punctuation, space ASCII 32–126|  
|`isupper`|Characters A–Z ASCII 65–90|  
  
## See Also  
 [Library Functions](../c/library-functions.md)