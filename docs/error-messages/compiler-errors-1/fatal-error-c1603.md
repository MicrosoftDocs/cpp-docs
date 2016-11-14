---
title: "Fatal Error C1603 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C1603"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1603"
ms.assetid: e5a06925-f916-4637-8240-6d2d280e6124
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
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
# Fatal Error C1603
inline assembly branch target out of range by 'number' bytes  
  
 The computed distance between a JCXZ or JECXZ instruction and its specified target label was greater than 128 bytes. Update your code so that the label is closer to the instruction.