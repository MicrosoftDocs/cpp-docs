---
title: "Compiler Error C2212 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2212"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2212"]
ms.assetid: 3fdab304-272c-4d07-bfd4-fad75170e536
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2212
'identifier' : __based not available for pointers to functions  
  
 Pointers to functions cannot be declared `__based`. If you need code-based data, use the `__declspec` keyword or the `data_seg` pragma.