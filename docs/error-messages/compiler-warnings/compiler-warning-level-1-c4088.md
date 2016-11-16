---
title: "Compiler Warning (level 1) C4088 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4088"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4088"
ms.assetid: 9bab817c-16b2-4324-be5e-f9cbb06b702e
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
# Compiler Warning (level 1) C4088
'function' : pointer mismatch in actual parameter 'number', formal parameter 'number'  
  
 The corresponding formal and actual parameters have a different level of indirection. The actual parameter is passed without change. The called function interprets its value as a pointer.