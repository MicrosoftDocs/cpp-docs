---
title: "Linker Tools Error LNK1166 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1166"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1166"
ms.assetid: d69548a8-0efb-44e1-90b7-b27636a4b575
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
# Linker Tools Error LNK1166
cannot adjust code at offset=offset, va=value  
  
 LINK was unable to pad the code as required.  
  
 Certain instructions are not allowed to cross page boundaries on some processors. LINK attempts to add pads to correct this situation. In this case, LINK could not work around the problem.