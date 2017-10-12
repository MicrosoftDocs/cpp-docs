---
title: "Linker Tools Warning LNK4037 | Microsoft Docs"
ms.custom: ""
ms.date: "10/04/2017"
ms.reviewer: ""
ms.suite: ""
ms.technology:  
  - "cpp-tools"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK4037"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4037"
ms.assetid: 9ba02fd3-b04f-4679-bab9-26fa82cf09bb
caps.latest.revision: 0
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Linker Tools Warning LNK4037

>'*symbol*' does not exist; ignored

The decorated name *symbol* could not be ordered by using the [/ORDER](../../build/reference/order-put-functions-in-order.md) option because it could not be found in the program. Check the specification of *symbol* in the order response file. For more information, see the [/ORDER (Put functions in order)](../../build/reference/order-put-functions-in-order.md) linker option.

> [!NOTE]
> LINK cannot order static functions because static function names are not public symbol names. When **/ORDER** is specified, this linker warning is generated for each symbol in the order response file that is either static or not found.