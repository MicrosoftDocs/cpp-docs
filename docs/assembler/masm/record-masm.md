---
title: "RECORD (MASM) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["RECORD"]
dev_langs: ["C++"]
helpviewer_keywords: ["RECORD directive"]
ms.assetid: c83db394-0fe3-468f-813f-13302cdc862d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# RECORD (MASM)
Declares a record type consisting of the specified fields. *fieldname* names the field, *width* specifies the number of bits, and *expression* gives its initial value.  
  
## Syntax  
  
```  
  
   recordname RECORD fieldname:width [[= expression]]   
[[, fieldname:width [[= expression]]]]...  
```  
  
## See Also  
 [Directives Reference](../../assembler/masm/directives-reference.md)