---
title: "Fatal Error C1014 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C1014"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1014"
ms.assetid: 4c01ef70-e765-4d07-a3fe-a11c19fb610b
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Fatal Error C1014
too many include files : depth = level  
  
 The nesting of `#include` directives is too deep. Nested directives can include open files. The source file containing the directive counts as one file.