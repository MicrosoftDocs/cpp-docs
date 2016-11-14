---
title: "Compiler Warning (level 1) C4650 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4650"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4650"
ms.assetid: 3190b3e3-dcd6-4846-939b-f900ab652b2a
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
# Compiler Warning (level 1) C4650
debugging information not in precompiled header; only global symbols from the header will be available  
  
 The precompiled header file was not compiled with Microsoft symbolic debugging information.  
  
 When linked, the resulting executable or dynamic-link library file will not include debugging information for local symbols contained in the precompiled header.  
  
 This warning can be avoided by recompiling the precompiled header file with the [/Zi](../../build/reference/z7-zi-zi-debug-information-format.md) command-line option.