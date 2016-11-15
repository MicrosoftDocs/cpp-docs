---
title: "Linker Tools Error LNK1158 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1158"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1158"
ms.assetid: 45febf16-d9e1-42db-af91-532e2717fd6a
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
# Linker Tools Error LNK1158
cannot run 'filename'  
  
 The given executable file called by [LINK](../../build/reference/linker-command-line-syntax.md) is not in the directory that contains LINK nor in a directory specified in the PATH environment variable.  
  
 For example, you will get this error if you try to use the PGOPTIMIZE parameter to the [/LTCG](../../build/reference/ltcg-link-time-code-generation.md) linker option on a machine with a 32-bit operating system.