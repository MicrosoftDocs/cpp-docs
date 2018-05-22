---
title: "Compiler Error C2212 | Microsoft Docs"
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
  - "C2212"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2212"
ms.assetid: 3fdab304-272c-4d07-bfd4-fad75170e536
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2212
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2212](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2212).  
  
  
identifier' : __based not available for pointers to functions  
  
 Pointers to functions cannot be declared `__based`. If you need code-based data, use the `__declspec` keyword or the `data_seg` pragma.

