---
title: "Fatal Error C1014"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "C1014"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1014"
ms.assetid: 4c01ef70-e765-4d07-a3fe-a11c19fb610b
caps.latest.revision: 6
ms.author: "corob"
manager: "douge"
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