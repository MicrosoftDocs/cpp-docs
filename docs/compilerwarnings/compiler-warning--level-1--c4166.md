---
title: "Compiler Warning (level 1) C4166"
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
  - "C4166"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4166"
ms.assetid: 4e5398a1-d913-4791-a470-06fc99c36ac5
caps.latest.revision: 5
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
# Compiler Warning (level 1) C4166
**illegal calling convention for constructor/destructor**  
  
 Constructors and destructors cannot have calling conventions other than the default for the platform (except when you explicitly specify **__clrcall**).