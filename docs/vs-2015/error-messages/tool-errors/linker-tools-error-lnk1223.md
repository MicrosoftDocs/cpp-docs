---
title: "Linker Tools Error LNK1223 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1223"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1223"
ms.assetid: c4728c36-daee-462f-a1c7-8733dcdec88e
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Linker Tools Error LNK1223
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Linker Tools Error LNK1223](https://docs.microsoft.com/cpp/error-messages/tool-errors/linker-tools-error-lnk1223).  
  
  
invalid or corrupt file: file contains invalid .pdata contributions  
  
 For RISC platforms that use pdata, this error will occur if the compiler emitted a .pdata section with unsorted entries.  
  
 To fix this issue, try compiling without [/GL (Whole Program Optimization)](../../error-messages/tool-errors/linker-tools-error-lnk1223.md) enabled. Empty function bodies can also cause this error in some cases.

