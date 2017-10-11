---
title: "Compiler Warning (level 1) C4325 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C4325"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4325"]
ms.assetid: 8127a08c-d626-481b-aa7b-04a3fdc9a9ec
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4325
**attributes for standard section '**   
 ***section* ' ignored**  
  
 You may not change the attributes of a standard section. For example:  
  
```  
#pragma section(".sdata", long)  
```  
  
 This would overwrite the `.sdata` standard section which uses the **short** data type with the **long** data type.  
  
 Standard sections whose attributes you may not change include,  
  
-   .data  
  
-   .sdata  
  
-   .bss  
  
-   .sbss  
  
-   .text  
  
-   .const  
  
-   .sconst  
  
-   .rdata  
  
-   .srdata  
  
 Additional sections may be added later.  
  
## See Also  
 [section](../../preprocessor/section.md)