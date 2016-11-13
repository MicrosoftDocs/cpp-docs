---
title: "ML Nonfatal Error A2219 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "A2219"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "A2219"
ms.assetid: 5ebc2f40-e47e-4f8e-b7b9-960b9cfc9f6d
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
# ML Nonfatal Error A2219
**Bad alignment for offset in unwind code**  
  
 The operand for [.ALLOCSTACK](../../assembler/masm/dot-allocstack.md) and [.SAVEREG](../../assembler/masm/dot-savereg.md) must be a multiple of 8.  The operand for [.SAVEXMM128](../../assembler/masm/dot-savexmm128.md) and [.SETFRAME](../../assembler/masm/dot-setframe.md) must be a multiple of 16.  
  
## See Also  
 [ML Error Messages](../../assembler/masm/ml-error-messages.md)