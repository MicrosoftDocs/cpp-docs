---
title: "Profile-Guided Optimization Error PG0165 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "PG0165"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PG0165"
ms.assetid: e98122e7-ddee-4a2c-96b2-d232e4c65f3e
caps.latest.revision: 12
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
# Profile-Guided Optimization Error PG0165
Reading 'Filename.pgd' : 'PGD version is not supported (version mismatch)'.  
  
 PGD files are specific to a particular compiler toolset. This error is generated when you are using a different compiler than the one used for *Filename*.pgd. This error indicates that this compiler toolset cannot use the data from *Filename*.pgd to optimize the current program.  
  
 To resolve this problem, regenerate *Filename*.pgd by using the current compiler toolset.