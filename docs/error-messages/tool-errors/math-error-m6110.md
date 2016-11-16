---
title: "Math Error M6110 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "M6110"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "M6110"
ms.assetid: aac9ae37-6a6d-46e9-85d4-dfe03f1c3e11
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
# Math Error M6110
stack overflow  
  
 A floating-point expression caused a floating-point stack overflow.  
  
 Stack-overflow floating-point exceptions are trapped up to a limit of seven levels in addition to the eight levels usually supported by the 8087/287/387 coprocessor.  
  
 Program terminates with exit code 138.