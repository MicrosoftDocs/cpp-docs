---
title: "Compiler Warning (level 1) C4650"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "error-reference"
f1_keywords: 
  - "C4650"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4650"
ms.assetid: 3190b3e3-dcd6-4846-939b-f900ab652b2a
caps.latest.revision: 7
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
  
 This warning can be avoided by recompiling the precompiled header file with the [/Zi](../buildref/-z7---zi---zi--debug-information-format-.md) command-line option.