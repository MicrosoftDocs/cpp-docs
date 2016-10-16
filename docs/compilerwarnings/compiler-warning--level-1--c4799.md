---
title: "Compiler Warning (level 1) C4799"
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
  - "C4799"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4799"
ms.assetid: 8ecbd06f-c778-4371-a2fb-c690b6743ec8
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
# Compiler Warning (level 1) C4799
No EMMS at end of function 'function'  
  
 The function has at least one MMX instruction, but does not have an EMMS instruction. When a multimedia instruction is used, an EMMS instruction should also be used to clear the multimedia tag word at the end of the MMX code. For more information on EMMS instructions, see [Guidelines for When to Use EMMS](assetId:///a0c3b1e4-01a4-419c-a58f-ff1e97dea7d3).  
  
 You may get C4799 when using ivec.h, indicating that the code does not use properly execute the EMMS instruction before returning. This is a false warning for these headers. You may turn these off by defining _SILENCE_IVEC_C4799 in ivec.h. However, be aware that this will also keep the compiler from giving correct warnings of this type.  
  
 For related information, see the [Intel's MMX Instruction Set](../intrinsics/intel-s-mmx-instruction-set.md).