---
title: "Resource Compiler Fatal Error RC1014 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
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
---
# Resource Compiler Fatal Error RC1014
too many include files : depth = 'level'  
  
 The nesting depth of `#include` directives was too great.  
  
 Use nested directives to include open files. The source file containing the directive is counted as one of the files.