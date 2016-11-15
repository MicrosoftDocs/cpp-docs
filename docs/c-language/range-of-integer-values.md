---
title: "Range of Integer Values | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
ms.assetid: 0e9c6161-8f3f-4bfb-9fcc-a6c8dc97d702
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
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
# Range of Integer Values
**ANSI 3.1.2.5** The representations and sets of values of the various types of integers  
  
 Integers contain 32 bits (four bytes). Signed integers are represented in two's-complement form. The most-significant bit holds the sign: 1 for negative, 0 for positive and zero. The values are listed below:  
  
|Type|Minimum and Maximum|  
|----------|-------------------------|  
|**unsigned short**|0 to 65535|  
|`signed short`|–32768 to 32767|  
|`unsigned long`|0 to 4294967295|  
|**signed long**|–2147483648 to 2147483647|  
  
## See Also  
 [Integers](../c-language/integers.md)