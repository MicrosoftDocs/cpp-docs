---
title: "Truncation of Floating-Point Values | Microsoft Docs"
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
  - "floating-point numbers, truncation"
ms.assetid: 051a6e22-c636-4af8-9ac4-40160f4affca
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
# Truncation of Floating-Point Values
**ANSI 3.2.1.4** The direction of truncation or rounding when a floating-point number is converted to a narrower floating-point number  
  
 When an underflow occurs, the value of a floating-point variable is rounded down to zero. An overflow may cause a run-time error or it may produce an unpredictable value, depending on the optimizations specified.  
  
## See Also  
 [Floating-Point Math](../c-language/floating-point-math.md)