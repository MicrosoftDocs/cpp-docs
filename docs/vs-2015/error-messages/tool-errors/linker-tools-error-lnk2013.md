---
title: "Linker Tools Error LNK2013 | Microsoft Docs"
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
  - "LNK2013"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK2013"
ms.assetid: 21408e2d-3f56-4d1f-a031-00df70785ed4
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Linker Tools Error LNK2013
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Linker Tools Error LNK2013](https://docs.microsoft.com/cpp/error-messages/tool-errors/linker-tools-error-lnk2013).  
  
  
fixup type fixup overflow. Target 'symbol name' is out of range  
  
 The linker cannot fit the necessary address or offset into the given instruction because the target symbol is too far away from the instruction's location.  
  
 You can resolve this problem by creating multiple images or by using the [/ORDER](../../build/reference/order-put-functions-in-order.md) option so the instruction and target are closer together.  
  
 When the symbol name is a user-defined symbol (and not a compiler-generated symbol), you can also try the following actions to resolve the error:  
  
-   Change the static function to be non-static.  
  
-   Rename the code section containing the static function to be the same as the caller.  
  
 Use `DUMPBIN /SYMBOLS`, to see if a function is static.

