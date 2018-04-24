---
title: "Signed Bitwise Operations | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "bitwise operations"
  - "signed bitwise operations"
ms.assetid: 1e5cf65b-ee32-41a0-a5c2-82c1854091f6
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Signed Bitwise Operations
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Signed Bitwise Operations](https://docs.microsoft.com/cpp/c-language/signed-bitwise-operations).  
  
ANSI 3.3** The results of bitwise operations on signed integers  
  
 Bitwise operations on signed integers work the same as bitwise operations on unsigned integers. For example, `–16 & 99` can be expressed in binary as  
  
```  
  11111111 11110000  
& 00000000 01100011  
  _________________  
  00000000 01100000  
```  
  
 The result of the bitwise AND is 96.  
  
## See Also  
 [Integers](../c-language/integers.md)





