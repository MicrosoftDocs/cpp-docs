---
title: "ML Warning A4014 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "A4014"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "A4014"
ms.assetid: 11bc8920-3255-4ac8-999a-b9ea9c15bc81
caps.latest.revision: 5
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
# ML Warning A4014
instructions and initialized data not supported in BSS segments  
  
 An attempt was made to define initialized data within a BSS section.  A BSS section is defined as a class whose name is BSS.  This includes the simplified segment `.data?`.  
  
## See Also  
 [ML Error Messages](../../assembler/masm/ml-error-messages.md)