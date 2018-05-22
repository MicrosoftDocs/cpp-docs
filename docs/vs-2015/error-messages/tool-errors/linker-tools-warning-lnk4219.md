---
title: "Linker Tools Warning LNK4219 | Microsoft Docs"
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
  - "LNK4219"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4219"
ms.assetid: 363fedf4-b10c-4985-811a-55a9fba688d6
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Linker Tools Warning LNK4219
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Linker Tools Warning LNK4219](https://docs.microsoft.com/cpp/error-messages/tool-errors/linker-tools-warning-lnk4219).  
  
  
fixup name fixup overflow. Target 'target symbol name' is out of range, inserting thunk  
  
 The linker inserted a thunk in a situation where the address or offset was unable to fit in the given instruction because the target symbol is too far away from the instruction's location.  
  
 You may want to reorder the image (using the [/ORDER](../../build/reference/order-put-functions-in-order.md) option, for example) to avoid the extra level of indirection.

