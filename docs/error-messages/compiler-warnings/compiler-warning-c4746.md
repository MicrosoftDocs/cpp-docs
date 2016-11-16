---
title: "Compiler Warning C4746 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
dev_langs: 
  - "C++"
ms.assetid: 5e79ab46-6031-499a-a986-716c866b6c0e
caps.latest.revision: 2
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
# Compiler Warning C4746
volatile access of '\<expression>' is subject to /volatile:[iso&#124;ms] setting; consider using __iso_volatile_load/store intrinsic functions.  
  
 C4746 is emitted whenever a volatile variable is accessed directly. It is intended to help developers identify code locations that are affected by the specific volatile model currently specified (which can be controlled with the [/volatile](../../build/reference/volatile-volatile-keyword-interpretation.md) compiler option). In particular, it can be useful in locating compiler-generated hardware memory barriers when /volatile:ms is used.  
  
 The __iso_volatile_load/store intrinsics can be used to explicitly access volatile memory without being affected by the volatile model. Using these intrinsics will not trigger C4746.  
  
 This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.