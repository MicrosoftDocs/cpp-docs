---
title: "Linker Tools Error LNK1264 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1264"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1264"
ms.assetid: 23b1aad7-d382-42c1-bae8-db68575c57a8
caps.latest.revision: 9
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
# Linker Tools Error LNK1264
/LTCG:PGINSTRUMENT specified but no code generation required; instrumentation failed  
  
 **/LTCG:PGINSTRUMENT** was specified but no .obj files were found that were compiled with [/GL](../../build/reference/gl-whole-program-optimization.md). Instrumentation cannot take place and the link failed. There must be at least one .obj file on the command line that is compiled with **/GL** so that the instrumentation can occur.  
  
 Profile guided optimization (PGO) is only available in 64-bit compilers.