---
title: "Compiler Warning (level 1) C4612 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4612"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4612"
ms.assetid: 21ac02b2-51cd-4aff-9b70-d543511d5962
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
# Compiler Warning (level 1) C4612
error in include filename  
  
 This warning occurs with **#pragma include_alias** when a filename is incorrect or missing.  
  
 The arguments to the **#pragma include_alias** statement can use the quote from (**"***filename***"**) or angle-bracket form (**\<***filename***>**), but both must use the same form.  
  
## Example  
  
```  
// C4612.cpp  
// compile with: /W1 /LD  
#pragma include_alias("StandardIO", <stdio.h>) // C4612  
```