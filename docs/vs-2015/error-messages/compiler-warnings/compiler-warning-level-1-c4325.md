---
title: "Compiler Warning (level 1) C4325 | Microsoft Docs"
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
  - "C4325"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4325"
ms.assetid: 8127a08c-d626-481b-aa7b-04a3fdc9a9ec
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4325
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4325](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4325).  
  
  
attributes for standard section '**   
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

