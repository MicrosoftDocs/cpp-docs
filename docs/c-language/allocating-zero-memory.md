---
title: "Allocating Zero Memory | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
dev_langs: ["C++"]
helpviewer_keywords: ["memory allocation, zero memory", "zero memory"]
ms.assetid: 768f2ab9-83a1-4887-8eb5-c094c18489a8
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Allocating Zero Memory
**ANSI 4.10.3** The behavior of the `calloc`, `malloc`, or `realloc` function if the size requested is zero  
  
 The `calloc`, `malloc`, and `realloc` functions accept zero as an argument. No actual memory is allocated, but a valid pointer is returned and the memory block can be modified later by realloc.  
  
## See Also  
 [Library Functions](../c-language/library-functions.md)