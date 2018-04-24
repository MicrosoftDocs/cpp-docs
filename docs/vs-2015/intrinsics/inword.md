---
title: "__inword | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__indword_cpp"
  - "__indword"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "in instruction"
  - "__inword intrinsic"
ms.assetid: 5c617edd-6709-40a1-aad2-40d5e39283c6
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __inword
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [__inword](https://docs.microsoft.com/cpp/intrinsics/inword).  
  
  
Microsoft Specific**  
  
 Reads data from the specified port using the `in` instruction.  
  
## Syntax  
  
```  
unsigned short __inword(  
   unsigned short Port  
);  
```  
  
#### Parameters  
 [in] `Port`  
 The port to read from.  
  
## Return Value  
 The word of data read.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__inword`|x86, [!INCLUDE[vcprx64](../includes/vcprx64-md.md)]|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 This routine is only available as an intrinsic.  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)

