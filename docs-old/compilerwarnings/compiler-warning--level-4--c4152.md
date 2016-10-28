---
title: "Compiler Warning (level 4) C4152"
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
  - "C4152"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4152"
ms.assetid: 6025ab70-d7cf-4730-913a-3ca0b1186a3a
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
# Compiler Warning (level 4) C4152
non standard extension, function/data ptr conversion in expression  
  
 A function pointer is converted to or from a data pointer. This conversion is allowed under Microsoft extensions (/Ze) but not under ANSI C.