---
title: "Fatal Error C1307 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C1307"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1307"
ms.assetid: 6f77d3d4-ba8a-476c-b540-aff19eb4efc4
caps.latest.revision: 7
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
# Fatal Error C1307
program has been edited since profile data was collected  
  
 When using [/LTCG:PGOPTIMIZE](../../build/reference/ltcg-link-time-code-generation.md), the linker detected an input module that was recompiled after /LTCG:PGINSTRUMENT and that the module was changed to the point where existing profile data is no longer relevant. For example, if the call graph changed in the recompiled module, the compiler will generate C1307.  
  
 To resolve this error, run /LTCG:PGINSTRUMENT, redo all test runs, and run /LTCG:PGOPTIMIZE. If you cannot run /LTCG:PGINSTRUMENT and redo all test runs, use /LTCG:PGUPDATE instead of /LTCG:PGOPTIMIZE to create the optimized image.