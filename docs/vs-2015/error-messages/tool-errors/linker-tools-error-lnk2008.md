---
title: "Linker Tools Error LNK2008 | Microsoft Docs"
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
  - "LNK2008"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK2008"
ms.assetid: bbcd83c5-c8ae-439e-a033-63643a5bb373
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Linker Tools Error LNK2008
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Linker Tools Error LNK2008](https://docs.microsoft.com/cpp/error-messages/tool-errors/linker-tools-error-lnk2008).  
  
  
Fixup target is not aligned 'symbol_name'  
  
 LINK found a fixup target in your object file that was not aligned properly.  
  
 This error can be caused by custom secton alignment (for example, #pragma [pack](../../preprocessor/pack.md)), [align](../../cpp/align-cpp.md) modifier, or by using assembly language code that modifies secton alignment.  
  
 If your code does not use any of the above, this may be caused by the compiler.

