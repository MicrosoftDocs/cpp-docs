---
title: ".CODE | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools", "cpp-masm"]
ms.topic: "reference"
f1_keywords: [".CODE"]
dev_langs: ["C++"]
helpviewer_keywords: [".CODE directive"]
ms.assetid: 2b8c882c-c0d2-4fa3-8335-e6b12717a4f4
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# .CODE
When used with [.MODEL](../../assembler/masm/dot-model.md), indicates the start of a code segment.  
  
## Syntax  
  
```  
.CODE [[name]]  
```  
  
#### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`name`|Optional parameter that specifies the name of the code segment. The default name is _TEXT for tiny, small, compact, and flat [models](../../assembler/masm/dot-model.md). The default name is *modulename*_TEXT for other models.|  
  
## See Also  
 [Directives Reference](../../assembler/masm/directives-reference.md)   
 [.DATA](../../assembler/masm/dot-data.md)