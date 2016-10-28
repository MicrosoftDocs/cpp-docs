---
title: "Resource Compiler Fatal Error RC1014"
ms.custom: ""
ms.date: "10/19/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "RC1014"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RC1014"
ms.assetid: 30119ac9-4e2c-4e9b-8635-22fa63003da1
caps.latest.revision: 6
author: "corob-msft"
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
# Resource Compiler Fatal Error RC1014
too many include files : depth = 'level'  
  
 The nesting depth of `#include` directives was too great.  
  
 Use nested directives to include open files. The source file containing the directive is counted as one of the files.