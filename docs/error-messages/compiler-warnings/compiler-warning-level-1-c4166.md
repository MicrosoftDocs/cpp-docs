---
title: "Compiler Warning (level 1) C4166 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4166"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4166"
ms.assetid: 4e5398a1-d913-4791-a470-06fc99c36ac5
caps.latest.revision: 5
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
# Compiler Warning (level 1) C4166
**illegal calling convention for constructor/destructor**  
  
 Constructors and destructors cannot have calling conventions other than the default for the platform (except when you explicitly specify **__clrcall**).