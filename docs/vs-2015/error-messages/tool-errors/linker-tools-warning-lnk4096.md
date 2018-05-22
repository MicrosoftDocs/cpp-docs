---
title: "Linker Tools Warning LNK4096 | Microsoft Docs"
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
  - "LNK4096"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4096"
ms.assetid: ef6fba38-59a1-4d86-bcac-cadf44d87a36
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Linker Tools Warning LNK4096
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Linker Tools Warning LNK4096](https://docs.microsoft.com/cpp/error-messages/tool-errors/linker-tools-warning-lnk4096).  
  
  
BASE value "number" is invalid for Windows 95 and Windows 98; image may not run  
  
 The base address you specified is invalid. Windows 95 and Windows 98 executable files must have a base address greater than 0x400000. For more information on base addresses, see the [/BASE](../../build/reference/base-base-address.md) linker option.

