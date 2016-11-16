---
title: "Casting Integers to Floating-Point Values | Microsoft Docs"
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
helpviewer_keywords: 
  - "integers, casting to floating-point values"
ms.assetid: 81fd5b7d-15eb-4c11-a8c8-e1621ff54fd3
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
# Casting Integers to Floating-Point Values
**ANSI 3.2.1.3** The direction of truncation when an integral number is converted to a floating-point number that cannot exactly represent the original value  
  
 When an integral number is cast to a floating-point value that cannot exactly represent the value, the value is rounded (up or down) to the nearest suitable value.  
  
 For example, casting an **unsigned long** (with 32 bits of precision) to a **float** (whose mantissa has 23 bits of precision) rounds the number to the nearest multiple of 256. The **long** values 4,294,966,913 to 4,294,967,167 are all rounded to the **float** value 4,294,967,040.  
  
## See Also  
 [Floating-Point Math](../c-language/floating-point-math.md)